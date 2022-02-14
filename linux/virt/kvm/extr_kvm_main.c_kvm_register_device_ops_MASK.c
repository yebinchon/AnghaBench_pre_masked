
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct kvm_device_ops {int dummy; } ;


 size_t FUNC_0 (struct kvm_device_ops**) ;
 int VAR_0 ;
 int VAR_1 ;
 struct kvm_device_ops** VAR_2 ;

int FUNC_1(struct kvm_device_ops *VAR_3, u32 VAR_4)
{
 if (VAR_4 >= FUNC_0(VAR_2))
  return -VAR_1;

 if (VAR_2[VAR_4] != ((void*)0))
  return -VAR_0;

 VAR_2[VAR_4] = VAR_3;
 return 0;
}
