
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_node {struct timer_node* next; } ;
struct link_list {struct timer_node* tail; } ;



__attribute__((used)) static inline void
FUNC_0(struct link_list *VAR_0,struct timer_node *VAR_1) {
 VAR_0->tail->next = VAR_1;
 VAR_0->tail = VAR_1;
 VAR_1->next=0;
}
