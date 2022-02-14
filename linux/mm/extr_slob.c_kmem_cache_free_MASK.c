
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slob_rcu {int size; int head; } ;
struct kmem_cache {int flags; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (int ,void*) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct kmem_cache *VAR_3, void *VAR_4)
{
 FUNC_2(VAR_4, VAR_3->flags);
 if (FUNC_4(VAR_3->flags & VAR_0)) {
  struct slob_rcu *VAR_5;
  VAR_5 = VAR_4 + (VAR_3->size - sizeof(struct slob_rcu));
  VAR_5->size = VAR_3->size;
  FUNC_1(&VAR_5->head, VAR_2);
 } else {
  FUNC_0(VAR_4, VAR_3->size);
 }

 FUNC_3(VAR_1, VAR_4);
}
