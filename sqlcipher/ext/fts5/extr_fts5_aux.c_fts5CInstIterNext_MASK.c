
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int iStart; int iEnd; scalar_t__ iInst; scalar_t__ nInst; int iCol; int pFts; TYPE_1__* pApi; } ;
struct TYPE_4__ {int (* xInst ) (int ,scalar_t__,int*,int*,int*) ;int (* xPhraseSize ) (int ,int) ;} ;
typedef TYPE_2__ CInstIter ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int*,int*,int*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(CInstIter *VAR_1){
  int VAR_2 = VAR_0;
  VAR_1->iStart = -1;
  VAR_1->iEnd = -1;

  while( VAR_2==VAR_0 && VAR_1->iInst<VAR_1->nInst ){
    int VAR_3; int VAR_4; int VAR_5;
    VAR_2 = VAR_1->pApi->xInst(VAR_1->pFts, VAR_1->iInst, &VAR_3, &VAR_4, &VAR_5);
    if( VAR_2==VAR_0 ){
      if( VAR_4==VAR_1->iCol ){
        int VAR_6 = VAR_5 - 1 + VAR_1->pApi->xPhraseSize(VAR_1->pFts, VAR_3);
        if( VAR_1->iStart<0 ){
          VAR_1->iStart = VAR_5;
          VAR_1->iEnd = VAR_6;
        }else if( VAR_5<=VAR_1->iEnd ){
          if( VAR_6>VAR_1->iEnd ) VAR_1->iEnd = VAR_6;
        }else{
          break;
        }
      }
      VAR_1->iInst++;
    }
  }

  return VAR_2;
}
