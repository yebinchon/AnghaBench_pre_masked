
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int nPhrase; TYPE_2__** apPhrase; } ;
struct TYPE_8__ {scalar_t__ eType; int nChild; struct TYPE_8__** apChild; TYPE_4__* pNear; } ;
struct TYPE_6__ {scalar_t__ n; } ;
struct TYPE_7__ {TYPE_1__ poslist; } ;
typedef TYPE_2__ Fts5ExprPhrase ;
typedef TYPE_3__ Fts5ExprNode ;
typedef TYPE_4__ Fts5ExprNearset ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(Fts5ExprNode *VAR_2){
  if( VAR_2->eType==VAR_0 || VAR_2->eType==VAR_1 ){
    Fts5ExprNearset *VAR_3 = VAR_2->pNear;
    int VAR_4;
    for(VAR_4=0; VAR_4<VAR_3->nPhrase; VAR_4++){
      Fts5ExprPhrase *VAR_5 = VAR_3->apPhrase[VAR_4];
      VAR_5->poslist.n = 0;
    }
  }else{
    int VAR_6;
    for(VAR_6=0; VAR_6<VAR_2->nChild; VAR_6++){
      FUNC_0(VAR_2->apChild[VAR_6]);
    }
  }
}
