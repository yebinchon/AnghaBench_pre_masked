
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ pVtab; } ;
struct TYPE_12__ {TYPE_1__ base; } ;
struct TYPE_11__ {int nToken; int iColumn; TYPE_2__* aToken; } ;
struct TYPE_10__ {scalar_t__ pDeferred; scalar_t__ pSegcsr; } ;
typedef int Fts3Table ;
typedef TYPE_2__ Fts3PhraseToken ;
typedef TYPE_3__ Fts3Phrase ;
typedef TYPE_4__ Fts3Cursor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_3__*,int,char*,int) ;
 int FUNC_2 (int *,TYPE_2__*,int ,int*,char**) ;

__attribute__((used)) static int FUNC_3(
  Fts3Cursor *VAR_1,
  Fts3Phrase *VAR_2
){
  Fts3Table *VAR_3 = (Fts3Table *)VAR_1->base.pVtab;
  int VAR_4;
  int VAR_5 = VAR_0;

  for(VAR_4=0; VAR_5==VAR_0 && VAR_4<VAR_2->nToken; VAR_4++){
    Fts3PhraseToken *VAR_6 = &VAR_2->aToken[VAR_4];
    FUNC_0( VAR_6->pDeferred==0 || VAR_6->pSegcsr==0 );

    if( VAR_6->pSegcsr ){
      int VAR_7 = 0;
      char *VAR_8 = 0;
      VAR_5 = FUNC_2(VAR_3, VAR_6, VAR_2->iColumn, &VAR_7, &VAR_8);
      if( VAR_5==VAR_0 ){
        VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_4, VAR_8, VAR_7);
      }
    }
    FUNC_0( VAR_6->pSegcsr==0 );
  }

  return VAR_5;
}
