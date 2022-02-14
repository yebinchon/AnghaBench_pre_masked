
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* cte; } ;
struct TYPE_7__ {scalar_t__ ctequery; } ;
struct TYPE_6__ {int numitems; int curitem; scalar_t__ innerwiths; TYPE_5__* items; int pstate; } ;
typedef int Node ;
typedef TYPE_1__ CteState ;
typedef TYPE_2__ CommonTableExpr ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,TYPE_5__*,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(CteState *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->numitems; VAR_2++)
 {
  CommonTableExpr *VAR_3 = VAR_1->items[VAR_2].cte;

  VAR_1->curitem = VAR_2;
  VAR_1->innerwiths = VAR_0;
  FUNC_2((Node *) VAR_3->ctequery, VAR_1);
  FUNC_0(VAR_1->innerwiths == VAR_0);
 }

 FUNC_1(VAR_1->pstate, VAR_1->items, VAR_1->numitems);
}
