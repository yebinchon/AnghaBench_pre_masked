
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_value; int last_non_zero; } ;
typedef TYPE_1__ VP8Histogram ;


 int VAR_0 ;

void FUNC_0(const int VAR_1[VAR_0 + 1],
                         VP8Histogram* const VAR_2) {
  int VAR_3 = 0, VAR_4 = 1;
  int VAR_5;
  for (VAR_5 = 0; VAR_5 <= VAR_0; ++VAR_5) {
    const int VAR_6 = VAR_1[VAR_5];
    if (VAR_6 > 0) {
      if (VAR_6 > VAR_3) VAR_3 = VAR_6;
      VAR_4 = VAR_5;
    }
  }
  VAR_2->max_value = VAR_3;
  VAR_2->last_non_zero = VAR_4;
}
