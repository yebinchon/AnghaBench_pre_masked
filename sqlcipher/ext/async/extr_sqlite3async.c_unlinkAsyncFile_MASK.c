
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* pLock; } ;
struct TYPE_14__ {TYPE_1__* pMethods; } ;
struct TYPE_12__ {struct TYPE_12__* pNext; } ;
struct TYPE_13__ {TYPE_3__ lock; TYPE_2__* pLock; scalar_t__ zName; } ;
struct TYPE_11__ {struct TYPE_11__* pNext; TYPE_6__* pFile; TYPE_3__* pList; } ;
struct TYPE_10__ {int (* xClose ) (TYPE_6__*) ;} ;
typedef TYPE_2__ AsyncLock ;
typedef TYPE_3__ AsyncFileLock ;
typedef TYPE_4__ AsyncFileData ;


 int VAR_0 ;
 TYPE_9__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_3(AsyncFileData *VAR_2){
  AsyncFileLock **VAR_3;
  int VAR_4 = VAR_0;

  if( VAR_2->zName ){
    AsyncLock *VAR_5 = VAR_2->pLock;
    for(VAR_3=&VAR_5->pList; *VAR_3; VAR_3=&((*VAR_3)->pNext)){
      if( (*VAR_3)==&VAR_2->lock ){
        *VAR_3 = VAR_2->lock.pNext;
        break;
      }
    }
    if( !VAR_5->pList ){
      AsyncLock **VAR_6;
      if( VAR_5->pFile ){
        VAR_5->pFile->pMethods->xClose(VAR_5->pFile);
      }
      for(VAR_6=&VAR_1.pLock; *VAR_6!=VAR_5; VAR_6=&((*VAR_6)->pNext));
      *VAR_6 = VAR_5->pNext;
      FUNC_1(VAR_5);
    }else{
      VAR_4 = FUNC_0(VAR_5);
    }
  }

  return VAR_4;
}
