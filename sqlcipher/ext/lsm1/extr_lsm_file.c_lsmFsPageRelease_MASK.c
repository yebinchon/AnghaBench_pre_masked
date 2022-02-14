
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* pFree; TYPE_1__* pMapped; scalar_t__ pCompress; int nOut; } ;
struct TYPE_8__ {scalar_t__ nRef; int flags; int aData; struct TYPE_8__* pFreeNext; struct TYPE_8__* pMappedNext; int iPg; TYPE_2__* pFS; } ;
typedef TYPE_1__ Page ;
typedef TYPE_2__ FileSystem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(Page *VAR_3){
  int VAR_4 = VAR_0;
  if( VAR_3 ){
    FUNC_0( VAR_3->nRef>0 );
    VAR_3->nRef--;
    if( VAR_3->nRef==0 ){
      FileSystem *VAR_5 = VAR_3->pFS;
      VAR_4 = FUNC_3(VAR_3);
      VAR_5->nOut--;

      FUNC_0( VAR_3->pFS->pCompress
           || FUNC_1(VAR_3->pFS, VAR_3->iPg)==0
           || (VAR_3->flags & VAR_2)
      );
      VAR_3->aData -= (VAR_3->flags & VAR_2);
      VAR_3->flags &= ~VAR_2;

      if( (VAR_3->flags & VAR_1)==0 ){

        Page **VAR_6;
        for(VAR_6=&VAR_5->pMapped; (*VAR_6)!=VAR_3; VAR_6=&(*VAR_6)->pMappedNext);
        *VAR_6 = VAR_3->pMappedNext;
        VAR_3->pMappedNext = 0;


        VAR_3->pFreeNext = VAR_5->pFree;
        VAR_5->pFree = VAR_3;
      }else{
        FUNC_2(VAR_5, VAR_3);
      }
    }
  }

  return VAR_4;
}
