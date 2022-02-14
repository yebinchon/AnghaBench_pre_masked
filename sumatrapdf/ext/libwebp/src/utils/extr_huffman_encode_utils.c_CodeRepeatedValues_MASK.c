
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int code; int extra_bits; } ;
typedef TYPE_1__ HuffmanTreeToken ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static HuffmanTreeToken* FUNC_1(int VAR_1,
                                            HuffmanTreeToken* VAR_2,
                                            int VAR_3, int VAR_4) {
  FUNC_0(VAR_3 <= VAR_0);
  if (VAR_3 != VAR_4) {
    VAR_2->code = VAR_3;
    VAR_2->extra_bits = 0;
    ++VAR_2;
    --VAR_1;
  }
  while (VAR_1 >= 1) {
    if (VAR_1 < 3) {
      int VAR_5;
      for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
        VAR_2->code = VAR_3;
        VAR_2->extra_bits = 0;
        ++VAR_2;
      }
      break;
    } else if (VAR_1 < 7) {
      VAR_2->code = 16;
      VAR_2->extra_bits = VAR_1 - 3;
      ++VAR_2;
      break;
    } else {
      VAR_2->code = 16;
      VAR_2->extra_bits = 3;
      ++VAR_2;
      VAR_1 -= 6;
    }
  }
  return VAR_2;
}
