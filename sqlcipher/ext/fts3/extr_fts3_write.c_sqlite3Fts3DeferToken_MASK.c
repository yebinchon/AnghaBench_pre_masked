
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* pDeferred; } ;
struct TYPE_9__ {int iCol; struct TYPE_9__* pNext; TYPE_1__* pToken; } ;
struct TYPE_8__ {TYPE_2__* pDeferred; } ;
typedef TYPE_1__ Fts3PhraseToken ;
typedef TYPE_2__ Fts3DeferredToken ;
typedef TYPE_3__ Fts3Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 TYPE_2__* FUNC_2 (int) ;

int FUNC_3(
  Fts3Cursor *VAR_2,
  Fts3PhraseToken *VAR_3,
  int VAR_4
){
  Fts3DeferredToken *VAR_5;
  VAR_5 = FUNC_2(sizeof(*VAR_5));
  if( !VAR_5 ){
    return VAR_0;
  }
  FUNC_1(VAR_5, 0, sizeof(*VAR_5));
  VAR_5->pToken = VAR_3;
  VAR_5->pNext = VAR_2->pDeferred;
  VAR_5->iCol = VAR_4;
  VAR_2->pDeferred = VAR_5;

  FUNC_0( VAR_3->pDeferred==0 );
  VAR_3->pDeferred = VAR_5;

  return VAR_1;
}
