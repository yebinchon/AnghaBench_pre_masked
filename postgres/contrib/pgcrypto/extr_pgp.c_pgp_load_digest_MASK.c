
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PX_MD ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char const*,int **) ;

int
FUNC_2(int VAR_2, PX_MD **VAR_3)
{
 int VAR_4;
 const char *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5 == ((void*)0))
  return VAR_0;

 VAR_4 = FUNC_1(VAR_5, VAR_3);
 if (VAR_4 == 0)
  return 0;

 return VAR_1;
}
