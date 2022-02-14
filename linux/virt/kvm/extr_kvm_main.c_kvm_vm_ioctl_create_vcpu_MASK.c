
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int debugfs_dentry; int preempt_notifier; } ;
struct kvm {scalar_t__ created_vcpus; int lock; int online_vcpus; struct kvm_vcpu** vcpus; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (int ) ;
 struct kvm_vcpu* FUNC_7 (struct kvm*,int ) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (struct kvm*) ;
 scalar_t__ FUNC_13 (struct kvm*,int ) ;
 int VAR_4 ;
 int FUNC_14 (struct kvm*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 () ;

__attribute__((used)) static int FUNC_19(struct kvm *VAR_5, u32 VAR_6)
{
 int VAR_7;
 struct kvm_vcpu *VAR_8;

 if (VAR_6 >= VAR_3)
  return -VAR_1;

 FUNC_15(&VAR_5->lock);
 if (VAR_5->created_vcpus == VAR_2) {
  FUNC_16(&VAR_5->lock);
  return -VAR_1;
 }

 VAR_5->created_vcpus++;
 FUNC_16(&VAR_5->lock);

 VAR_8 = FUNC_7(VAR_5, VAR_6);
 if (FUNC_1(VAR_8)) {
  VAR_7 = FUNC_2(VAR_8);
  goto vcpu_decrement;
 }

 FUNC_17(&VAR_8->preempt_notifier, &VAR_4);

 VAR_7 = FUNC_10(VAR_8);
 if (VAR_7)
  goto vcpu_destroy;

 FUNC_11(VAR_8);

 FUNC_15(&VAR_5->lock);
 if (FUNC_13(VAR_5, VAR_6)) {
  VAR_7 = -VAR_0;
  goto unlock_vcpu_destroy;
 }

 FUNC_0(VAR_5->vcpus[FUNC_4(&VAR_5->online_vcpus)]);


 FUNC_12(VAR_5);
 VAR_7 = FUNC_5(VAR_8);
 if (VAR_7 < 0) {
  FUNC_14(VAR_5);
  goto unlock_vcpu_destroy;
 }

 VAR_5->vcpus[FUNC_4(&VAR_5->online_vcpus)] = VAR_8;





 FUNC_18();
 FUNC_3(&VAR_5->online_vcpus);

 FUNC_16(&VAR_5->lock);
 FUNC_9(VAR_8);
 return VAR_7;

unlock_vcpu_destroy:
 FUNC_16(&VAR_5->lock);
 FUNC_6(VAR_8->debugfs_dentry);
vcpu_destroy:
 FUNC_8(VAR_8);
vcpu_decrement:
 FUNC_15(&VAR_5->lock);
 VAR_5->created_vcpus--;
 FUNC_16(&VAR_5->lock);
 return VAR_7;
}
