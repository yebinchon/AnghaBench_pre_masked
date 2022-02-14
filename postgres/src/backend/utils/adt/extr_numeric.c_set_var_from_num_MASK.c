
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int digits; int dscale; int sign; int weight; } ;
typedef TYPE_1__ NumericVar ;
typedef int NumericDigit ;
typedef int Numeric ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_7(Numeric VAR_0, NumericVar *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0);

 FUNC_5(VAR_1, VAR_2);

 VAR_1->weight = FUNC_4(VAR_0);
 VAR_1->sign = FUNC_3(VAR_0);
 VAR_1->dscale = FUNC_1(VAR_0);

 FUNC_6(VAR_1->digits, FUNC_0(VAR_0), VAR_2 * sizeof(NumericDigit));
}
