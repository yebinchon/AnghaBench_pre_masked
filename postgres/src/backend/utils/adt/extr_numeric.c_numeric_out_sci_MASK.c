
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NumericVar ;
typedef int Numeric ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int *) ;
 char* FUNC_3 (char*) ;

char *
FUNC_4(Numeric VAR_0, int VAR_1)
{
 NumericVar VAR_2;
 char *VAR_3;




 if (FUNC_0(VAR_0))
  return FUNC_3("NaN");

 FUNC_2(VAR_0, &VAR_2);

 VAR_3 = FUNC_1(&VAR_2, VAR_1);

 return VAR_3;
}
