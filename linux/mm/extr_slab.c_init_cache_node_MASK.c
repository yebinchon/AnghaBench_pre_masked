
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache_node {scalar_t__ free_limit; scalar_t__ next_reap; int list_lock; } ;
struct kmem_cache {int batchcount; struct kmem_cache_node** node; scalar_t__ num; } ;
typedef int gfp_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct kmem_cache_node* FUNC_0 (struct kmem_cache*,int) ;
 scalar_t__ VAR_2 ;
 struct kmem_cache_node* FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct kmem_cache_node*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct kmem_cache *VAR_3, int VAR_4, gfp_t VAR_5)
{
 struct kmem_cache_node *VAR_6;






 VAR_6 = FUNC_0(VAR_3, VAR_4);
 if (VAR_6) {
  FUNC_4(&VAR_6->list_lock);
  VAR_6->free_limit = (1 + FUNC_3(VAR_4)) * VAR_3->batchcount +
    VAR_3->num;
  FUNC_5(&VAR_6->list_lock);

  return 0;
 }

 VAR_6 = FUNC_1(sizeof(struct kmem_cache_node), VAR_5, VAR_4);
 if (!VAR_6)
  return -VAR_0;

 FUNC_2(VAR_6);
 VAR_6->next_reap = VAR_2 + VAR_1 +
      ((unsigned long)VAR_3) % VAR_1;

 VAR_6->free_limit =
  (1 + FUNC_3(VAR_4)) * VAR_3->batchcount + VAR_3->num;






 VAR_3->node[VAR_4] = VAR_6;

 return 0;
}
