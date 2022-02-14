
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int code; int extra_bits; } ;
typedef TYPE_1__ HuffmanTreeToken ;



__attribute__((used)) static HuffmanTreeToken* FUNC_0(int VAR_0,
                                           HuffmanTreeToken* VAR_1) {
  while (VAR_0 >= 1) {
    if (VAR_0 < 3) {
      int VAR_2;
      for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
        VAR_1->code = 0;
        VAR_1->extra_bits = 0;
        ++VAR_1;
      }
      break;
    } else if (VAR_0 < 11) {
      VAR_1->code = 17;
      VAR_1->extra_bits = VAR_0 - 3;
      ++VAR_1;
      break;
    } else if (VAR_0 < 139) {
      VAR_1->code = 18;
      VAR_1->extra_bits = VAR_0 - 11;
      ++VAR_1;
      break;
    } else {
      VAR_1->code = 18;
      VAR_1->extra_bits = 0x7f;
      ++VAR_1;
      VAR_0 -= 138;
    }
  }
  return VAR_1;
}
