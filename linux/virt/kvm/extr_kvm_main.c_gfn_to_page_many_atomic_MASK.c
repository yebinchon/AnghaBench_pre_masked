
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvm_memory_slot {int dummy; } ;
typedef int gfn_t ;


 int FUNC_0 (unsigned long,int,int,struct page**) ;
 unsigned long FUNC_1 (struct kvm_memory_slot*,int,int*) ;
 scalar_t__ FUNC_2 (unsigned long) ;

int FUNC_3(struct kvm_memory_slot *VAR_0, gfn_t VAR_1,
       struct page **VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 gfn_t VAR_5 = 0;

 VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_5);
 if (FUNC_2(VAR_4))
  return -1;

 if (VAR_5 < VAR_3)
  return 0;

 return FUNC_0(VAR_4, VAR_3, 1, VAR_2);
}
