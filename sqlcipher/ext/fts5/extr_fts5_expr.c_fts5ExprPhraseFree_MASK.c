
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nSpace; } ;
struct TYPE_7__ {int nTerm; TYPE_3__ poslist; int pIter; struct TYPE_7__* pSynonym; struct TYPE_7__* zTerm; struct TYPE_7__* aTerm; } ;
typedef TYPE_1__ Fts5ExprTerm ;
typedef TYPE_1__ Fts5ExprPhrase ;
typedef TYPE_3__ Fts5Buffer ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(Fts5ExprPhrase *VAR_0){
  if( VAR_0 ){
    int VAR_1;
    for(VAR_1=0; VAR_1<VAR_0->nTerm; VAR_1++){
      Fts5ExprTerm *VAR_2;
      Fts5ExprTerm *VAR_3;
      Fts5ExprTerm *VAR_4 = &VAR_0->aTerm[VAR_1];
      FUNC_2(VAR_4->zTerm);
      FUNC_1(VAR_4->pIter);
      for(VAR_2=VAR_4->pSynonym; VAR_2; VAR_2=VAR_3){
        VAR_3 = VAR_2->pSynonym;
        FUNC_1(VAR_2->pIter);
        FUNC_0((Fts5Buffer*)&VAR_2[1]);
        FUNC_2(VAR_2);
      }
    }
    if( VAR_0->poslist.nSpace>0 ) FUNC_0(&VAR_0->poslist);
    FUNC_2(VAR_0);
  }
}
