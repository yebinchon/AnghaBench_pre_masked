
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct selinux_state {TYPE_2__* ss; } ;
struct TYPE_6__ {int nprim; } ;
struct policydb {TYPE_1__** bool_val_to_struct; TYPE_3__ p_bools; } ;
struct TYPE_5__ {int policy_rwlock; struct policydb policydb; } ;
struct TYPE_4__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct selinux_state *VAR_1,
       int VAR_2)
{
 struct policydb *VAR_3;
 int VAR_4;
 int VAR_5;

 FUNC_0(&VAR_1->ss->policy_rwlock);

 VAR_3 = &VAR_1->ss->policydb;

 VAR_4 = -VAR_0;
 VAR_5 = VAR_3->p_bools.nprim;
 if (VAR_2 >= VAR_5)
  goto out;

 VAR_4 = VAR_3->bool_val_to_struct[VAR_2]->state;
out:
 FUNC_1(&VAR_1->ss->policy_rwlock);
 return VAR_4;
}
