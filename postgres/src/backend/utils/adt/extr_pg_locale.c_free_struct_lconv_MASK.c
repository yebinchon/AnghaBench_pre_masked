
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lconv {scalar_t__ negative_sign; scalar_t__ positive_sign; scalar_t__ mon_grouping; scalar_t__ mon_thousands_sep; scalar_t__ mon_decimal_point; scalar_t__ currency_symbol; scalar_t__ int_curr_symbol; scalar_t__ grouping; scalar_t__ thousands_sep; scalar_t__ decimal_point; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct lconv *VAR_0)
{
 if (VAR_0->decimal_point)
  FUNC_0(VAR_0->decimal_point);
 if (VAR_0->thousands_sep)
  FUNC_0(VAR_0->thousands_sep);
 if (VAR_0->grouping)
  FUNC_0(VAR_0->grouping);
 if (VAR_0->int_curr_symbol)
  FUNC_0(VAR_0->int_curr_symbol);
 if (VAR_0->currency_symbol)
  FUNC_0(VAR_0->currency_symbol);
 if (VAR_0->mon_decimal_point)
  FUNC_0(VAR_0->mon_decimal_point);
 if (VAR_0->mon_thousands_sep)
  FUNC_0(VAR_0->mon_thousands_sep);
 if (VAR_0->mon_grouping)
  FUNC_0(VAR_0->mon_grouping);
 if (VAR_0->positive_sign)
  FUNC_0(VAR_0->positive_sign);
 if (VAR_0->negative_sign)
  FUNC_0(VAR_0->negative_sign);
}
