
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmap_walk_control {void* arg; int invalid_vma; int anon_lock; int rmap_one; } ;
struct page_referenced_arg {unsigned long vm_flags; int referenced; int mapcount; struct mem_cgroup* memcg; } ;
struct page {int dummy; } ;
struct mem_cgroup {int dummy; } ;


 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,struct rmap_walk_control*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

int FUNC_7(struct page *VAR_3,
      int VAR_4,
      struct mem_cgroup *VAR_5,
      unsigned long *VAR_6)
{
 int VAR_7 = 0;
 struct page_referenced_arg VAR_8 = {
  .mapcount = FUNC_4(VAR_3),
  .memcg = VAR_5,
 };
 struct rmap_walk_control VAR_9 = {
  .rmap_one = VAR_2,
  .arg = (void *)&VAR_8,
  .anon_lock = VAR_1,
 };

 *VAR_6 = 0;
 if (!VAR_8.mapcount)
  return 0;

 if (!FUNC_2(VAR_3))
  return 0;

 if (!VAR_4 && (!FUNC_0(VAR_3) || FUNC_1(VAR_3))) {
  VAR_7 = FUNC_5(VAR_3);
  if (!VAR_7)
   return 1;
 }






 if (VAR_5) {
  VAR_9.invalid_vma = VAR_0;
 }

 FUNC_3(VAR_3, &VAR_9);
 *VAR_6 = VAR_8.vm_flags;

 if (VAR_7)
  FUNC_6(VAR_3);

 return VAR_8.referenced;
}
