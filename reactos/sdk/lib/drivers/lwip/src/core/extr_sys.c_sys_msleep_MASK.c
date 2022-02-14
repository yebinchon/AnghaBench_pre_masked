
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32_t ;
typedef int sys_sem_t ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;

void
FUNC_3(u32_t VAR_1)
{
  if (VAR_1 > 0) {
    sys_sem_t VAR_2;
    err_t VAR_3 = FUNC_2(&VAR_2, 0);
    if (VAR_3 == VAR_0) {
      FUNC_0(&VAR_2, VAR_1);
      FUNC_1(&VAR_2);
    }
  }
}
