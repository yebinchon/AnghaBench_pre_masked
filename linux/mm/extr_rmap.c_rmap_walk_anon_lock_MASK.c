
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmap_walk_control {struct anon_vma* (* anon_lock ) (struct page*) ;} ;
struct page {int dummy; } ;
struct anon_vma {int dummy; } ;


 int FUNC_0 (struct anon_vma*) ;
 struct anon_vma* FUNC_1 (struct page*) ;
 struct anon_vma* FUNC_2 (struct page*) ;

__attribute__((used)) static struct anon_vma *FUNC_3(struct page *VAR_0,
     struct rmap_walk_control *VAR_1)
{
 struct anon_vma *VAR_2;

 if (VAR_1->anon_lock)
  return VAR_1->anon_lock(VAR_0);







 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(VAR_2);
 return VAR_2;
}
