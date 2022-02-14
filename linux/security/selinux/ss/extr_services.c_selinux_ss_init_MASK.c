
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selinux_ss {int status_lock; int policy_rwlock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct selinux_ss VAR_0 ;

void FUNC_2(struct selinux_ss **VAR_1)
{
 FUNC_1(&VAR_0.policy_rwlock);
 FUNC_0(&VAR_0.status_lock);
 *VAR_1 = &VAR_0;
}
