
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {TYPE_1__* kvm; } ;
struct TYPE_2__ {int srcu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_3)
{
 int VAR_4 = -VAR_0;
 int VAR_5 = FUNC_4(&VAR_3->kvm->srcu);

 if (FUNC_0(VAR_3)) {
  FUNC_2(VAR_1, VAR_3);
  goto out;
 }
 if (FUNC_1(VAR_3))
  goto out;
 if (FUNC_3(VAR_2))
  goto out;

 VAR_4 = 0;
out:
 FUNC_5(&VAR_3->kvm->srcu, VAR_5);
 return VAR_4;
}
