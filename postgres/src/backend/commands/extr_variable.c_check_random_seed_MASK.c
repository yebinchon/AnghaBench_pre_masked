
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GucSource ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int) ;

bool
FUNC_1(double *VAR_1, void **VAR_2, GucSource VAR_3)
{
 *VAR_2 = FUNC_0(sizeof(int));
 if (!*VAR_2)
  return 0;

 *((int *) *VAR_2) = (VAR_3 >= VAR_0);

 return 1;
}
