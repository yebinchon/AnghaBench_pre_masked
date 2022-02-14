
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NumericVar ;
typedef int Numeric ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int *,int *) ;

Numeric
FUNC_7(Numeric VAR_1, Numeric VAR_2, bool *VAR_3)
{
 NumericVar VAR_4;
 NumericVar VAR_5;
 NumericVar VAR_6;
 Numeric VAR_7;




 if (FUNC_0(VAR_1) || FUNC_0(VAR_2))
  return FUNC_4(&VAR_0);




 FUNC_3(VAR_1, &VAR_4);
 FUNC_3(VAR_2, &VAR_5);

 FUNC_2(&VAR_6);
 FUNC_6(&VAR_4, &VAR_5, &VAR_6);

 VAR_7 = FUNC_5(&VAR_6, VAR_3);

 FUNC_1(&VAR_6);

 return VAR_7;
}
