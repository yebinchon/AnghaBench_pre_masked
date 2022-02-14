
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
 case 134:
  switch (VAR_2->attr) {
  case 128:
  case 129:
   return 0;
  }
  break;
 case 131:
 case 133:
  return FUNC_0(VAR_1, VAR_2);
 case 130:
  return 0;
 case 132:
  switch (VAR_2->attr) {
  case 135:
   return 0;
  }
 }
 return -VAR_0;
}
