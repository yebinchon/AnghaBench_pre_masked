
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvm_memory_slot {int dummy; } ;
struct kvm_host_map {int gfn; int pfn; void* hva; struct page* page; } ;
typedef int kvm_pfn_t ;
typedef int gfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_memory_slot*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (struct page*) ;
 void* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 struct page* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct kvm_memory_slot *VAR_5, gfn_t VAR_6,
    struct kvm_host_map *VAR_7)
{
 kvm_pfn_t VAR_8;
 void *VAR_9 = ((void*)0);
 struct page *VAR_10 = VAR_2;

 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_5, VAR_6);
 if (FUNC_1(VAR_8))
  return -VAR_1;

 if (FUNC_6(VAR_8)) {
  VAR_10 = FUNC_5(VAR_8);
  VAR_9 = FUNC_2(VAR_10);




 }

 if (!VAR_9)
  return -VAR_0;

 VAR_7->page = VAR_10;
 VAR_7->hva = VAR_9;
 VAR_7->pfn = VAR_8;
 VAR_7->gfn = VAR_6;

 return 0;
}
