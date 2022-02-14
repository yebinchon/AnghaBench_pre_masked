
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VP8LBitWriter ;
struct TYPE_4__ {int num_symbols; scalar_t__* code_lengths; } ;
typedef int HuffmanTreeToken ;
typedef TYPE_1__ HuffmanTreeCode ;
typedef int HuffmanTree ;


 int FUNC_0 (int * const,int * const,int * const,TYPE_1__ const* const) ;
 int FUNC_1 (int * const,int,int) ;

__attribute__((used)) static void FUNC_2(VP8LBitWriter* const VAR_0,
                             HuffmanTree* const VAR_1,
                             HuffmanTreeToken* const VAR_2,
                             const HuffmanTreeCode* const VAR_3) {
  int VAR_4;
  int VAR_5 = 0;
  int VAR_6[2] = { 0, 0 };
  const int VAR_7 = 8;
  const int VAR_8 = 1 << VAR_7;


  for (VAR_4 = 0; VAR_4 < VAR_3->num_symbols && VAR_5 < 3; ++VAR_4) {
    if (VAR_3->code_lengths[VAR_4] != 0) {
      if (VAR_5 < 2) VAR_6[VAR_5] = VAR_4;
      ++VAR_5;
    }
  }

  if (VAR_5 == 0) {

    FUNC_1(VAR_0, 0x01, 4);
  } else if (VAR_5 <= 2 && VAR_6[0] < VAR_8 && VAR_6[1] < VAR_8) {
    FUNC_1(VAR_0, 1, 1);
    FUNC_1(VAR_0, VAR_5 - 1, 1);
    if (VAR_6[0] <= 1) {
      FUNC_1(VAR_0, 0, 1);
      FUNC_1(VAR_0, VAR_6[0], 1);
    } else {
      FUNC_1(VAR_0, 1, 1);
      FUNC_1(VAR_0, VAR_6[0], 8);
    }
    if (VAR_5 == 2) {
      FUNC_1(VAR_0, VAR_6[1], 8);
    }
  } else {
    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  }
}
