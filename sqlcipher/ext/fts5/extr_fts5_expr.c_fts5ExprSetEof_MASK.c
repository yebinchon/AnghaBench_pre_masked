
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bEof; int nChild; struct TYPE_3__** apChild; scalar_t__ bNomatch; } ;
typedef TYPE_1__ Fts5ExprNode ;



__attribute__((used)) static void FUNC_0(Fts5ExprNode *VAR_0){
  int VAR_1;
  VAR_0->bEof = 1;
  VAR_0->bNomatch = 0;
  for(VAR_1=0; VAR_1<VAR_0->nChild; VAR_1++){
    FUNC_0(VAR_0->apChild[VAR_1]);
  }
}
