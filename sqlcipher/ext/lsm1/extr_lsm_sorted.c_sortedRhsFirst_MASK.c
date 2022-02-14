
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int nSplitKey; int pSplitKey; int iSplitTopic; } ;
struct TYPE_14__ {TYPE_1__* pDb; } ;
struct TYPE_13__ {int nKey; int pKey; int eType; scalar_t__ pPg; } ;
struct TYPE_12__ {int xCmp; } ;
typedef TYPE_2__ SegmentPtr ;
typedef TYPE_3__ MultiCursor ;
typedef TYPE_4__ Level ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(MultiCursor *VAR_1, Level *VAR_2, SegmentPtr *VAR_3){
  int VAR_4;
  VAR_4 = FUNC_2(VAR_1, VAR_3, 0);
  while( VAR_3->pPg && VAR_4==VAR_0 ){
    int VAR_5 = FUNC_3(VAR_1->pDb->xCmp,
        VAR_2->iSplitTopic, VAR_2->pSplitKey, VAR_2->nSplitKey,
        FUNC_0(VAR_3->eType), VAR_3->pKey, VAR_3->nKey
    );
    if( VAR_5<=0 ) break;
    VAR_4 = FUNC_1(VAR_1, VAR_3, 0);
  }
  return VAR_4;
}
