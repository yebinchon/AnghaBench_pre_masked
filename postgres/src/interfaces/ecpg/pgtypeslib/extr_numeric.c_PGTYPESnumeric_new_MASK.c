
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int numeric ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;

numeric *
FUNC_3(void)
{
 numeric *VAR_0;

 if ((VAR_0 = (numeric *) FUNC_2(sizeof(numeric))) == ((void*)0))
  return ((void*)0);

 if (FUNC_0(VAR_0, 0) < 0)
 {
  FUNC_1(VAR_0);
  return ((void*)0);
 }

 return VAR_0;
}
