
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_node {int dummy; } ;
struct TYPE_2__ {struct timer_node* next; } ;
struct link_list {TYPE_1__ head; TYPE_1__* tail; } ;



__attribute__((used)) static inline struct timer_node *
FUNC_0(struct link_list *VAR_0) {
 struct timer_node * VAR_1 = VAR_0->head.next;
 VAR_0->head.next = 0;
 VAR_0->tail = &(VAR_0->head);

 return VAR_1;
}
