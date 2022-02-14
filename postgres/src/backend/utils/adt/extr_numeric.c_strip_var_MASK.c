
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* digits; int ndigits; scalar_t__ weight; int sign; } ;
typedef TYPE_1__ NumericVar ;
typedef scalar_t__ NumericDigit ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(NumericVar *VAR_1)
{
 NumericDigit *VAR_2 = VAR_1->digits;
 int VAR_3 = VAR_1->ndigits;


 while (VAR_3 > 0 && *VAR_2 == 0)
 {
  VAR_2++;
  VAR_1->weight--;
  VAR_3--;
 }


 while (VAR_3 > 0 && VAR_2[VAR_3 - 1] == 0)
  VAR_3--;


 if (VAR_3 == 0)
 {
  VAR_1->sign = VAR_0;
  VAR_1->weight = 0;
 }

 VAR_1->digits = VAR_2;
 VAR_1->ndigits = VAR_3;
}
