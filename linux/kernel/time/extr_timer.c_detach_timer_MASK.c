
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_node {int next; int * pprev; } ;
struct timer_list {struct hlist_node entry; } ;


 int VAR_0 ;
 int FUNC_0 (struct hlist_node*) ;
 int FUNC_1 (struct timer_list*) ;

__attribute__((used)) static inline void FUNC_2(struct timer_list *VAR_1, bool VAR_2)
{
 struct hlist_node *VAR_3 = &VAR_1->entry;

 FUNC_1(VAR_1);

 FUNC_0(VAR_3);
 if (VAR_2)
  VAR_3->pprev = ((void*)0);
 VAR_3->next = VAR_0;
}
