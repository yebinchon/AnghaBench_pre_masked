
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int Tuplestorestate ;
struct TYPE_9__ {scalar_t__ ps_ResultTupleSlot; } ;
struct TYPE_11__ {TYPE_3__ ps; } ;
struct TYPE_10__ {int readptr; TYPE_2__* leader; TYPE_5__ ss; } ;
struct TYPE_8__ {int eof_cte; TYPE_1__* cteplanstate; int * cte_table; } ;
struct TYPE_7__ {int * chgParam; } ;
typedef TYPE_4__ CteScanState ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

void
FUNC_5(CteScanState *VAR_0)
{
 Tuplestorestate *VAR_1 = VAR_0->leader->cte_table;

 if (VAR_0->ss.ps.ps_ResultTupleSlot)
  FUNC_0(VAR_0->ss.ps.ps_ResultTupleSlot);

 FUNC_1(&VAR_0->ss);
 if (VAR_0->leader->cteplanstate->chgParam != ((void*)0))
 {
  FUNC_2(VAR_1);
  VAR_0->leader->eof_cte = 0;
 }
 else
 {





  FUNC_4(VAR_1, VAR_0->readptr);
  FUNC_3(VAR_1);
 }
}
