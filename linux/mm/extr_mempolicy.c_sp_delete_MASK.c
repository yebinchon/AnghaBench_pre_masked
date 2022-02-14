
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_node {int nd; int end; int start; } ;
struct shared_policy {int root; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct sp_node*) ;

__attribute__((used)) static void FUNC_3(struct shared_policy *VAR_0, struct sp_node *VAR_1)
{
 FUNC_0("deleting %lx-l%lx\n", VAR_1->start, VAR_1->end);
 FUNC_1(&VAR_1->nd, &VAR_0->root);
 FUNC_2(VAR_1);
}
