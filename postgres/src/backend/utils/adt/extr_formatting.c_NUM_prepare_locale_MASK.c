
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lconv {char* negative_sign; char* positive_sign; char* decimal_point; char* thousands_sep; char* currency_symbol; } ;
struct TYPE_5__ {scalar_t__ need_locale; } ;
struct TYPE_4__ {char* L_negative_sign; char* L_positive_sign; char* decimal; char* L_thousands_sep; char* L_currency_symbol; TYPE_3__* Num; } ;
typedef TYPE_1__ NUMProc ;


 int FUNC_0 (TYPE_3__*) ;
 struct lconv* FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3(NUMProc *VAR_0)
{
 if (VAR_0->Num->need_locale)
 {
  struct lconv *VAR_1;




  VAR_1 = FUNC_1();




  if (VAR_1->negative_sign && *VAR_1->negative_sign)
   VAR_0->L_negative_sign = VAR_1->negative_sign;
  else
   VAR_0->L_negative_sign = "-";

  if (VAR_1->positive_sign && *VAR_1->positive_sign)
   VAR_0->L_positive_sign = VAR_1->positive_sign;
  else
   VAR_0->L_positive_sign = "+";




  if (VAR_1->decimal_point && *VAR_1->decimal_point)
   VAR_0->decimal = VAR_1->decimal_point;

  else
   VAR_0->decimal = ".";

  if (!FUNC_0(VAR_0->Num))
   VAR_0->decimal = ".";
  if (VAR_1->thousands_sep && *VAR_1->thousands_sep)
   VAR_0->L_thousands_sep = VAR_1->thousands_sep;

  else if (FUNC_2(VAR_0->decimal, ",") !=0)
   VAR_0->L_thousands_sep = ",";
  else
   VAR_0->L_thousands_sep = ".";




  if (VAR_1->currency_symbol && *VAR_1->currency_symbol)
   VAR_0->L_currency_symbol = VAR_1->currency_symbol;
  else
   VAR_0->L_currency_symbol = " ";
 }
 else
 {



  VAR_0->L_negative_sign = "-";
  VAR_0->L_positive_sign = "+";
  VAR_0->decimal = ".";

  VAR_0->L_thousands_sep = ",";
  VAR_0->L_currency_symbol = " ";
 }
}
