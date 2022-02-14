
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_userspace_memory_region {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(const struct kvm_userspace_memory_region *VAR_3)
{
 u32 VAR_4 = VAR_1;





 if (VAR_3->flags & ~VAR_4)
  return -VAR_0;

 return 0;
}
