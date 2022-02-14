
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int iTerm; TYPE_3__* aTerm; int iCol; int pCsr; } ;
typedef TYPE_2__ TermOffsetCtx ;
struct TYPE_9__ {int iOff; char* pList; int iPos; } ;
typedef TYPE_3__ TermOffset ;
struct TYPE_10__ {TYPE_1__* pPhrase; } ;
struct TYPE_7__ {int nToken; } ;
typedef TYPE_4__ Fts3Expr ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char**,int*) ;
 int FUNC_3 (int ,TYPE_4__*,int ,char**) ;

__attribute__((used)) static int FUNC_4(Fts3Expr *VAR_0, int VAR_1, void *VAR_2){
  TermOffsetCtx *VAR_3 = (TermOffsetCtx *)VAR_2;
  int VAR_4;
  int VAR_5;
  char *VAR_6;
  int VAR_7 = 0;
  int VAR_8;

  FUNC_0(VAR_1);
  VAR_8 = FUNC_3(VAR_3->pCsr, VAR_0, VAR_3->iCol, &VAR_6);
  VAR_4 = VAR_0->pPhrase->nToken;
  if( VAR_6 ){
    FUNC_2(&VAR_6, &VAR_7);
    FUNC_1( VAR_7>=0 );
  }

  for(VAR_5=0; VAR_5<VAR_4; VAR_5++){
    TermOffset *VAR_9 = &VAR_3->aTerm[VAR_3->iTerm++];
    VAR_9->iOff = VAR_4-VAR_5-1;
    VAR_9->pList = VAR_6;
    VAR_9->iPos = VAR_7;
  }

  return VAR_8;
}
