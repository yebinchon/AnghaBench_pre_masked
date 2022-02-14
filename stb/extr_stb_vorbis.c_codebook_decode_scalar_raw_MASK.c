
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int acc; int valid_bits; } ;
typedef TYPE_1__ vorb ;
typedef scalar_t__ uint32 ;
struct TYPE_8__ {int* codewords; scalar_t__* sorted_codewords; int entries; int sorted_entries; int* sorted_values; int* codeword_lengths; int sparse; } ;
typedef TYPE_2__ Codebook ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(vorb *VAR_2, Codebook *VAR_3)
{
   int VAR_4;
   FUNC_3(VAR_2);

   if (VAR_3->codewords == ((void*)0) && VAR_3->sorted_codewords == ((void*)0))
      return -1;



   if (VAR_3->entries > 8 ? VAR_3->sorted_codewords!=((void*)0) : !VAR_3->codewords) {

      uint32 VAR_5 = FUNC_1(VAR_2->acc);
      int VAR_6=0, VAR_7=VAR_3->sorted_entries, VAR_8;

      while (VAR_7 > 1) {

         int VAR_9 = VAR_6 + (VAR_7 >> 1);
         if (VAR_3->sorted_codewords[VAR_9] <= VAR_5) {
            VAR_6 = VAR_9;
            VAR_7 -= (VAR_7>>1);
         } else {
            VAR_7 >>= 1;
         }
      }

      if (!VAR_3->sparse) VAR_6 = VAR_3->sorted_values[VAR_6];

      VAR_8 = VAR_3->codeword_lengths[VAR_6];
      if (VAR_2->valid_bits >= VAR_8) {
         VAR_2->acc >>= VAR_8;
         VAR_2->valid_bits -= VAR_8;
         return VAR_6;
      }

      VAR_2->valid_bits = 0;
      return -1;
   }


   FUNC_0(!VAR_3->sparse);
   for (VAR_4=0; VAR_4 < VAR_3->entries; ++VAR_4) {
      if (VAR_3->codeword_lengths[VAR_4] == VAR_0) continue;
      if (VAR_3->codewords[VAR_4] == (VAR_2->acc & ((1 << VAR_3->codeword_lengths[VAR_4])-1))) {
         if (VAR_2->valid_bits >= VAR_3->codeword_lengths[VAR_4]) {
            VAR_2->acc >>= VAR_3->codeword_lengths[VAR_4];
            VAR_2->valid_bits -= VAR_3->codeword_lengths[VAR_4];
            return VAR_4;
         }
         VAR_2->valid_bits = 0;
         return -1;
      }
   }

   FUNC_2(VAR_2, VAR_1);
   VAR_2->valid_bits = 0;
   return -1;
}
