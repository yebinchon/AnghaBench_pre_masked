
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ op; struct TYPE_19__* pLeft; struct TYPE_19__* pRight; } ;
struct TYPE_18__ {int db; } ;
struct TYPE_17__ {int selFlags; scalar_t__ pLimit; struct TYPE_17__* pPrior; int pWhere; int pEList; } ;
struct TYPE_16__ {int iTable; int iNewTable; int pEList; scalar_t__ isLeftJoin; TYPE_3__* pParse; } ;
typedef TYPE_1__ SubstContext ;
typedef TYPE_2__ Select ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int ,TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int) ;
 TYPE_4__* FUNC_4 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(
  Parse *VAR_4,
  Select *VAR_5,
  Expr *VAR_6,
  int VAR_7
){
  Expr *VAR_8;
  int VAR_9 = 0;
  Select *VAR_10;
  if( VAR_6==0 ) return 0;
  for(VAR_10=VAR_5; VAR_10; VAR_10=VAR_10->pPrior){
    if( (VAR_10->selFlags & (VAR_1|VAR_2))!=0 ){
      FUNC_5( VAR_10->selFlags & VAR_1 );
      FUNC_5( VAR_10->selFlags & VAR_2 );
      FUNC_5( VAR_10!=VAR_5 );
      return 0;
    }
  }
  if( VAR_5->pLimit!=0 ){
    return 0;
  }
  while( VAR_6->op==VAR_3 ){
    VAR_9 += FUNC_6(VAR_4, VAR_5, VAR_6->pRight, VAR_7);
    VAR_6 = VAR_6->pLeft;
  }
  if( FUNC_0(VAR_6,VAR_0) ) return 0;
  if( FUNC_3(VAR_6, VAR_7) ){
    VAR_9++;
    while( VAR_5 ){
      SubstContext VAR_11;
      VAR_8 = FUNC_2(VAR_4->db, VAR_6, 0);
      VAR_11.pParse = VAR_4;
      VAR_11.iTable = VAR_7;
      VAR_11.iNewTable = VAR_7;
      VAR_11.isLeftJoin = 0;
      VAR_11.pEList = VAR_5->pEList;
      VAR_8 = FUNC_4(&VAR_11, VAR_8);
      VAR_5->pWhere = FUNC_1(VAR_4->db, VAR_5->pWhere, VAR_8);
      VAR_5 = VAR_5->pPrior;
    }
  }
  return VAR_9;
}
