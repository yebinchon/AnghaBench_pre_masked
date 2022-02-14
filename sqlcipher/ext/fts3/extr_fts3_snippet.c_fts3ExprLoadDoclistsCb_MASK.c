
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* pPhrase; } ;
struct TYPE_6__ {scalar_t__ nToken; } ;
struct TYPE_5__ {int nToken; int nPhrase; } ;
typedef TYPE_1__ LoadDoclistCtx ;
typedef TYPE_2__ Fts3Phrase ;
typedef TYPE_3__ Fts3Expr ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(Fts3Expr *VAR_1, int VAR_2, void *VAR_3){
  int VAR_4 = VAR_0;
  Fts3Phrase *VAR_5 = VAR_1->pPhrase;
  LoadDoclistCtx *VAR_6 = (LoadDoclistCtx *)VAR_3;

  FUNC_0(VAR_2);

  VAR_6->nPhrase++;
  VAR_6->nToken += VAR_5->nToken;

  return VAR_4;
}
