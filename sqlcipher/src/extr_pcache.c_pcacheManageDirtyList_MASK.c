
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {scalar_t__ bPurgeable; int eCreate; TYPE_1__* pSynced; TYPE_1__* pDirty; TYPE_1__* pDirtyTail; } ;
struct TYPE_5__ {int flags; struct TYPE_5__* pDirtyPrev; struct TYPE_5__* pDirtyNext; int pgno; TYPE_2__* pCache; } ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ PCache ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(PgHdr *VAR_3, u8 VAR_4){
  PCache *VAR_5 = VAR_3->pCache;

  FUNC_2(("%p.DIRTYLIST.%s %d\n", VAR_5,
                VAR_4==1 ? "REMOVE" : VAR_4==2 ? "ADD" : "FRONT",
                VAR_3->pgno));
  if( VAR_4 & VAR_1 ){
    FUNC_0( VAR_3->pDirtyNext || VAR_3==VAR_5->pDirtyTail );
    FUNC_0( VAR_3->pDirtyPrev || VAR_3==VAR_5->pDirty );


    if( VAR_5->pSynced==VAR_3 ){
      VAR_5->pSynced = VAR_3->pDirtyPrev;
    }

    if( VAR_3->pDirtyNext ){
      VAR_3->pDirtyNext->pDirtyPrev = VAR_3->pDirtyPrev;
    }else{
      FUNC_0( VAR_3==VAR_5->pDirtyTail );
      VAR_5->pDirtyTail = VAR_3->pDirtyPrev;
    }
    if( VAR_3->pDirtyPrev ){
      VAR_3->pDirtyPrev->pDirtyNext = VAR_3->pDirtyNext;
    }else{




      FUNC_0( VAR_3==VAR_5->pDirty );
      VAR_5->pDirty = VAR_3->pDirtyNext;
      FUNC_0( VAR_5->bPurgeable || VAR_5->eCreate==2 );
      if( VAR_5->pDirty==0 ){
        FUNC_0( VAR_5->bPurgeable==0 || VAR_5->eCreate==1 );
        VAR_5->eCreate = 2;
      }
    }
  }
  if( VAR_4 & VAR_0 ){
    VAR_3->pDirtyPrev = 0;
    VAR_3->pDirtyNext = VAR_5->pDirty;
    if( VAR_3->pDirtyNext ){
      FUNC_0( VAR_3->pDirtyNext->pDirtyPrev==0 );
      VAR_3->pDirtyNext->pDirtyPrev = VAR_3;
    }else{
      VAR_5->pDirtyTail = VAR_3;
      if( VAR_5->bPurgeable ){
        FUNC_0( VAR_5->eCreate==2 );
        VAR_5->eCreate = 1;
      }
    }
    VAR_5->pDirty = VAR_3;






    if( !VAR_5->pSynced
     && 0==(VAR_3->flags&VAR_2)
    ){
      VAR_5->pSynced = VAR_3;
    }
  }
  FUNC_1(VAR_5);
}
