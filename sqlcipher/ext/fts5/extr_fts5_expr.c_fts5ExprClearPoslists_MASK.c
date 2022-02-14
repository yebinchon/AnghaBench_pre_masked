
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ eType; int nChild; struct TYPE_9__** apChild; TYPE_3__* pNear; } ;
struct TYPE_8__ {TYPE_2__** apPhrase; } ;
struct TYPE_6__ {scalar_t__ n; } ;
struct TYPE_7__ {TYPE_1__ poslist; } ;
typedef TYPE_4__ Fts5ExprNode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(Fts5ExprNode *VAR_2){
  if( VAR_2->eType==VAR_1 || VAR_2->eType==VAR_0 ){
    VAR_2->pNear->apPhrase[0]->poslist.n = 0;
  }else{
    int VAR_3;
    for(VAR_3=0; VAR_3<VAR_2->nChild; VAR_3++){
      FUNC_0(VAR_2->apChild[VAR_3]);
    }
  }
}
