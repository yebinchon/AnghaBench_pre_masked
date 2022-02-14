
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_symbols; scalar_t__* code_lengths; scalar_t__* codes; } ;
typedef TYPE_1__ HuffmanTreeCode ;



__attribute__((used)) static void FUNC_0(
    HuffmanTreeCode* const VAR_0) {
  int VAR_1;
  int VAR_2 = 0;
  for (VAR_1 = 0; VAR_1 < VAR_0->num_symbols; ++VAR_1) {
    if (VAR_0->code_lengths[VAR_1] != 0) {
      ++VAR_2;
      if (VAR_2 > 1) return;
    }
  }
  for (VAR_1 = 0; VAR_1 < VAR_0->num_symbols; ++VAR_1) {
    VAR_0->code_lengths[VAR_1] = 0;
    VAR_0->codes[VAR_1] = 0;
  }
}
