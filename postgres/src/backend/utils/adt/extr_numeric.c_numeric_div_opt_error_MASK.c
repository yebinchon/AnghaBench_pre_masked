
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ ndigits; scalar_t__* digits; } ;
typedef TYPE_1__ NumericVar ;
typedef int * Numeric ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_1__*,int*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;

Numeric
FUNC_8(Numeric VAR_1, Numeric VAR_2, bool *VAR_3)
{
 NumericVar VAR_4;
 NumericVar VAR_5;
 NumericVar VAR_6;
 Numeric VAR_7;
 int VAR_8;

 if (VAR_3)
  *VAR_3 = 0;




 if (FUNC_0(VAR_1) || FUNC_0(VAR_2))
  return FUNC_5(&VAR_0);




 FUNC_4(VAR_1, &VAR_4);
 FUNC_4(VAR_2, &VAR_5);

 FUNC_3(&VAR_6);




 VAR_8 = FUNC_7(&VAR_4, &VAR_5);




 if (VAR_3 && (VAR_5 == 0 || VAR_5[0] == 0))
 {
  *VAR_3 = 1;
  return ((void*)0);
 }




 FUNC_1(&VAR_4, &VAR_5, &VAR_6, VAR_8, 1);

 VAR_7 = FUNC_6(&VAR_6, VAR_3);

 FUNC_2(&VAR_6);

 return VAR_7;
}
