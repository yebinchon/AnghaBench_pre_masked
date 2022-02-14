
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache_node {int list_lock; } ;
struct kmem_cache {int dummy; } ;
struct array_cache {scalar_t__ touched; int avail; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct kmem_cache*,struct array_cache*,int,int,int *) ;
 int VAR_0 ;
 int FUNC_3 (struct kmem_cache*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct kmem_cache *VAR_1, struct kmem_cache_node *VAR_2,
    struct array_cache *VAR_3, int VAR_4)
{
 FUNC_0(VAR_0);


 FUNC_1();

 if (!VAR_3 || !VAR_3->avail)
  return;

 if (VAR_3->touched) {
  VAR_3->touched = 0;
  return;
 }

 FUNC_4(&VAR_2->list_lock);
 FUNC_2(VAR_1, VAR_3, VAR_4, 0, &VAR_0);
 FUNC_5(&VAR_2->list_lock);

 FUNC_3(VAR_1, &VAR_0);
}
