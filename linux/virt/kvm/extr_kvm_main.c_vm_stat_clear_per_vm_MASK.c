
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
typedef scalar_t__ u64 ;
struct kvm_stat_data {int offset; scalar_t__ kvm; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(void *VAR_1, u64 VAR_2)
{
 struct kvm_stat_data *VAR_3 = (struct kvm_stat_data *)VAR_1;

 if (VAR_2)
  return -VAR_0;

 *(ulong *)((void *)VAR_3->kvm + VAR_3->offset) = 0;

 return 0;
}
