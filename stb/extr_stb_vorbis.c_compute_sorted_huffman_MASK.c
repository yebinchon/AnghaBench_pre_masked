
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef size_t uint32 ;
struct TYPE_4__ {int entries; int* sorted_codewords; int sorted_entries; size_t* sorted_values; int* codeword_lengths; scalar_t__ sparse; int * codewords; } ;
typedef TYPE_1__ Codebook ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int*,int,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(Codebook *VAR_1, uint8 *VAR_2, uint32 *VAR_3)
{
   int VAR_4, VAR_5;




   if (!VAR_1->sparse) {
      int VAR_6 = 0;
      for (VAR_4=0; VAR_4 < VAR_1->entries; ++VAR_4)
         if (FUNC_2(VAR_1, VAR_2[VAR_4]))
            VAR_1->sorted_codewords[VAR_6++] = FUNC_1(VAR_1->codewords[VAR_4]);
      FUNC_0(VAR_6 == VAR_1->sorted_entries);
   } else {
      for (VAR_4=0; VAR_4 < VAR_1->sorted_entries; ++VAR_4)
         VAR_1->sorted_codewords[VAR_4] = FUNC_1(VAR_1->codewords[VAR_4]);
   }

   FUNC_3(VAR_1->sorted_codewords, VAR_1->sorted_entries, sizeof(VAR_1->sorted_codewords[0]), VAR_0);
   VAR_1->sorted_codewords[VAR_1->sorted_entries] = 0xffffffff;

   VAR_5 = VAR_1->sparse ? VAR_1->sorted_entries : VAR_1->entries;





   for (VAR_4=0; VAR_4 < VAR_5; ++VAR_4) {
      int VAR_7 = VAR_1->sparse ? VAR_2[VAR_3[VAR_4]] : VAR_2[VAR_4];
      if (FUNC_2(VAR_1,VAR_7)) {
         uint32 VAR_8 = FUNC_1(VAR_1->codewords[VAR_4]);
         int VAR_9=0, VAR_10=VAR_1->sorted_entries;
         while (VAR_10 > 1) {

            int VAR_11 = VAR_9 + (VAR_10 >> 1);
            if (VAR_1->sorted_codewords[VAR_11] <= VAR_8) {
               VAR_9 = VAR_11;
               VAR_10 -= (VAR_10>>1);
            } else {
               VAR_10 >>= 1;
            }
         }
         FUNC_0(VAR_1->sorted_codewords[VAR_9] == VAR_8);
         if (VAR_1->sparse) {
            VAR_1->sorted_values[VAR_9] = VAR_3[VAR_4];
            VAR_1->codeword_lengths[VAR_9] = VAR_7;
         } else {
            VAR_1->sorted_values[VAR_9] = VAR_4;
         }
      }
   }
}
