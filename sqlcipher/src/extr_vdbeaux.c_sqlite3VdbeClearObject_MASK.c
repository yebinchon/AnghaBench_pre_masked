
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_7__ {int nResColumn; scalar_t__ magic; int nVar; int nScan; TYPE_2__* aScan; TYPE_2__* pDblStr; TYPE_2__* zNormSql; TYPE_2__* zSql; TYPE_2__* aColName; int nOp; int aOp; TYPE_2__* pFree; TYPE_2__* pVList; TYPE_2__* aVar; TYPE_2__* pProgram; int * db; } ;
typedef TYPE_1__ Vdbe ;
struct TYPE_8__ {struct TYPE_8__* zName; struct TYPE_8__* pNextStr; int nOp; int aOp; struct TYPE_8__* pNext; } ;
typedef TYPE_2__ SubProgram ;
typedef TYPE_2__ DblquoteStr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,int ,int ) ;

void FUNC_4(sqlite3 *VAR_2, Vdbe *VAR_3){
  SubProgram *VAR_4, *VAR_5;
  FUNC_0( VAR_3->db==0 || VAR_3->db==VAR_2 );
  FUNC_1(VAR_3->aColName, VAR_3->nResColumn*VAR_0);
  for(VAR_4=VAR_3->pProgram; VAR_4; VAR_4=VAR_5){
    VAR_5 = VAR_4->pNext;
    FUNC_3(VAR_2, VAR_4->aOp, VAR_4->nOp);
    FUNC_2(VAR_2, VAR_4);
  }
  if( VAR_3->magic!=VAR_1 ){
    FUNC_1(VAR_3->aVar, VAR_3->nVar);
    FUNC_2(VAR_2, VAR_3->pVList);
    FUNC_2(VAR_2, VAR_3->pFree);
  }
  FUNC_3(VAR_2, VAR_3->aOp, VAR_3->nOp);
  FUNC_2(VAR_2, VAR_3->aColName);
  FUNC_2(VAR_2, VAR_3->zSql);
}
