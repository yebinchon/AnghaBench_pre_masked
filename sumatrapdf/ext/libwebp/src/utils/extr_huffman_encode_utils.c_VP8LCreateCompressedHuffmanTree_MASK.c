
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_symbols; int* code_lengths; } ;
typedef int HuffmanTreeToken ;
typedef TYPE_1__ HuffmanTreeCode ;


 int * FUNC_0 (int,int *,int const,int) ;
 int * FUNC_1 (int,int *) ;
 int FUNC_2 (int) ;

int FUNC_3(const HuffmanTreeCode* const VAR_0,
                                    HuffmanTreeToken* VAR_1, int VAR_2) {
  HuffmanTreeToken* const VAR_3 = VAR_1;
  HuffmanTreeToken* const VAR_4 = VAR_1 + VAR_2;
  const int VAR_5 = VAR_0->num_symbols;
  int VAR_6 = 8;
  int VAR_7 = 0;
  FUNC_2(VAR_1 != ((void*)0));
  while (VAR_7 < VAR_5) {
    const int VAR_8 = VAR_0->code_lengths[VAR_7];
    int VAR_9 = VAR_7 + 1;
    int VAR_10;
    while (VAR_9 < VAR_5 && VAR_0->code_lengths[VAR_9] == VAR_8) ++VAR_9;
    VAR_10 = VAR_9 - VAR_7;
    if (VAR_8 == 0) {
      VAR_1 = FUNC_1(VAR_10, VAR_1);
    } else {
      VAR_1 = FUNC_0(VAR_10, VAR_1, VAR_8, VAR_6);
      VAR_6 = VAR_8;
    }
    VAR_7 += VAR_10;
    FUNC_2(VAR_1 <= VAR_4);
  }
  (void)VAR_4;
  return (int)(VAR_1 - VAR_3);
}
