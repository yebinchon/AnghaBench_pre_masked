
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klist {void (* get ) (struct klist_node*) ;void (* put ) (struct klist_node*) ;int k_lock; int k_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct klist *VAR_0, void (*VAR_1)(struct klist_node *),
  void (*VAR_2)(struct klist_node *))
{
 FUNC_0(&VAR_0->k_list);
 FUNC_1(&VAR_0->k_lock);
 VAR_0->get = VAR_1;
 VAR_0->put = VAR_2;
}
