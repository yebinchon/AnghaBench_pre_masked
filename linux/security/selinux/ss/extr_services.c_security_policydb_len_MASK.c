
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct selinux_state {TYPE_1__* ss; } ;
struct policydb {size_t len; } ;
struct TYPE_2__ {int policy_rwlock; struct policydb policydb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

size_t FUNC_2(struct selinux_state *VAR_0)
{
 struct policydb *VAR_1 = &VAR_0->ss->policydb;
 size_t VAR_2;

 FUNC_0(&VAR_0->ss->policy_rwlock);
 VAR_2 = VAR_1->len;
 FUNC_1(&VAR_0->ss->policy_rwlock);

 return VAR_2;
}
