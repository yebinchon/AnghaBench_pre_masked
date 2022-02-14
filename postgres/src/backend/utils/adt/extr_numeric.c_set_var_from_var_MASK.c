
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ndigits; scalar_t__* digits; scalar_t__* buf; } ;
typedef TYPE_1__ NumericVar ;
typedef scalar_t__ NumericDigit ;


 scalar_t__* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__ const*,int) ;

__attribute__((used)) static void
FUNC_4(const NumericVar *VAR_0, NumericVar *VAR_1)
{
 NumericDigit *VAR_2;

 VAR_2 = FUNC_0(VAR_0->ndigits + 1);
 VAR_2[0] = 0;
 if (VAR_0->ndigits > 0)
  FUNC_2(VAR_2 + 1, VAR_0->digits,
      VAR_0->ndigits * sizeof(NumericDigit));

 FUNC_1(VAR_1->buf);

 FUNC_3(VAR_1, VAR_0, sizeof(NumericVar));
 VAR_1->buf = VAR_2;
 VAR_1->digits = VAR_2 + 1;
}
