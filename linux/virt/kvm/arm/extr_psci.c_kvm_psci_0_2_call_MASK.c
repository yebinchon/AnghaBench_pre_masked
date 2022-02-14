
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {struct kvm* kvm; } ;
struct kvm {int lock; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 unsigned long FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 unsigned long FUNC_4 (struct kvm_vcpu*) ;
 unsigned long FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*,unsigned long,int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct kvm_vcpu *VAR_5)
{
 struct kvm *VAR_6 = VAR_5->kvm;
 u32 VAR_7 = FUNC_8(VAR_5);
 unsigned long VAR_8;
 int VAR_9 = 1;

 switch (VAR_7) {
 case 130:




  VAR_8 = VAR_0;
  break;
 case 132:
 case 136:
  VAR_8 = FUNC_5(VAR_5);
  break;
 case 134:
  FUNC_3(VAR_5);
  VAR_8 = VAR_4;
  break;
 case 133:
 case 137:
  FUNC_6(&VAR_6->lock);
  VAR_8 = FUNC_4(VAR_5);
  FUNC_7(&VAR_6->lock);
  break;
 case 135:
 case 138:
  VAR_8 = FUNC_2(VAR_5);
  break;
 case 131:





  VAR_8 = VAR_1;
  break;
 case 129:
  FUNC_0(VAR_5);
  VAR_8 = VAR_2;
  VAR_9 = 0;
  break;
 case 128:
  FUNC_1(VAR_5);




  VAR_8 = VAR_2;
  VAR_9 = 0;
  break;
 default:
  VAR_8 = VAR_3;
  break;
 }

 FUNC_9(VAR_5, VAR_8, 0, 0, 0);
 return VAR_9;
}
