
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int nPhrase; TYPE_2__** apPhrase; } ;
struct TYPE_8__ {int eType; int xNext; TYPE_4__* pNear; } ;
struct TYPE_7__ {int nTerm; TYPE_1__* aTerm; } ;
struct TYPE_6__ {int bFirst; int pSynonym; } ;
typedef TYPE_3__ Fts5ExprNode ;
typedef TYPE_4__ Fts5ExprNearset ;



 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(Fts5ExprNode *VAR_7){
  switch( VAR_7->eType ){
    case 128: {
      Fts5ExprNearset *VAR_8 = VAR_7->pNear;
      if( VAR_8->nPhrase==1 && VAR_8->apPhrase[0]->nTerm==1
       && VAR_8->apPhrase[0]->aTerm[0].pSynonym==0
       && VAR_8->apPhrase[0]->aTerm[0].bFirst==0
      ){
        VAR_7->eType = VAR_1;
        VAR_7->xNext = VAR_6;
      }else{
        VAR_7->xNext = VAR_5;
      }
      break;
    };

    case 129: {
      VAR_7->xNext = VAR_4;
      break;
    };

    case 130: {
      VAR_7->xNext = VAR_2;
      break;
    };

    default: FUNC_0( VAR_7->eType==VAR_0 ); {
      VAR_7->xNext = VAR_3;
      break;
    };
  }
}
