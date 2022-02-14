
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GucSource ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (char*) ;

__attribute__((used)) static bool
FUNC_2(char **VAR_1, void **VAR_2, GucSource VAR_3)
{
 if (*VAR_1 == ((void*)0))
 {
  FUNC_0(VAR_3 == VAR_0);
  return 1;
 }


 *VAR_2 = FUNC_1(*VAR_1);


 if (!*VAR_2)
  return 0;

 return 1;
}
