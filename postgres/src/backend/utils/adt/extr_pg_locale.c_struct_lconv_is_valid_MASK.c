
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lconv {int * negative_sign; int * positive_sign; int * mon_grouping; int * mon_thousands_sep; int * mon_decimal_point; int * currency_symbol; int * int_curr_symbol; int * grouping; int * thousands_sep; int * decimal_point; } ;



__attribute__((used)) static bool
FUNC_0(struct lconv *VAR_0)
{
 if (VAR_0->decimal_point == ((void*)0))
  return 0;
 if (VAR_0->thousands_sep == ((void*)0))
  return 0;
 if (VAR_0->grouping == ((void*)0))
  return 0;
 if (VAR_0->int_curr_symbol == ((void*)0))
  return 0;
 if (VAR_0->currency_symbol == ((void*)0))
  return 0;
 if (VAR_0->mon_decimal_point == ((void*)0))
  return 0;
 if (VAR_0->mon_thousands_sep == ((void*)0))
  return 0;
 if (VAR_0->mon_grouping == ((void*)0))
  return 0;
 if (VAR_0->positive_sign == ((void*)0))
  return 0;
 if (VAR_0->negative_sign == ((void*)0))
  return 0;
 return 1;
}
