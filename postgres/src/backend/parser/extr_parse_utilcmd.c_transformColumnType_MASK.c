
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int Type ;
struct TYPE_10__ {TYPE_1__* collClause; int typeName; } ;
struct TYPE_9__ {int pstate; } ;
struct TYPE_8__ {int oid; int typcollation; } ;
struct TYPE_7__ {int location; int collname; } ;
typedef TYPE_2__* Form_pg_type ;
typedef TYPE_3__ CreateStmtContext ;
typedef TYPE_4__ ColumnDef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_10(CreateStmtContext *VAR_2, ColumnDef *VAR_3)
{




 Type VAR_4 = FUNC_9(VAR_2->pstate, VAR_3->typeName, ((void*)0));

 if (VAR_3->collClause)
 {
  Form_pg_type VAR_5 = (Form_pg_type) FUNC_0(VAR_4);

  FUNC_1(VAR_2->pstate,
      VAR_3->collClause->collname,
      VAR_3->collClause->location);

  if (!FUNC_2(VAR_5->typcollation))
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("collations are not supported by type %s",
       FUNC_7(VAR_5->oid)),
      FUNC_8(VAR_2->pstate,
          VAR_3->collClause->location)));
 }

 FUNC_3(VAR_4);
}
