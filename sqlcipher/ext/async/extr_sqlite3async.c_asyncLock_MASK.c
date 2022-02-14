
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_9__ {TYPE_3__* pData; } ;
struct TYPE_7__ {int eLock; int eAsyncLock; struct TYPE_7__* pNext; } ;
struct TYPE_8__ {scalar_t__ zName; TYPE_2__ lock; TYPE_1__* pLock; } ;
struct TYPE_6__ {TYPE_2__* pList; } ;
typedef TYPE_1__ AsyncLock ;
typedef TYPE_2__ AsyncFileLock ;
typedef TYPE_3__ AsyncFileData ;
typedef TYPE_4__ AsyncFile ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(sqlite3_file *VAR_7, int VAR_8){
  int VAR_9 = VAR_6;
  AsyncFileData *VAR_10 = ((AsyncFile *)VAR_7)->pData;

  if( VAR_10->zName ){
    FUNC_3(VAR_0);
    if( VAR_10->lock.eLock<VAR_8 ){
      AsyncLock *VAR_11 = VAR_10->pLock;
      AsyncFileLock *VAR_12;
      FUNC_2(VAR_11 && VAR_11->pList);
      for(VAR_12=VAR_11->pList; VAR_12; VAR_12=VAR_12->pNext){
        if( VAR_12!=&VAR_10->lock && (
          (VAR_8==VAR_2 && VAR_12->eLock>=VAR_5) ||
          (VAR_8==VAR_3 && VAR_12->eLock>=VAR_4) ||
          (VAR_8==VAR_4 && VAR_12->eLock>=VAR_4) ||
          (VAR_8==VAR_5 && VAR_12->eLock>=VAR_3)
        )){
          VAR_9 = VAR_1;
        }
      }
      if( VAR_9==VAR_6 ){
        VAR_10->lock.eLock = VAR_8;
        VAR_10->lock.eAsyncLock = FUNC_1(VAR_10->lock.eAsyncLock, VAR_8);
      }
      FUNC_2(VAR_10->lock.eAsyncLock>=VAR_10->lock.eLock);
      if( VAR_9==VAR_6 ){
        VAR_9 = FUNC_5(VAR_11);
      }
    }
    FUNC_4(VAR_0);
  }

  FUNC_0(("LOCK %d (%s) rc=%d\n", VAR_8, VAR_10->zName, VAR_9));
  return VAR_9;
}
