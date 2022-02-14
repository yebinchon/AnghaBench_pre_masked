
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlist_node {struct qlist_node* next; } ;
struct qlist_head {struct qlist_node* head; } ;
struct kmem_cache {int dummy; } ;


 int FUNC_0 (struct qlist_node*,struct kmem_cache*) ;
 struct kmem_cache* FUNC_1 (struct qlist_node*) ;
 int FUNC_2 (struct qlist_head*) ;
 int FUNC_3 (struct qlist_head*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct qlist_head *VAR_0, struct kmem_cache *VAR_1)
{
 struct qlist_node *VAR_2;

 if (FUNC_4(FUNC_2(VAR_0)))
  return;

 VAR_2 = VAR_0->head;
 while (VAR_2) {
  struct kmem_cache *VAR_3 =
   VAR_1 ? VAR_1 : FUNC_1(VAR_2);
  struct qlist_node *VAR_4 = VAR_2->next;

  FUNC_0(VAR_2, VAR_3);
  VAR_2 = VAR_4;
 }
 FUNC_3(VAR_0);
}
