
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_node {struct hlist_node** pprev; struct hlist_node* next; } ;
struct hlist_head {struct hlist_node* first; } ;



__attribute__((used)) static inline void FUNC_0(struct hlist_node *VAR_0, struct hlist_head *VAR_1)
{
 struct hlist_node *VAR_2 = VAR_1->first;
 VAR_0->next = VAR_2;
 if (VAR_2)
  VAR_2->pprev = &VAR_0->next;
 VAR_1->first = VAR_0;
 VAR_0->pprev = &VAR_1->first;
}
