
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {TYPE_2__* funcexpr; } ;
struct TYPE_16__ {int name; } ;
struct TYPE_15__ {int portalname; int ismove; } ;
struct TYPE_14__ {int tupDesc; } ;
struct TYPE_13__ {TYPE_1__* plansource; } ;
struct TYPE_12__ {int funcresulttype; } ;
struct TYPE_11__ {int resultDesc; } ;
typedef TYPE_3__ PreparedStatement ;
typedef TYPE_4__* Portal ;
typedef int Node ;
typedef TYPE_5__ FetchStmt ;
typedef TYPE_6__ ExecuteStmt ;
typedef TYPE_7__ CallStmt ;


 TYPE_3__* FUNC_0 (int ,int) ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_0 ;





 int FUNC_3 (int *) ;

bool
FUNC_4(Node *VAR_1)
{
 switch (FUNC_3(VAR_1))
 {
  case 132:
   {
    CallStmt *VAR_2 = (CallStmt *) VAR_1;

    return (VAR_2->funcexpr->funcresulttype == VAR_0);
   }
  case 129:
   {
    FetchStmt *VAR_3 = (FetchStmt *) VAR_1;
    Portal VAR_4;

    if (VAR_3->ismove)
     return 0;
    VAR_4 = FUNC_1(VAR_3->portalname);
    if (!FUNC_2(VAR_4))
     return 0;
    return VAR_4->tupDesc ? 1 : 0;
   }

  case 131:
   {
    ExecuteStmt *VAR_5 = (ExecuteStmt *) VAR_1;
    PreparedStatement *VAR_6;

    VAR_6 = FUNC_0(VAR_5->name, 0);
    if (!VAR_6)
     return 0;
    if (VAR_6->plansource->resultDesc)
     return 1;
    return 0;
   }

  case 130:
   return 1;

  case 128:
   return 1;

  default:
   return 0;
 }
}
