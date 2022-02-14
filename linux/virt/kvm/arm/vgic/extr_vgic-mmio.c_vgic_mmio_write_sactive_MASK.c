
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvm_vcpu {TYPE_1__* kvm; } ;
typedef int gpa_t ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct kvm_vcpu*,int ,unsigned int,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;

void FUNC_6(struct kvm_vcpu *VAR_0,
        gpa_t VAR_1, unsigned int VAR_2,
        unsigned long VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_1, 1);

 FUNC_2(&VAR_0->kvm->lock);
 FUNC_5(VAR_0, VAR_4);

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 FUNC_4(VAR_0, VAR_4);
 FUNC_3(&VAR_0->kvm->lock);
}
