
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WhereInfo ;
struct TYPE_3__ {int aStatic; int a; int nSlot; scalar_t__ nTerm; scalar_t__ pOuter; scalar_t__ hasOr; int * pWInfo; } ;
typedef TYPE_1__ WhereClause ;


 int FUNC_0 (int ) ;

void FUNC_1(
  WhereClause *VAR_0,
  WhereInfo *VAR_1
){
  VAR_0->pWInfo = VAR_1;
  VAR_0->hasOr = 0;
  VAR_0->pOuter = 0;
  VAR_0->nTerm = 0;
  VAR_0->nSlot = FUNC_0(VAR_0->aStatic);
  VAR_0->a = VAR_0->aStatic;
}
