
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlist_node {struct qlist_node* next; } ;
struct qlist_head {struct qlist_node* head; } ;
struct kmem_cache {int size; } ;


 struct kmem_cache* FUNC_0 (struct qlist_node*) ;
 int FUNC_1 (struct qlist_head*) ;
 int FUNC_2 (struct qlist_head*) ;
 int FUNC_3 (struct qlist_head*,struct qlist_node*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct qlist_head *VAR_0,
       struct qlist_head *VAR_1,
       struct kmem_cache *VAR_2)
{
 struct qlist_node *VAR_3;

 if (FUNC_4(FUNC_1(VAR_0)))
  return;

 VAR_3 = VAR_0->head;
 FUNC_2(VAR_0);
 while (VAR_3) {
  struct qlist_node *VAR_4 = VAR_3->next;
  struct kmem_cache *VAR_5 = FUNC_0(VAR_3);

  if (VAR_5 == VAR_2)
   FUNC_3(VAR_1, VAR_3, VAR_5->size);
  else
   FUNC_3(VAR_0, VAR_3, VAR_5->size);

  VAR_3 = VAR_4;
 }
}
