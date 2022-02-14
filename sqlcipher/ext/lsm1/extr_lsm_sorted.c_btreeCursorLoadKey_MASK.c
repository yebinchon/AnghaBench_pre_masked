
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int iPg; int eType; int blob; scalar_t__ nKey; scalar_t__ pKey; TYPE_1__* aPg; int pSeg; } ;
struct TYPE_4__ {int iCell; int pPage; } ;
typedef int LsmPgno ;
typedef TYPE_2__ BtreeCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int *,int *,scalar_t__*,scalar_t__*,int *) ;

__attribute__((used)) static int FUNC_1(BtreeCursor *VAR_3){
  int VAR_4 = VAR_1;
  if( VAR_3->iPg<0 ){
    VAR_3->pKey = 0;
    VAR_3->nKey = 0;
    VAR_3->eType = 0;
  }else{
    LsmPgno VAR_5;
    int VAR_6 = VAR_3->iPg;
    int VAR_7 = VAR_3->aPg[VAR_6].iCell;
    while( VAR_7<0 && (--VAR_6)>=0 ){
      VAR_7 = VAR_3->aPg[VAR_6].iCell-1;
    }
    if( VAR_6<0 || VAR_7<0 ) return VAR_0;

    VAR_4 = FUNC_0(
        VAR_3->pSeg,
        VAR_3->aPg[VAR_6].pPage, VAR_7,
        &VAR_5, &VAR_3->eType, &VAR_3->pKey, &VAR_3->nKey, &VAR_3->blob
    );
    VAR_3->eType |= VAR_2;
  }

  return VAR_4;
}
