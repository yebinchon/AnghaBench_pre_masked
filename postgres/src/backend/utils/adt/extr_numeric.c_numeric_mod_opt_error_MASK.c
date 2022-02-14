
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ ndigits; scalar_t__* digits; } ;
typedef TYPE_1__ NumericVar ;
typedef int * Numeric ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

Numeric
FUNC_7(Numeric VAR_1, Numeric VAR_2, bool *VAR_3)
{
 Numeric VAR_4;
 NumericVar VAR_5;
 NumericVar VAR_6;
 NumericVar VAR_7;

 if (VAR_3)
  *VAR_3 = 0;

 if (FUNC_0(VAR_1) || FUNC_0(VAR_2))
  return FUNC_4(&VAR_0);

 FUNC_3(VAR_1, &VAR_5);
 FUNC_3(VAR_2, &VAR_6);

 FUNC_2(&VAR_7);




 if (VAR_3 && (VAR_6 == 0 || VAR_6[0] == 0))
 {
  *VAR_3 = 1;
  return ((void*)0);
 }

 FUNC_6(&VAR_5, &VAR_6, &VAR_7);

 VAR_4 = FUNC_5(&VAR_7, ((void*)0));

 FUNC_1(&VAR_7);

 return VAR_4;
}
