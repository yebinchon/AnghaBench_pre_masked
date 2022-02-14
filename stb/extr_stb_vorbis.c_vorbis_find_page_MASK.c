
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_6__ {unsigned int stream_len; scalar_t__ eof; } ;
typedef TYPE_1__ stb_vorbis ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int* VAR_0 ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;
 void* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static uint32 FUNC_4(stb_vorbis *VAR_1, uint32 *VAR_2, uint32 *VAR_3)
{
   for(;;) {
      int VAR_4;
      if (VAR_1->eof) return 0;
      VAR_4 = FUNC_1(VAR_1);
      if (VAR_4 == 0x4f) {
         unsigned int VAR_5 = FUNC_3(VAR_1);
         int VAR_6;

         if (VAR_5 - 25 > VAR_1->stream_len)
            return 0;

         for (VAR_6=1; VAR_6 < 4; ++VAR_6)
            if (FUNC_1(VAR_1) != VAR_0[VAR_6])
               break;
         if (VAR_1->eof) return 0;
         if (VAR_6 == 4) {
            uint8 VAR_7[27];
            uint32 VAR_8, VAR_9, VAR_10, VAR_11;
            for (VAR_8=0; VAR_8 < 4; ++VAR_8)
               VAR_7[VAR_8] = VAR_0[VAR_8];
            for (; VAR_8 < 27; ++VAR_8)
               VAR_7[VAR_8] = FUNC_1(VAR_1);
            if (VAR_1->eof) return 0;
            if (VAR_7[4] != 0) goto invalid;
            VAR_10 = VAR_7[22] + (VAR_7[23] << 8) + (VAR_7[24]<<16) + (VAR_7[25]<<24);
            for (VAR_8=22; VAR_8 < 26; ++VAR_8)
               VAR_7[VAR_8] = 0;
            VAR_9 = 0;
            for (VAR_8=0; VAR_8 < 27; ++VAR_8)
               VAR_9 = FUNC_0(VAR_9, VAR_7[VAR_8]);
            VAR_11 = 0;
            for (VAR_8=0; VAR_8 < VAR_7[26]; ++VAR_8) {
               int VAR_12 = FUNC_1(VAR_1);
               VAR_9 = FUNC_0(VAR_9, VAR_12);
               VAR_11 += VAR_12;
            }
            if (VAR_11 && VAR_1->eof) return 0;
            for (VAR_8=0; VAR_8 < VAR_11; ++VAR_8)
               VAR_9 = FUNC_0(VAR_9, FUNC_1(VAR_1));

            if (VAR_9 == VAR_10) {
               if (VAR_2)
                  *VAR_2 = FUNC_3(VAR_1);
               if (VAR_3) {
                  if (VAR_7[5] & 0x04)
                     *VAR_3 = 1;
                  else
                     *VAR_3 = 0;
               }
               FUNC_2(VAR_1, VAR_5-1);
               return 1;
            }
         }
        invalid:

         FUNC_2(VAR_1, VAR_5);
      }
   }
}
