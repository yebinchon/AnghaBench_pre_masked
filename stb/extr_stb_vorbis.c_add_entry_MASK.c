
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32 ;
struct TYPE_3__ {int* codeword_lengths; void** codewords; int sparse; } ;
typedef TYPE_1__ Codebook ;



__attribute__((used)) static void FUNC_0(Codebook *VAR_0, uint32 VAR_1, int VAR_2, int VAR_3, int VAR_4, uint32 *VAR_5)
{
   if (!VAR_0->sparse) {
      VAR_0->codewords [VAR_2] = VAR_1;
   } else {
      VAR_0->codewords [VAR_3] = VAR_1;
      VAR_0->codeword_lengths[VAR_3] = VAR_4;
      VAR_5 [VAR_3] = VAR_2;
   }
}
