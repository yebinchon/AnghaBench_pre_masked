
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_node {int * pprev; int * next; } ;


 int FUNC_0 (struct hlist_node*) ;

__attribute__((used)) static inline void FUNC_1(struct hlist_node *VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->next = ((void*)0);
 VAR_0->pprev = ((void*)0);
}
