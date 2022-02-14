
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ i64 ;
struct TYPE_4__ {scalar_t__ bReverse; int bDone; size_t iFree; int pUsrctx; scalar_t__ (* xUsr ) (int ,int,scalar_t__) ;TYPE_3__* pFreelist; } ;
typedef TYPE_1__ WalkFreelistCtx ;
struct TYPE_6__ {size_t nEntry; TYPE_2__* aEntry; } ;
struct TYPE_5__ {scalar_t__ iBlk; scalar_t__ iId; } ;
typedef TYPE_2__ FreelistEntry ;
typedef TYPE_3__ Freelist ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, int VAR_1, i64 VAR_2){
  WalkFreelistCtx *VAR_3 = (WalkFreelistCtx *)VAR_0;
  const int VAR_4 = (VAR_3->bReverse ? -1 : 1);
  Freelist *VAR_5 = VAR_3->pFreelist;

  FUNC_0( VAR_3->bDone==0 );
  FUNC_0( VAR_1>=0 );
  if( VAR_5 ){
    while( (VAR_3->iFree < VAR_5->nEntry) && VAR_3->iFree>=0 ){
      FreelistEntry *VAR_6 = &VAR_5->aEntry[VAR_3->iFree];
      if( (VAR_3->bReverse==0 && VAR_6->iBlk>(u32)VAR_1)
       || (VAR_3->bReverse!=0 && VAR_6->iBlk<(u32)VAR_1)
      ){
        break;
      }else{
        VAR_3->iFree += VAR_4;
        if( VAR_6->iId>=0
            && VAR_3->xUsr(VAR_3->pUsrctx, VAR_6->iBlk, VAR_6->iId)
          ){
          VAR_3->bDone = 1;
          return 1;
        }
        if( VAR_6->iBlk==(u32)VAR_1 ) return 0;
      }
    }
  }

  if( VAR_3->xUsr(VAR_3->pUsrctx, VAR_1, VAR_2) ){
    VAR_3->bDone = 1;
    return 1;
  }
  return 0;
}
