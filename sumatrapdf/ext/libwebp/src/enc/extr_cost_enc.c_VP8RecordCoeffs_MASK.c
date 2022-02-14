
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int proba_t ;
struct TYPE_3__ {int first; int last; int* coeffs; int *** stats; } ;
typedef TYPE_1__ VP8Residual ;


 int VAR_0 ;
 size_t* VAR_1 ;
 void*** VAR_2 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int) ;

int FUNC_2(int VAR_3, const VP8Residual* const VAR_4) {
  int VAR_5 = VAR_4->first;

  proba_t* VAR_6 = VAR_4->stats[VAR_5][VAR_3];
  if (VAR_4->last < 0) {
    FUNC_0(0, VAR_6 + 0);
    return 0;
  }
  while (VAR_5 <= VAR_4->last) {
    int VAR_7;
    FUNC_0(1, VAR_6 + 0);
    while ((VAR_7 = VAR_4->coeffs[VAR_5++]) == 0) {
      FUNC_0(0, VAR_6 + 1);
      VAR_6 = VAR_4->stats[VAR_1[VAR_5]][0];
    }
    FUNC_0(1, VAR_6 + 1);
    if (!FUNC_0(2u < (unsigned int)(VAR_7 + 1), VAR_6 + 2)) {
      VAR_6 = VAR_4->stats[VAR_1[VAR_5]][1];
    } else {
      VAR_7 = FUNC_1(VAR_7);

      if (!FUNC_0(VAR_7 > 4, VAR_6 + 3)) {
        if (FUNC_0(VAR_7 != 2, VAR_6 + 4))
          FUNC_0(VAR_7 == 4, VAR_6 + 5);
      } else if (!FUNC_0(VAR_7 > 10, VAR_6 + 6)) {
        FUNC_0(VAR_7 > 6, VAR_6 + 7);
      } else if (!FUNC_0((VAR_7 >= 3 + (8 << 2)), VAR_6 + 8)) {
        FUNC_0((VAR_7 >= 3 + (8 << 1)), VAR_6 + 9);
      } else {
        FUNC_0((VAR_7 >= 3 + (8 << 3)), VAR_6 + 10);
      }
      VAR_6 = VAR_4->stats[VAR_1[VAR_5]][2];
    }
  }
  if (VAR_5 < 16) FUNC_0(0, VAR_6 + 0);
  return 1;
}
