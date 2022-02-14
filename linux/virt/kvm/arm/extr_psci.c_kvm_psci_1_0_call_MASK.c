
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;



 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,unsigned long,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_2)
{
 u32 VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 1;

 switch(VAR_3) {
 case 131:
  VAR_5 = VAR_0;
  break;
 case 128:
  VAR_4 = FUNC_1(VAR_2);
  switch(VAR_4) {
  case 131:
  case 133:
  case 137:
  case 135:
  case 134:
  case 138:
  case 136:
  case 139:
  case 132:
  case 130:
  case 129:
  case 128:
  case 140:
   VAR_5 = 0;
   break;
  default:
   VAR_5 = VAR_1;
   break;
  }
  break;
 default:
  return FUNC_0(VAR_2);
 }

 FUNC_3(VAR_2, VAR_5, 0, 0, 0);
 return VAR_6;
}
