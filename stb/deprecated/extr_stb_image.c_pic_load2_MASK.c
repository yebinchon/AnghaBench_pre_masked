
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int stbi_uc ;
typedef int stbi__uint8 ;
typedef int stbi ;
struct TYPE_2__ {int size; int type; int channel; } ;
typedef TYPE_1__ pic_packet_t ;
typedef int packets ;


 scalar_t__ FUNC_0 (int *) ;
 int* FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int,int*,int*) ;
 int FUNC_6 (int *,int,int*) ;

__attribute__((used)) static stbi_uc *FUNC_7(stbi *VAR_0,int VAR_1,int VAR_2,int *VAR_3, stbi_uc *VAR_4)
{
   int VAR_5=0,VAR_6=0,VAR_7,VAR_8;
   pic_packet_t VAR_9[10];



   do {
      pic_packet_t *VAR_10;

      if (VAR_6==sizeof(VAR_9)/sizeof(VAR_9[0]))
         return FUNC_1("bad format","too many packets");

      VAR_10 = &VAR_9[VAR_6++];

      VAR_8 = FUNC_3(VAR_0);
      VAR_10->size = FUNC_4(VAR_0);
      VAR_10->type = FUNC_4(VAR_0);
      VAR_10->channel = FUNC_4(VAR_0);

      VAR_5 |= VAR_10->channel;

      if (FUNC_0(VAR_0)) return FUNC_1("bad file","file too short (reading packets)");
      if (VAR_10->size != 8) return FUNC_1("bad format","packet isn't 8bpp");
   } while (VAR_8);

   *VAR_3 = (VAR_5 & 0x10 ? 4 : 3);

   for(VAR_7=0; VAR_7<VAR_2; ++VAR_7) {
      int VAR_11;

      for(VAR_11=0; VAR_11 < VAR_6; ++VAR_11) {
         pic_packet_t *VAR_12 = &VAR_9[VAR_11];
         stbi_uc *VAR_13 = VAR_4+VAR_7*VAR_1*4;

         switch (VAR_12->type) {
            default:
               return FUNC_1("bad format","packet has bad compression type");

            case 0: {
               int VAR_14;

               for(VAR_14=0;VAR_14<VAR_1;++VAR_14, VAR_13+=4)
                  if (!FUNC_6(VAR_0,VAR_12->channel,VAR_13))
                     return 0;
               break;
            }

            case 1:
               {
                  int VAR_15=VAR_1, VAR_16;

                  while (VAR_15>0) {
                     stbi_uc VAR_17,VAR_18[4];

                     VAR_17=FUNC_4(VAR_0);
                     if (FUNC_0(VAR_0)) return FUNC_1("bad file","file too short (pure read count)");

                     if (VAR_17 > VAR_15)
                        VAR_17 = (stbi__uint8) VAR_15;

                     if (!FUNC_6(VAR_0,VAR_12->channel,VAR_18)) return 0;

                     for(VAR_16=0; VAR_16<VAR_17; ++VAR_16,VAR_13+=4)
                        FUNC_5(VAR_12->channel,VAR_13,VAR_18);
                     VAR_15 -= VAR_17;
                  }
               }
               break;

            case 2: {
               int VAR_19=VAR_1;
               while (VAR_19>0) {
                  int VAR_20 = FUNC_3(VAR_0), VAR_21;
                  if (FUNC_0(VAR_0)) return FUNC_1("bad file","file too short (mixed read count)");

                  if (VAR_20 >= 128) {
                     stbi_uc VAR_22[4];
                     int VAR_23;

                     if (VAR_20==128)
                        VAR_20 = FUNC_2(VAR_0);
                     else
                        VAR_20 -= 127;
                     if (VAR_20 > VAR_19)
                        return FUNC_1("bad file","scanline overrun");

                     if (!FUNC_6(VAR_0,VAR_12->channel,VAR_22))
                        return 0;

                     for(VAR_23=0;VAR_23<VAR_20;++VAR_23, VAR_13 += 4)
                        FUNC_5(VAR_12->channel,VAR_13,VAR_22);
                  } else {
                     ++VAR_20;
                     if (VAR_20>VAR_19) return FUNC_1("bad file","scanline overrun");

                     for(VAR_21=0;VAR_21<VAR_20;++VAR_21, VAR_13+=4)
                        if (!FUNC_6(VAR_0,VAR_12->channel,VAR_13))
                           return 0;
                  }
                  VAR_19-=VAR_20;
               }
               break;
            }
         }
      }
   }

   return VAR_4;
}
