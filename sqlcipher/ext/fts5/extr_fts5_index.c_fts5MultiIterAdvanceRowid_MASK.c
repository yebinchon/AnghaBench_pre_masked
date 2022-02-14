
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_8__ {scalar_t__ bTermEq; size_t iFirst; } ;
struct TYPE_7__ {scalar_t__ iSwitchRowid; int bRev; int nSeg; TYPE_3__* aFirst; TYPE_1__* aSeg; } ;
struct TYPE_6__ {scalar_t__ iRowid; int pLeaf; } ;
typedef TYPE_1__ Fts5SegIter ;
typedef TYPE_2__ Fts5Iter ;
typedef TYPE_3__ Fts5CResult ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(
  Fts5Iter *VAR_2,
  int VAR_3,
  Fts5SegIter **VAR_4
){
  Fts5SegIter *VAR_5 = &VAR_2->aSeg[VAR_3];

  if( VAR_5->iRowid==VAR_2->iSwitchRowid
   || (VAR_5->iRowid<VAR_2->iSwitchRowid)==VAR_2->bRev
  ){
    int VAR_6;
    Fts5SegIter *VAR_7 = &VAR_2->aSeg[VAR_3 ^ 0x0001];
    VAR_2->iSwitchRowid = VAR_2->bRev ? VAR_1 : VAR_0;
    for(VAR_6=(VAR_2->nSeg+VAR_3)/2; 1; VAR_6=VAR_6/2){
      Fts5CResult *VAR_8 = &VAR_2->aFirst[VAR_6];

      FUNC_0( VAR_5->pLeaf );
      FUNC_0( VAR_8->bTermEq==0 || VAR_7->pLeaf );

      if( VAR_8->bTermEq ){
        if( VAR_5->iRowid==VAR_7->iRowid ){
          return 1;
        }else if( (VAR_7->iRowid>VAR_5->iRowid)==VAR_2->bRev ){
          VAR_2->iSwitchRowid = VAR_7->iRowid;
          VAR_5 = VAR_7;
        }else if( (VAR_7->iRowid>VAR_2->iSwitchRowid)==VAR_2->bRev ){
          VAR_2->iSwitchRowid = VAR_7->iRowid;
        }
      }
      VAR_8->iFirst = (u16)(VAR_5 - VAR_2->aSeg);
      if( VAR_6==1 ) break;

      VAR_7 = &VAR_2->aSeg[ VAR_2->aFirst[VAR_6 ^ 0x0001].iFirst ];
    }
  }

  *VAR_4 = VAR_5;
  return 0;
}
