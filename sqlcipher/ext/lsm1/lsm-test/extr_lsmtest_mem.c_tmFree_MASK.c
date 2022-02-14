
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ iForeGuard; size_t nByte; TYPE_1__* pAgg; struct TYPE_13__* pPrev; struct TYPE_13__* pNext; } ;
typedef TYPE_2__ u8 ;
struct TYPE_14__ {int (* xFree ) (TYPE_2__*) ;TYPE_2__* pFirst; } ;
typedef TYPE_3__ TmGlobal ;
typedef TYPE_2__ TmBlockHdr ;
struct TYPE_12__ {size_t nOutByte; int nOutAlloc; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(TmGlobal *VAR_3, void *VAR_4){
  if( VAR_4 ){
    TmBlockHdr *VAR_5;
    u8 *VAR_6 = (u8 *)VAR_4;

    FUNC_4(VAR_3);
    VAR_5 = (TmBlockHdr *)(VAR_6 - VAR_0);
    FUNC_0( VAR_5->iForeGuard==VAR_1 );
    FUNC_0( 0==FUNC_1(&VAR_6[VAR_5->nByte], &VAR_2, 4) );

    if( VAR_5->pPrev ){
      FUNC_0( VAR_5->pPrev->pNext==VAR_5 );
      VAR_5->pPrev->pNext = VAR_5->pNext;
    }else{
      FUNC_0( VAR_5==VAR_3->pFirst );
      VAR_3->pFirst = VAR_5->pNext;
    }
    if( VAR_5->pNext ){
      FUNC_0( VAR_5->pNext->pPrev==VAR_5 );
      VAR_5->pNext->pPrev = VAR_5->pPrev;
    }






    FUNC_5(VAR_3);
    FUNC_2(VAR_6, 0x58, VAR_5->nByte);
    FUNC_2(VAR_5, 0x57, sizeof(TmBlockHdr));
    VAR_3->xFree(VAR_5);
  }
}
