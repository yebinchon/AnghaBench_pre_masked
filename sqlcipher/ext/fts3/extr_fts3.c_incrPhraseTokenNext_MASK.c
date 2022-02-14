
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int bIgnore; int pList; int nList; int iDocid; } ;
typedef TYPE_1__ TokenDoclist ;
struct TYPE_10__ {int iDocid; int nList; int pList; } ;
struct TYPE_9__ {int iDoclistToken; TYPE_2__* aToken; TYPE_6__ doclist; } ;
struct TYPE_8__ {scalar_t__ pSegcsr; scalar_t__ pDeferred; } ;
typedef int Fts3Table ;
typedef TYPE_2__ Fts3PhraseToken ;
typedef TYPE_3__ Fts3Phrase ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_6__*,int*) ;
 int FUNC_2 (int *,scalar_t__,int *,int *,int *) ;

__attribute__((used)) static int FUNC_3(
  Fts3Table *VAR_1,
  Fts3Phrase *VAR_2,
  int VAR_3,
  TokenDoclist *VAR_4,
  u8 *VAR_5
){
  int VAR_6 = VAR_0;

  if( VAR_2->iDoclistToken==VAR_3 ){
    FUNC_0( VAR_4->bIgnore==0 );
    FUNC_0( VAR_2->aToken[VAR_3].pSegcsr==0 );
    FUNC_1(VAR_1, &VAR_2->doclist, VAR_5);
    VAR_4->pList = VAR_2->doclist.pList;
    VAR_4->nList = VAR_2->doclist.nList;
    VAR_4->iDocid = VAR_2->doclist.iDocid;
  }else{
    Fts3PhraseToken *VAR_7 = &VAR_2->aToken[VAR_3];
    FUNC_0( VAR_7->pDeferred==0 );
    FUNC_0( VAR_7->pSegcsr || VAR_2->iDoclistToken>=0 );
    if( VAR_7->pSegcsr ){
      FUNC_0( VAR_4->bIgnore==0 );
      VAR_6 = FUNC_2(
          VAR_1, VAR_7->pSegcsr, &VAR_4->iDocid, &VAR_4->pList, &VAR_4->nList
      );
      if( VAR_4->pList==0 ) *VAR_5 = 1;
    }else{
      VAR_4->bIgnore = 1;
    }
  }

  return VAR_6;
}
