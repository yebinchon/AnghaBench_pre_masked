
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nChild; int pNear; struct TYPE_4__** apChild; } ;
typedef TYPE_1__ Fts5ExprNode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(Fts5ExprNode *VAR_0){
  if( VAR_0 ){
    int VAR_1;
    for(VAR_1=0; VAR_1<VAR_0->nChild; VAR_1++){
      FUNC_2(VAR_0->apChild[VAR_1]);
    }
    FUNC_0(VAR_0->pNear);
    FUNC_1(VAR_0);
  }
}
