
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int,int ,int ,int ) ;

int FUNC_6(struct kvm_vcpu *VAR_4)
{
 u32 VAR_5 = FUNC_4(VAR_4);
 u32 VAR_6 = VAR_2;
 u32 VAR_7;

 switch (VAR_5) {
 case 136:
  VAR_6 = VAR_0;
  break;
 case 139:
  VAR_7 = FUNC_3(VAR_4);
  switch(VAR_7) {
  case 138:
   switch (FUNC_0()) {
   case 134:
    break;
   case 133:
    VAR_6 = VAR_3;
    break;
   case 135:
    VAR_6 = VAR_1;
    break;
   }
   break;
  case 137:
   switch (FUNC_1()) {
   case 132:
   case 128:
    break;
   case 130:
    VAR_6 = VAR_3;
    break;
   case 131:
   case 129:
    VAR_6 = VAR_1;
    break;
   }
   break;
  }
  break;
 default:
  return FUNC_2(VAR_4);
 }

 FUNC_5(VAR_4, VAR_6, 0, 0, 0);
 return 1;
}
