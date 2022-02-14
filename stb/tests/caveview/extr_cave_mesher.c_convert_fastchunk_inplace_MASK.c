
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char** blockdata; unsigned char** data; unsigned char** light; unsigned char** skylight; unsigned char* pointer_to_free; } ;
typedef TYPE_1__ fast_chunk ;


 unsigned char FUNC_0 (unsigned char,unsigned char) ;
 unsigned char* VAR_0 ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int* VAR_1 ;
 unsigned char** VAR_2 ;
 unsigned char* VAR_3 ;

void FUNC_5(fast_chunk *VAR_4)
{
   int VAR_5;
   int VAR_6=0, VAR_7=0;
   unsigned char VAR_8[4096];

   unsigned char *VAR_9;


   FUNC_4(VAR_8, 0, 4096);

   for (VAR_5=0; VAR_5 < 16; ++VAR_5)
      VAR_6 += VAR_4->blockdata[VAR_5] != ((void*)0);


   VAR_9 = FUNC_2(16*16*16*2 * VAR_6);


   for (VAR_5=0; VAR_5 < 16; ++VAR_5) {
      if (VAR_4->blockdata[VAR_5]) {
         int VAR_10=0;
         unsigned char *VAR_11,*VAR_12,*VAR_13,*VAR_14;
         unsigned char *VAR_15, *VAR_16;


         VAR_11 = VAR_4->blockdata[VAR_5];
         VAR_12 = VAR_4->data[VAR_5];
         VAR_13 = VAR_4->light[VAR_5];
         VAR_14 = VAR_4->skylight[VAR_5];




         VAR_15 = VAR_9 + 16*16*16*2*VAR_7;



         for (VAR_10=0; VAR_10 < 16*16*16/2; VAR_10 += 1) {
            unsigned char VAR_17,VAR_18;
            unsigned char VAR_19 = VAR_12[VAR_10];
            VAR_17 = VAR_11[VAR_10*2+0];
            VAR_18 = VAR_11[VAR_10*2+1];

            if (VAR_1[VAR_17])
            {

               VAR_17 = VAR_2[VAR_1[VAR_17]][VAR_19&15];
               VAR_8[VAR_10*2+0] = VAR_3[VAR_19&3];
            } else
               VAR_17 = VAR_0[VAR_17];

            if (VAR_1[VAR_18])
            {

               VAR_18 = VAR_2[VAR_1[VAR_18]][VAR_19>>4];
               VAR_8[VAR_10*2+1] = VAR_3[(VAR_19>>4)&3];
            } else
               VAR_18 = VAR_0[VAR_18];

            VAR_15[VAR_10*2+0] = VAR_17;
            VAR_15[VAR_10*2+1] = VAR_18;
         }



         VAR_16 = VAR_15 + 16*16*16;
         ++VAR_7;



         if (VAR_12 < VAR_14 && VAR_14 < VAR_13) {





            for (VAR_10=0; VAR_10 < 16*16*16/2; ++VAR_10) {
               int VAR_20;
               VAR_20 = (VAR_13[VAR_10]&15)*12 + 15 + (VAR_14[VAR_10]&15)*16;
               if (VAR_20 > 255) VAR_20 = 255;
               if (VAR_20 < 32) VAR_20 = 32;
               VAR_16[VAR_10*2+0] = FUNC_0((unsigned char) VAR_20, (VAR_8[VAR_10*2+0]&3));

               VAR_20 = (VAR_13[VAR_10]>>4)*12 + 15 + (VAR_14[VAR_10]>>4)*16;
               if (VAR_20 > 255) VAR_20 = 255;
               if (VAR_20 < 32) VAR_20 = 32;
               VAR_16[VAR_10*2+1] = FUNC_0((unsigned char) VAR_20, (VAR_8[VAR_10*2+1]&3));
            }
         } else {







            for (VAR_10=0; VAR_10 < 16*16*16/2; ++VAR_10) {
               int VAR_21;
               VAR_21 = (VAR_13[VAR_10]&15)*12 + 15 + (VAR_14[VAR_10]&15)*16;
               if (VAR_21 > 255) VAR_21 = 255;
               if (VAR_21 < 32) VAR_21 = 32;
               VAR_8[VAR_10*2+0] = FUNC_0((unsigned char) VAR_21, (VAR_8[VAR_10*2+0]&3));

               VAR_21 = (VAR_13[VAR_10]>>4)*12 + 15 + (VAR_14[VAR_10]>>4)*16;
               if (VAR_21 > 255) VAR_21 = 255;
               if (VAR_21 < 32) VAR_21 = 32;
               VAR_8[VAR_10*2+1] = FUNC_0((unsigned char) VAR_21, (VAR_8[VAR_10*2+1]&3));
            }

            FUNC_3(VAR_16, VAR_8, 4096);
            VAR_4->data[VAR_5] = VAR_16;
         }


         VAR_4->blockdata[VAR_5] = VAR_15;
         VAR_4->data[VAR_5] = VAR_16;

      }
   }


   FUNC_1(VAR_4->pointer_to_free);
   VAR_4->pointer_to_free = VAR_9;

}
