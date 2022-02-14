
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conncount_tuple {int node; } ;
struct nf_conncount_list {int count; int list_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct nf_conncount_tuple*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nf_conncount_list *VAR_1,
        struct nf_conncount_tuple *VAR_2)
{
 FUNC_2(&VAR_1->list_lock);

 VAR_1->count--;
 FUNC_1(&VAR_2->node);

 FUNC_0(VAR_0, VAR_2);
}
