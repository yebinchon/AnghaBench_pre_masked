
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klist_node {int dummy; } ;
struct klist {void (* put ) (struct klist_node*) ;int k_lock; } ;


 int FUNC_0 (struct klist_node*) ;
 int FUNC_1 (struct klist_node*) ;
 struct klist* FUNC_2 (struct klist_node*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct klist_node *VAR_0, bool VAR_1)
{
 struct klist *VAR_2 = FUNC_2(VAR_0);
 void (*VAR_3)(struct klist_node *) = VAR_2->put;

 FUNC_3(&VAR_2->k_lock);
 if (VAR_1)
  FUNC_1(VAR_0);
 if (!FUNC_0(VAR_0))
  VAR_3 = ((void*)0);
 FUNC_4(&VAR_2->k_lock);
 if (VAR_3)
  VAR_3(VAR_0);
}
