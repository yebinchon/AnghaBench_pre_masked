
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int ps_ResultTupleSlot; } ;
struct TYPE_10__ {TYPE_1__ ps; } ;
struct TYPE_12__ {int eflags; int eof_underlying; int * tuplestorestate; TYPE_2__ ss; } ;
struct TYPE_11__ {int * chgParam; } ;
typedef TYPE_3__ PlanState ;
typedef TYPE_4__ MaterialState ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(MaterialState *VAR_1)
{
 PlanState *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_1->ss.ps.ps_ResultTupleSlot);

 if (VAR_1->eflags != 0)
 {





  if (!VAR_1->tuplestorestate)
   return;
  if (VAR_2->chgParam != ((void*)0) ||
   (VAR_1->eflags & VAR_0) == 0)
  {
   FUNC_3(VAR_1->tuplestorestate);
   VAR_1->tuplestorestate = ((void*)0);
   if (VAR_2->chgParam == ((void*)0))
    FUNC_1(VAR_2);
   VAR_1->eof_underlying = 0;
  }
  else
   FUNC_4(VAR_1->tuplestorestate);
 }
 else
 {






  if (VAR_2->chgParam == ((void*)0))
   FUNC_1(VAR_2);
  VAR_1->eof_underlying = 0;
 }
}
