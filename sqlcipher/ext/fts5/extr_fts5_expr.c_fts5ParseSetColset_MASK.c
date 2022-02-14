
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ nCol; } ;
struct TYPE_15__ {TYPE_4__* pColset; } ;
struct TYPE_14__ {scalar_t__ eType; int nChild; struct TYPE_14__** apChild; scalar_t__ xNext; TYPE_3__* pNear; } ;
struct TYPE_13__ {scalar_t__ rc; } ;
typedef TYPE_1__ Fts5Parse ;
typedef TYPE_2__ Fts5ExprNode ;
typedef TYPE_3__ Fts5ExprNearset ;
typedef TYPE_4__ Fts5Colset ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (scalar_t__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(
  Fts5Parse *VAR_7,
  Fts5ExprNode *VAR_8,
  Fts5Colset *VAR_9,
  Fts5Colset **VAR_10
){
  if( VAR_7->rc==VAR_6 ){
    FUNC_0( VAR_8->eType==VAR_5 || VAR_8->eType==VAR_4
         || VAR_8->eType==VAR_0 || VAR_8->eType==VAR_3
         || VAR_8->eType==VAR_2 || VAR_8->eType==VAR_1
    );
    if( VAR_8->eType==VAR_4 || VAR_8->eType==VAR_5 ){
      Fts5ExprNearset *VAR_11 = VAR_8->pNear;
      if( VAR_11->pColset ){
        FUNC_2(VAR_11->pColset, VAR_9);
        if( VAR_11->pColset->nCol==0 ){
          VAR_8->eType = VAR_1;
          VAR_8->xNext = 0;
        }
      }else if( *VAR_10 ){
        VAR_11->pColset = VAR_9;
        *VAR_10 = 0;
      }else{
        VAR_11->pColset = FUNC_1(&VAR_7->rc, VAR_9);
      }
    }else{
      int VAR_12;
      FUNC_0( VAR_8->eType!=VAR_1 || VAR_8->nChild==0 );
      for(VAR_12=0; VAR_12<VAR_8->nChild; VAR_12++){
        FUNC_3(VAR_7, VAR_8->apChild[VAR_12], VAR_9, VAR_10);
      }
    }
  }
}
