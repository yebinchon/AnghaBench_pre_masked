
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int stbi_uc ;
struct TYPE_8__ {int code_bits; int code_buffer; TYPE_1__* img_comp; } ;
typedef TYPE_2__ stbi__jpeg ;
typedef int stbi__int16 ;
typedef int stbi__huffman ;
typedef int data ;
struct TYPE_7__ {int dc_pred; } ;


 int VAR_0 ;
 int FUNC_0 (short*,int ,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 unsigned int* VAR_1 ;
 int FUNC_4 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_5(stbi__jpeg *VAR_2, short VAR_3[64], stbi__huffman *VAR_4, stbi__huffman *VAR_5, stbi__int16 *VAR_6, int VAR_7, stbi_uc *VAR_8)
{
   int VAR_9,VAR_10,VAR_11;
   int VAR_12;

   if (VAR_2->code_bits < 16) FUNC_3(VAR_2);
   VAR_12 = FUNC_4(VAR_2, VAR_4);
   if (VAR_12 < 0) return FUNC_1("bad huffman code","Corrupt JPEG");


   FUNC_0(VAR_3,0,64*sizeof(VAR_3[0]));

   VAR_9 = VAR_12 ? FUNC_2(VAR_2, VAR_12) : 0;
   VAR_10 = VAR_2->img_comp[VAR_7].dc_pred + VAR_9;
   VAR_2->img_comp[VAR_7].dc_pred = VAR_10;
   VAR_3[0] = (short) (VAR_10 * VAR_8[0]);


   VAR_11 = 1;
   do {
      unsigned int VAR_13;
      int VAR_14,VAR_15,VAR_16;
      if (VAR_2->code_bits < 16) FUNC_3(VAR_2);
      VAR_14 = (VAR_2->code_buffer >> (32 - VAR_0)) & ((1 << VAR_0)-1);
      VAR_15 = VAR_6[VAR_14];
      if (VAR_15) {
         VAR_11 += (VAR_15 >> 4) & 15;
         VAR_16 = VAR_15 & 15;
         VAR_2->code_buffer <<= VAR_16;
         VAR_2->code_bits -= VAR_16;

         VAR_13 = VAR_1[VAR_11++];
         VAR_3[VAR_13] = (short) ((VAR_15 >> 8) * VAR_8[VAR_13]);
      } else {
         int VAR_17 = FUNC_4(VAR_2, VAR_5);
         if (VAR_17 < 0) return FUNC_1("bad huffman code","Corrupt JPEG");
         VAR_16 = VAR_17 & 15;
         VAR_15 = VAR_17 >> 4;
         if (VAR_16 == 0) {
            if (VAR_17 != 0xf0) break;
            VAR_11 += 16;
         } else {
            VAR_11 += VAR_15;

            VAR_13 = VAR_1[VAR_11++];
            VAR_3[VAR_13] = (short) (FUNC_2(VAR_2,VAR_16) * VAR_8[VAR_13]);
         }
      }
   } while (VAR_11 < 64);
   return 1;
}
