
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conncount_list {scalar_t__ count; int head; int list_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct nf_conncount_list *VAR_0)
{
 FUNC_1(&VAR_0->list_lock);
 FUNC_0(&VAR_0->head);
 VAR_0->count = 0;
}
