
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int rcu_head; void* freelist; } ;
struct kmem_cache {int flags; int freelist_cache; } ;


 scalar_t__ FUNC_0 (struct kmem_cache*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (struct kmem_cache*,struct page*) ;
 int VAR_1 ;
 int FUNC_4 (struct kmem_cache*,struct page*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct kmem_cache *VAR_2, struct page *VAR_3)
{
 void *VAR_4;

 VAR_4 = VAR_3->freelist;
 FUNC_4(VAR_2, VAR_3);
 if (FUNC_5(VAR_2->flags & VAR_0))
  FUNC_1(&VAR_3->rcu_head, VAR_1);
 else
  FUNC_3(VAR_2, VAR_3);





 if (FUNC_0(VAR_2))
  FUNC_2(VAR_2->freelist_cache, VAR_4);
}
