
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int sigset; int sigset_active; } ;
struct TYPE_2__ {int real_blocked; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,int *,int *) ;

void FUNC_1(struct kvm_vcpu *VAR_2)
{
 if (!VAR_2->sigset_active)
  return;







 FUNC_0(VAR_0, &VAR_2->sigset, &VAR_1->real_blocked);
}
