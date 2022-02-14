
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {scalar_t__ pVtab; } ;
struct TYPE_16__ {scalar_t__ bDesc; TYPE_1__ base; } ;
struct TYPE_15__ {int pNextDocid; int pList; int nList; int iDocid; scalar_t__ nAll; int aAll; } ;
struct TYPE_14__ {scalar_t__ bIncr; TYPE_4__ doclist; } ;
struct TYPE_13__ {scalar_t__ bDescIdx; } ;
typedef TYPE_2__ Fts3Table ;
typedef TYPE_3__ Fts3Phrase ;
typedef TYPE_4__ Fts3Doclist ;
typedef TYPE_5__ Fts3Cursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_4__*,int *) ;
 int FUNC_1 (TYPE_5__*,TYPE_3__*,int *) ;
 int FUNC_2 (scalar_t__,int ,scalar_t__,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_3(
  Fts3Cursor *VAR_1,
  Fts3Phrase *VAR_2,
  u8 *VAR_3
){
  int VAR_4 = VAR_0;
  Fts3Doclist *VAR_5 = &VAR_2->doclist;
  Fts3Table *VAR_6 = (Fts3Table *)VAR_1->base.pVtab;

  if( VAR_2->bIncr ){
    VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
  }else if( VAR_1->bDesc!=VAR_6->bDescIdx && VAR_5->nAll ){
    FUNC_2(VAR_6->bDescIdx, VAR_5->aAll, VAR_5->nAll,
        &VAR_5->pNextDocid, &VAR_5->iDocid, &VAR_5->nList, VAR_3
    );
    VAR_5->pList = VAR_5->pNextDocid;
  }else{
    FUNC_0(VAR_6, VAR_5, VAR_3);
  }

  return VAR_4;
}
