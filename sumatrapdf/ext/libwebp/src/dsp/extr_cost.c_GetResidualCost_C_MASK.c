
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int first; int*** prob; int last; int * coeffs; int *** costs; } ;
typedef TYPE_1__ VP8Residual ;
typedef int *** CostArrayPtr ;


 int FUNC_0 (int,int const) ;
 int* VAR_0 ;
 scalar_t__ FUNC_1 (int const*,int const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(int VAR_1, const VP8Residual* const VAR_2) {
  int VAR_3 = VAR_2->first;

  const int VAR_4 = VAR_2->prob[VAR_3][VAR_1][0];
  CostArrayPtr const VAR_5 = VAR_2->costs;
  const uint16_t* VAR_6 = VAR_5[VAR_3][VAR_1];



  int VAR_7 = (VAR_1 == 0) ? FUNC_0(1, VAR_4) : 0;

  if (VAR_2->last < 0) {
    return FUNC_0(0, VAR_4);
  }
  for (; VAR_3 < VAR_2->last; ++VAR_3) {
    const int VAR_8 = FUNC_2(VAR_2->coeffs[VAR_3]);
    const int VAR_9 = (VAR_8 >= 2) ? 2 : VAR_8;
    VAR_7 += FUNC_1(VAR_6, VAR_8);
    VAR_6 = VAR_5[VAR_3 + 1][VAR_9];
  }

  {
    const int VAR_10 = FUNC_2(VAR_2->coeffs[VAR_3]);
    FUNC_3(VAR_10 != 0);
    VAR_7 += FUNC_1(VAR_6, VAR_10);
    if (VAR_3 < 15) {
      const int VAR_11 = VAR_0[VAR_3 + 1];
      const int VAR_12 = (VAR_10 == 1) ? 1 : 2;
      const int VAR_13 = VAR_2->prob[VAR_11][VAR_12][0];
      VAR_7 += FUNC_0(0, VAR_13);
    }
  }
  return VAR_7;
}
