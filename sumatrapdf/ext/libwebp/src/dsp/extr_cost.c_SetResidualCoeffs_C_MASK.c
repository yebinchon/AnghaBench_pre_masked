
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int16_t ;
struct TYPE_3__ {int last; scalar_t__ first; scalar_t__* coeffs; } ;
typedef TYPE_1__ VP8Residual ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(const int16_t* const VAR_0,
                                VP8Residual* const VAR_1) {
  int VAR_2;
  VAR_1->last = -1;
  FUNC_0(VAR_1->first == 0 || VAR_0[0] == 0);
  for (VAR_2 = 15; VAR_2 >= 0; --VAR_2) {
    if (VAR_0[VAR_2]) {
      VAR_1->last = VAR_2;
      break;
    }
  }
  VAR_1->coeffs = VAR_0;
}
