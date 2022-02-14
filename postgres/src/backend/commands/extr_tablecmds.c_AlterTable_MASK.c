
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* relation; int cmds; } ;
struct TYPE_5__ {int inh; } ;
typedef int Relation ;
typedef int Oid ;
typedef int LOCKMODE ;
typedef TYPE_2__ AlterTableStmt ;


 int FUNC_0 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(Oid VAR_1, LOCKMODE VAR_2, AlterTableStmt *VAR_3)
{
 Relation VAR_4;


 VAR_4 = FUNC_2(VAR_1, VAR_0);

 FUNC_1(VAR_4, "ALTER TABLE");

 FUNC_0(VAR_3, VAR_4, VAR_3->cmds, VAR_3->relation->inh, VAR_2);
}
