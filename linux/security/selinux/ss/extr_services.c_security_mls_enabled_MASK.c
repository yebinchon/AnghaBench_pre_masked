
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct selinux_state {TYPE_1__* ss; } ;
struct policydb {int mls_enabled; } ;
struct TYPE_2__ {struct policydb policydb; } ;



int FUNC_0(struct selinux_state *VAR_0)
{
 struct policydb *VAR_1 = &VAR_0->ss->policydb;

 return VAR_1->mls_enabled;
}
