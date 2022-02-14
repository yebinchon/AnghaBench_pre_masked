
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct list_node {struct list_node* next; struct list_node* prev; } ;
struct TYPE_5__ {struct TYPE_5__* prev; struct TYPE_5__* next; } ;
struct list_head {TYPE_2__ n; } ;
struct TYPE_4__ {struct list_node* next; struct list_node* prev; } ;
struct TYPE_6__ {TYPE_1__ n; } ;


 TYPE_3__* FUNC_0 (struct list_head*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct list_head*) ;

__attribute__((used)) static inline void FUNC_3(struct list_head *VAR_0,
         struct list_head *VAR_1)
{
 struct list_node *VAR_2 = FUNC_0(VAR_1)->n.prev;
 struct list_node *VAR_3 = FUNC_0(VAR_0)->n.next;


 VAR_0->n.next = &VAR_1->n;
 VAR_1->n.prev = &VAR_0->n;
 VAR_3->prev = VAR_2;
 VAR_2->next = VAR_3;


 FUNC_1(&VAR_1->n);
 FUNC_2(VAR_1);
}
