
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int name; } ;
typedef TYPE_1__ VariableShowStmt ;
typedef int * TupleDesc ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {int portalname; int ismove; } ;
struct TYPE_8__ {int tupDesc; } ;
typedef int PreparedStatement ;
typedef TYPE_2__* Portal ;
typedef int Node ;
typedef TYPE_3__ FetchStmt ;
typedef int ExplainStmt ;
typedef TYPE_4__ ExecuteStmt ;
typedef int CallStmt ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int ,int) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;





 int FUNC_8 (int *) ;

TupleDesc
FUNC_9(Node *VAR_0)
{
 switch (FUNC_8(VAR_0))
 {
  case 132:
   return FUNC_0((CallStmt *) VAR_0);

  case 129:
   {
    FetchStmt *VAR_1 = (FetchStmt *) VAR_0;
    Portal VAR_2;

    if (VAR_1->ismove)
     return ((void*)0);
    VAR_2 = FUNC_6(VAR_1->portalname);
    if (!FUNC_7(VAR_2))
     return ((void*)0);
    return FUNC_1(VAR_2->tupDesc);
   }

  case 131:
   {
    ExecuteStmt *VAR_3 = (ExecuteStmt *) VAR_0;
    PreparedStatement *VAR_4;

    VAR_4 = FUNC_3(VAR_3->name, 0);
    if (!VAR_4)
     return ((void*)0);
    return FUNC_4(VAR_4);
   }

  case 130:
   return FUNC_2((ExplainStmt *) VAR_0);

  case 128:
   {
    VariableShowStmt *VAR_5 = (VariableShowStmt *) VAR_0;

    return FUNC_5(VAR_5->name);
   }

  default:
   return ((void*)0);
 }
}
