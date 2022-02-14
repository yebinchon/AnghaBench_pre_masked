
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VP8LBitWriter ;
struct TYPE_6__ {int const* codes; int* code_lengths; } ;
struct TYPE_5__ {int code; int extra_bits; } ;
typedef TYPE_1__ HuffmanTreeToken ;
typedef TYPE_2__ HuffmanTreeCode ;


 int FUNC_0 (int * const,int const,int) ;

__attribute__((used)) static void FUNC_1(
    VP8LBitWriter* const VAR_0,
    const HuffmanTreeToken* const VAR_1, const int VAR_2,
    const HuffmanTreeCode* const VAR_3) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
    const int VAR_5 = VAR_1[VAR_4].code;
    const int VAR_6 = VAR_1[VAR_4].extra_bits;
    FUNC_0(VAR_0, VAR_3->codes[VAR_5], VAR_3->code_lengths[VAR_5]);
    switch (VAR_5) {
      case 16:
        FUNC_0(VAR_0, VAR_6, 2);
        break;
      case 17:
        FUNC_0(VAR_0, VAR_6, 3);
        break;
      case 18:
        FUNC_0(VAR_0, VAR_6, 7);
        break;
    }
  }
}
