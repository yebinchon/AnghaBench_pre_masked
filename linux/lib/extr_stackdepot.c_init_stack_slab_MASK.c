
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int ** VAR_2 ;

__attribute__((used)) static bool FUNC_2(void **VAR_3)
{
 if (!*VAR_3)
  return 0;




 if (FUNC_0(&VAR_1))
  return 1;
 if (VAR_2[VAR_0] == ((void*)0)) {
  VAR_2[VAR_0] = *VAR_3;
 } else {
  VAR_2[VAR_0 + 1] = *VAR_3;




  FUNC_1(&VAR_1, 1);
 }
 *VAR_3 = ((void*)0);
 return 1;
}
