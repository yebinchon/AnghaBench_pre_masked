
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct selinux_state {TYPE_1__* ss; int initialized; } ;
struct policydb {int dummy; } ;
struct policy_file {size_t len; void* data; } ;
struct TYPE_2__ {int policy_rwlock; struct policydb policydb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct policydb*,struct policy_file*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (struct selinux_state*) ;
 void* FUNC_4 (size_t) ;

int FUNC_5(struct selinux_state *VAR_2,
    void **VAR_3, size_t *VAR_4)
{
 struct policydb *VAR_5 = &VAR_2->ss->policydb;
 int VAR_6;
 struct policy_file VAR_7;

 if (!VAR_2->initialized)
  return -VAR_0;

 *VAR_4 = FUNC_3(VAR_2);

 *VAR_3 = FUNC_4(*VAR_4);
 if (!*VAR_3)
  return -VAR_1;

 VAR_7.data = *VAR_3;
 VAR_7.len = *VAR_4;

 FUNC_1(&VAR_2->ss->policy_rwlock);
 VAR_6 = FUNC_0(VAR_5, &VAR_7);
 FUNC_2(&VAR_2->ss->policy_rwlock);

 if (VAR_6)
  return VAR_6;

 *VAR_4 = (unsigned long)VAR_7.data - (unsigned long)*VAR_3;
 return 0;

}
