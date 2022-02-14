
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct percpu_list_node {struct percpu_list_node* next; } ;
struct percpu_list {TYPE_1__* c; } ;
struct TYPE_2__ {struct percpu_list_node* head; } ;



struct percpu_list_node *FUNC_0(struct percpu_list *VAR_0, int VAR_1)
{
 struct percpu_list_node *VAR_2;

 VAR_2 = VAR_0->c[VAR_1].head;
 if (!VAR_2)
  return ((void*)0);
 VAR_0->c[VAR_1].head = VAR_2->next;
 return VAR_2;
}
