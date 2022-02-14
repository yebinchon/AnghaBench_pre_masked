
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int numeric ;


 scalar_t__ VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (int *,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 long FUNC_2 (char*,char**,int) ;

int
FUNC_3(numeric *VAR_5, long *VAR_6)
{
 char *VAR_7 = FUNC_0(VAR_5, 0);
 char *VAR_8;

 if (VAR_7 == ((void*)0))
  return -1;

 VAR_4 = 0;
 *VAR_6 = FUNC_2(VAR_7, &VAR_8, 10);
 if (VAR_8 == VAR_7)
 {

  FUNC_1(VAR_7);
  return -1;
 }
 FUNC_1(VAR_7);
 if (VAR_4 == VAR_0)
 {
  if (*VAR_6 == VAR_1)
   VAR_4 = VAR_3;
  else
   VAR_4 = VAR_2;
  return -1;
 }
 return 0;
}
