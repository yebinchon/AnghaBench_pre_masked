
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int * chgParam; } ;
struct TYPE_8__ {scalar_t__ strategy; } ;
struct TYPE_6__ {TYPE_5__* lefttree; scalar_t__ plan; int ps_ResultTupleSlot; } ;
struct TYPE_7__ {int setop_done; int table_filled; TYPE_1__ ps; int hashtable; scalar_t__ tableContext; int * grp_firstTuple; int hashiter; scalar_t__ numOutput; } ;
typedef TYPE_2__ SetOpState ;
typedef TYPE_3__ SetOp ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *) ;

void
FUNC_6(SetOpState *VAR_1)
{
 FUNC_0(VAR_1->ps.ps_ResultTupleSlot);
 VAR_1->setop_done = 0;
 VAR_1->numOutput = 0;

 if (((SetOp *) VAR_1->ps.plan)->strategy == VAR_0)
 {






  if (!VAR_1->table_filled)
   return;






  if (VAR_1->ps.lefttree->chgParam == ((void*)0))
  {
   FUNC_3(VAR_1->hashtable, &VAR_1->hashiter);
   return;
  }
 }


 if (VAR_1->grp_firstTuple != ((void*)0))
 {
  FUNC_5(VAR_1->grp_firstTuple);
  VAR_1->grp_firstTuple = ((void*)0);
 }


 if (VAR_1->tableContext)
  FUNC_2(VAR_1->tableContext);


 if (((SetOp *) VAR_1->ps.plan)->strategy == VAR_0)
 {
  FUNC_4(VAR_1->hashtable);
  VAR_1->table_filled = 0;
 }





 if (VAR_1->ps.lefttree->chgParam == ((void*)0))
  FUNC_1(VAR_1->ps.lefttree);
}
