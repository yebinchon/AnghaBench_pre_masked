
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_8__ {TYPE_3__* pData; } ;
struct TYPE_7__ {int zName; TYPE_1__* pLock; } ;
struct TYPE_6__ {scalar_t__ eLock; struct TYPE_6__* pNext; } ;
struct TYPE_5__ {TYPE_2__* pList; } ;
typedef TYPE_2__ AsyncFileLock ;
typedef TYPE_3__ AsyncFileData ;
typedef TYPE_4__ AsyncFile ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_3, int *VAR_4){
  int VAR_5 = 0;
  AsyncFileLock *VAR_6;
  AsyncFileData *VAR_7 = ((AsyncFile *)VAR_3)->pData;

  FUNC_1(VAR_0);
  for(VAR_6=VAR_7->pLock->pList; VAR_6; VAR_6=VAR_6->pNext){
    if( VAR_6->eLock>=VAR_1 ){
      VAR_5 = 1;
      break;
    }
  }
  FUNC_2(VAR_0);

  FUNC_0(("CHECK-LOCK %d (%s)\n", VAR_5, VAR_7->zName));
  *VAR_4 = VAR_5;
  return VAR_2;
}
