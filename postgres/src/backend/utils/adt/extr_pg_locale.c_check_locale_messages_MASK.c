
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GucSource ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int *) ;

bool
FUNC_1(char **VAR_2, void **VAR_3, GucSource VAR_4)
{
 if (**VAR_2 == '\0')
 {
  if (VAR_4 == VAR_1)
   return 1;
  else
   return 0;
 }
 return 1;

}
