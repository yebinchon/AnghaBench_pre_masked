
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfree_deferred {int wq; int list; } ;
struct llist_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct llist_node*,int *) ;
 struct vfree_deferred* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_3(const void *VAR_1)
{






 struct vfree_deferred *VAR_2 = FUNC_1(&VAR_0);

 if (FUNC_0((struct llist_node *)VAR_1, &VAR_2->list))
  FUNC_2(&VAR_2->wq);
}
