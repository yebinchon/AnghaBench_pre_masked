
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PREDICATELOCKTARGETTAG ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static bool
FUNC_2(const PREDICATELOCKTARGETTAG *VAR_0)
{
 PREDICATELOCKTARGETTAG VAR_1,
    VAR_2;

 VAR_1 = *VAR_0;


 while (FUNC_0(&VAR_1, &VAR_2))
 {
  VAR_1 = VAR_2;
  if (FUNC_1(&VAR_1))
   return 1;
 }


 return 0;
}
