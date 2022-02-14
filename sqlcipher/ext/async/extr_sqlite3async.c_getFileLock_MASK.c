
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* pMethods; } ;
struct TYPE_9__ {int eAsyncLock; int eLock; struct TYPE_9__* pNext; } ;
struct TYPE_8__ {int eLock; TYPE_4__* pFile; TYPE_3__* pList; } ;
struct TYPE_7__ {int (* xLock ) (TYPE_4__*,int) ;int (* xUnlock ) (TYPE_4__*,int) ;} ;
typedef TYPE_2__ AsyncLock ;
typedef TYPE_3__ AsyncFileLock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_3(AsyncLock *VAR_3){
  int VAR_4 = VAR_2;
  AsyncFileLock *VAR_5;
  int VAR_6 = 0;

  if( VAR_3->pFile ){
    for(VAR_5=VAR_3->pList; VAR_5; VAR_5=VAR_5->pNext){
      FUNC_0(VAR_5->eAsyncLock>=VAR_5->eLock);
      if( VAR_5->eAsyncLock>VAR_6 ){
        VAR_6 = VAR_5->eAsyncLock;
        FUNC_0(VAR_6>=0 && VAR_6<=VAR_0);
      }
    }

    if( VAR_6>VAR_3->eLock ){
      VAR_4 = VAR_3->pFile->pMethods->xLock(VAR_3->pFile, VAR_6);
      if( VAR_4==VAR_2 ){
        VAR_3->eLock = VAR_6;
      }
    }
    else if( VAR_6<VAR_3->eLock && VAR_6<=VAR_1 ){
      VAR_4 = VAR_3->pFile->pMethods->xUnlock(VAR_3->pFile, VAR_6);
      if( VAR_4==VAR_2 ){
        VAR_3->eLock = VAR_6;
      }
    }
  }

  return VAR_4;
}
