
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct TYPE_4__ {int lock; } ;
struct tipc_bclink_entry {TYPE_1__ inputq2; int arrvq; TYPE_2__ inputq1; } ;
struct tipc_node {int net; struct tipc_bclink_entry bc_entry; } ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct tipc_node *VAR_0)
{
 struct tipc_bclink_entry *VAR_1 = &VAR_0->bc_entry;


 FUNC_1(&VAR_1->inputq2.lock);
 FUNC_1(&VAR_1->inputq1.lock);
 FUNC_0(&VAR_1->inputq1, &VAR_1->arrvq);
 FUNC_2(&VAR_1->inputq1.lock);
 FUNC_2(&VAR_1->inputq2.lock);
 FUNC_3(VAR_0->net, &VAR_1->arrvq, &VAR_1->inputq2);
}
