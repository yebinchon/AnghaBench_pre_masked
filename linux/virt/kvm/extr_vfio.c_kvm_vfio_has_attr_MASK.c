
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_device_attr {int group; int attr; } ;
struct kvm_device {int dummy; } ;


 int VAR_0 ;





__attribute__((used)) static int FUNC_0(struct kvm_device *VAR_1,
        struct kvm_device_attr *VAR_2)
{
 switch (VAR_2->group) {
 case 131:
  switch (VAR_2->attr) {
  case 130:
  case 129:



   return 0;
  }

  break;
 }

 return -VAR_0;
}
