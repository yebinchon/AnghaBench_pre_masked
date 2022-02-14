
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_device_attr {int group; int attr; } ;
struct kvm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_device*,struct kvm_device_attr*) ;

__attribute__((used)) static int FUNC_1(struct kvm_device *VAR_1,
        struct kvm_device_attr *VAR_2)
{
 switch (VAR_2->group) {
 case 131:
  switch (VAR_2->attr) {
  case 128:
   return 0;
  }
  break;
 case 130:
  switch (VAR_2->attr) {
  case 132:
   return 0;
  case 135:
   return 0;
  case 133:
   return 0;
  case 134:
   return 0;
  }
  break;
 case 129:
  return FUNC_0(VAR_1, VAR_2);
 }
 return -VAR_0;
}
