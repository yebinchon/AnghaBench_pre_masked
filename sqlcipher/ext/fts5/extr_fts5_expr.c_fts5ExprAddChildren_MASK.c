
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ eType; int nChild; struct TYPE_7__** apChild; } ;
typedef TYPE_1__ Fts5ExprNode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__**,TYPE_1__**,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(Fts5ExprNode *VAR_1, Fts5ExprNode *VAR_2){
  if( VAR_1->eType!=VAR_0 && VAR_2->eType==VAR_1->eType ){
    int VAR_3 = sizeof(Fts5ExprNode*) * VAR_2->nChild;
    FUNC_0(&VAR_1->apChild[VAR_1->nChild], VAR_2->apChild, VAR_3);
    VAR_1->nChild += VAR_2->nChild;
    FUNC_1(VAR_2);
  }else{
    VAR_1->apChild[VAR_1->nChild++] = VAR_2;
  }
}
