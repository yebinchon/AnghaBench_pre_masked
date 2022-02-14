
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_10__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_14__ {TYPE_3__* pQueueFirst; } ;
struct TYPE_13__ {TYPE_4__* pData; } ;
struct TYPE_12__ {scalar_t__ zName; TYPE_2__* pBaseRead; } ;
struct TYPE_11__ {int op; scalar_t__ iOffset; int nByte; TYPE_4__* pFileData; int zBuf; struct TYPE_11__* pNext; } ;
struct TYPE_9__ {int (* xFileSize ) (TYPE_2__*,scalar_t__*) ;} ;
typedef TYPE_3__ AsyncWrite ;
typedef TYPE_4__ AsyncFileData ;
typedef TYPE_5__ AsyncFile ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 TYPE_8__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (TYPE_2__*,scalar_t__*) ;

int FUNC_6(sqlite3_file *VAR_4, sqlite3_int64 *VAR_5){
  AsyncFileData *VAR_6 = ((AsyncFile *)VAR_4)->pData;
  int VAR_7 = VAR_2;
  sqlite3_int64 VAR_8 = 0;
  sqlite3_file *VAR_9;

  FUNC_2(VAR_1);






  VAR_9 = VAR_6->pBaseRead;
  if( VAR_9->pMethods ){
    VAR_7 = VAR_9->pMethods->xFileSize(VAR_9, &VAR_8);
  }

  if( VAR_7==VAR_2 ){
    AsyncWrite *VAR_10;
    for(VAR_10=VAR_3.pQueueFirst; VAR_10; VAR_10 = VAR_10->pNext){
      if( VAR_10->op==VAR_0
       && VAR_6->zName
       && FUNC_4(VAR_6->zName, VAR_10->zBuf)==0
      ){
        VAR_8 = 0;
      }else if( VAR_10->pFileData && (
          (VAR_10->pFileData==VAR_6)
       || (VAR_6->zName && VAR_10->pFileData->zName==VAR_6->zName)
      )){
        switch( VAR_10->op ){
          case 128:
            VAR_8 = FUNC_0(VAR_10->iOffset + (sqlite3_int64)(VAR_10->nByte), VAR_8);
            break;
          case 129:
            VAR_8 = FUNC_1(VAR_8, VAR_10->iOffset);
            break;
        }
      }
    }
    *VAR_5 = VAR_8;
  }
  FUNC_3(VAR_1);
  return VAR_7;
}
