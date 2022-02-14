
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int u64 ;
struct kvm_stat_data {int offset; scalar_t__ kvm; } ;



__attribute__((used)) static int FUNC_0(void *VAR_0, u64 *VAR_1)
{
 struct kvm_stat_data *VAR_2 = (struct kvm_stat_data *)VAR_0;

 *VAR_1 = *(ulong *)((void *)VAR_2->kvm + VAR_2->offset);

 return 0;
}
