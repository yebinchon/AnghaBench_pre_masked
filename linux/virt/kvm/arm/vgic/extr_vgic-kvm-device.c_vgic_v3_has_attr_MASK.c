
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_device_attr {int group; int attr; } ;
struct kvm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int FUNC_0 (struct kvm_device*,struct kvm_device_attr*) ;

__attribute__((used)) static int FUNC_1(struct kvm_device *VAR_4,
       struct kvm_device_attr *VAR_5)
{
 switch (VAR_5->group) {
 case 138:
  switch (VAR_5->attr) {
  case 130:
  case 129:
  case 128:
   return 0;
  }
  break;
 case 135:
 case 132:
 case 137:
  return FUNC_0(VAR_4, VAR_5);
 case 133:
  return 0;
 case 134: {
  if (((VAR_5->attr & VAR_1) >>
        VAR_2) ==
        VAR_3)
   return 0;
  break;
 }
 case 136:
  switch (VAR_5->attr) {
  case 139:
   return 0;
  case 131:
   return 0;
  }
 }
 return -VAR_0;
}
