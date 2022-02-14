
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {struct kvm* kvm; } ;
struct kvm {int lock; } ;




 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 unsigned long FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,unsigned long,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_2)
{
 struct kvm *VAR_3 = VAR_2->kvm;
 u32 VAR_4 = FUNC_4(VAR_2);
 unsigned long VAR_5;

 switch (VAR_4) {
 case 129:
  FUNC_0(VAR_2);
  VAR_5 = VAR_1;
  break;
 case 128:
  FUNC_2(&VAR_3->lock);
  VAR_5 = FUNC_1(VAR_2);
  FUNC_3(&VAR_3->lock);
  break;
 default:
  VAR_5 = VAR_0;
  break;
 }

 FUNC_5(VAR_2, VAR_5, 0, 0, 0);
 return 1;
}
