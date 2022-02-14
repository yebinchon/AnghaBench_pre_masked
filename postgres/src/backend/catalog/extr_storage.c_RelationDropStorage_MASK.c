
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int atCommit; struct TYPE_7__* next; int nestLevel; int backend; int relnode; } ;
struct TYPE_6__ {int rd_backend; int rd_node; } ;
typedef TYPE_1__* Relation ;
typedef TYPE_2__ PendingRelDelete ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

void
FUNC_3(Relation VAR_2)
{
 PendingRelDelete *VAR_3;


 VAR_3 = (PendingRelDelete *)
  FUNC_1(VAR_0, sizeof(PendingRelDelete));
 VAR_3->relnode = VAR_2->rd_node;
 VAR_3->backend = VAR_2->rd_backend;
 VAR_3->atCommit = 1;
 VAR_3->nestLevel = FUNC_0();
 VAR_3->next = VAR_1;
 VAR_1 = VAR_3;
 FUNC_2(VAR_2);
}
