
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct selinux_state {TYPE_1__* ss; } ;
struct policydb {int policycaps; } ;
struct TYPE_2__ {int policy_rwlock; struct policydb policydb; } ;


 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct selinux_state *VAR_0,
     unsigned int VAR_1)
{
 struct policydb *VAR_2 = &VAR_0->ss->policydb;
 int VAR_3;

 FUNC_1(&VAR_0->ss->policy_rwlock);
 VAR_3 = FUNC_0(&VAR_2->policycaps, VAR_1);
 FUNC_2(&VAR_0->ss->policy_rwlock);

 return VAR_3;
}
