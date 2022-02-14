
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct ExprList_item {int sortOrder; int pExpr; } ;
struct TYPE_12__ {int * pDfltColl; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_15__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_14__ {int * aSortOrder; int ** aColl; } ;
struct TYPE_13__ {TYPE_1__* db; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ KeyInfo ;
typedef TYPE_4__ ExprList ;
typedef int CollSeq ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static KeyInfo *FUNC_4(
  Parse *VAR_0,
  ExprList *VAR_1,
  int VAR_2,
  int VAR_3
){
  int VAR_4;
  KeyInfo *VAR_5;
  struct ExprList_item *VAR_6;
  sqlite3 *VAR_7 = VAR_0->db;
  int VAR_8;

  VAR_4 = VAR_1->nExpr;
  VAR_5 = FUNC_2(VAR_7, VAR_4-VAR_2, VAR_3+1);
  if( VAR_5 ){
    FUNC_0( FUNC_3(VAR_5) );
    for(VAR_8=VAR_2, VAR_6=VAR_1->a+VAR_2; VAR_8<VAR_4; VAR_8++, VAR_6++){
      CollSeq *VAR_9;
      VAR_9 = FUNC_1(VAR_0, VAR_6->pExpr);
      if( !VAR_9 ) VAR_9 = VAR_7->pDfltColl;
      VAR_5->aColl[VAR_8-VAR_2] = VAR_9;
      VAR_5->aSortOrder[VAR_8-VAR_2] = VAR_6->sortOrder;
    }
  }
  return VAR_5;
}
