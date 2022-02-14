
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int* fast_huffman; int sorted_entries; int entries; int* codeword_lengths; int* codewords; int * sorted_codewords; scalar_t__ sparse; } ;
typedef TYPE_1__ Codebook ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(Codebook *VAR_2)
{
   int VAR_3, VAR_4;
   for (VAR_3=0; VAR_3 < VAR_0; ++VAR_3)
      VAR_2->fast_huffman[VAR_3] = -1;

   VAR_4 = VAR_2->sparse ? VAR_2->sorted_entries : VAR_2->entries;



   for (VAR_3=0; VAR_3 < VAR_4; ++VAR_3) {
      if (VAR_2->codeword_lengths[VAR_3] <= VAR_1) {
         uint32 VAR_5 = VAR_2->sparse ? FUNC_0(VAR_2->sorted_codewords[VAR_3]) : VAR_2->codewords[VAR_3];

         while (VAR_5 < VAR_0) {
             VAR_2->fast_huffman[VAR_5] = VAR_3;
             VAR_5 += 1 << VAR_2->codeword_lengths[VAR_3];
         }
      }
   }
}
