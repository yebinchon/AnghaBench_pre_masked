
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int online_vcpus; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct kvm*,scalar_t__) ;

void FUNC_2(struct kvm *VAR_0)
{
 FUNC_1(VAR_0, FUNC_0(&VAR_0->online_vcpus) - 1);
}
