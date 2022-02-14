
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_11__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_15__ {int ioError; TYPE_3__* pQueueFirst; } ;
struct TYPE_14__ {TYPE_4__* pData; } ;
struct TYPE_13__ {char* zName; TYPE_2__* pBaseRead; } ;
struct TYPE_12__ {scalar_t__ op; scalar_t__ iOffset; int * zBuf; int nByte; TYPE_4__* pFileData; struct TYPE_12__* pNext; } ;
struct TYPE_10__ {int (* xFileSize ) (TYPE_2__*,scalar_t__*) ;int (* xRead ) (TYPE_2__*,void*,int,scalar_t__) ;} ;
typedef TYPE_3__ AsyncWrite ;
typedef TYPE_4__ AsyncFileData ;
typedef TYPE_5__ AsyncFile ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_9__ VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int *,size_t) ;
 int FUNC_6 (TYPE_2__*,scalar_t__*) ;
 int FUNC_7 (TYPE_2__*,void*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(
  sqlite3_file *VAR_5,
  void *VAR_6,
  int VAR_7,
  sqlite3_int64 VAR_8
){
  AsyncFileData *VAR_9 = ((AsyncFile *)VAR_5)->pData;
  int VAR_10 = VAR_3;
  sqlite3_int64 VAR_11 = 0;
  sqlite3_file *VAR_12 = VAR_9->pBaseRead;
  sqlite3_int64 VAR_13 = (sqlite3_int64)VAR_7;


  FUNC_3(VAR_0);




  if( VAR_4.ioError!=VAR_3 ){
    VAR_10 = VAR_4.ioError;
    goto asyncread_out;
  }

  if( VAR_12->pMethods ){
    sqlite3_int64 VAR_14;
    VAR_10 = VAR_12->pMethods->xFileSize(VAR_12, &VAR_11);
    if( VAR_10!=VAR_3 ){
      goto asyncread_out;
    }
    VAR_14 = FUNC_2(VAR_11 - VAR_8, VAR_13);
    if( VAR_14>0 ){
      VAR_10 = VAR_12->pMethods->xRead(VAR_12, VAR_6, (int)VAR_14, VAR_8);
      FUNC_0(("READ %s %d bytes at %d\n", VAR_9->zName, VAR_14, VAR_8));
    }
  }

  if( VAR_10==VAR_3 ){
    AsyncWrite *VAR_15;
    char *VAR_16 = VAR_9->zName;

    for(VAR_15=VAR_4.pQueueFirst; VAR_15; VAR_15 = VAR_15->pNext){
      if( VAR_15->op==VAR_1 && (
        (VAR_15->pFileData==VAR_9) ||
        (VAR_16 && VAR_15->pFileData->zName==VAR_16)
      )){
        sqlite3_int64 VAR_17;
        sqlite3_int64 VAR_18 = (sqlite3_int64)VAR_15->nByte;






        sqlite3_int64 VAR_19 = (VAR_15->iOffset-VAR_8);
        sqlite3_int64 VAR_20 = -VAR_19;
        if( VAR_20<0 ) VAR_20 = 0;
        if( VAR_19<0 ) VAR_19 = 0;

        VAR_11 = FUNC_1(VAR_11, VAR_15->iOffset+VAR_18);

        VAR_17 = FUNC_2(VAR_18-VAR_20, VAR_13-VAR_19);
        if( VAR_17>0 ){
          FUNC_5(&((char *)VAR_6)[VAR_19], &VAR_15->zBuf[VAR_20], (size_t)VAR_17);
          FUNC_0(("OVERREAD %d bytes at %d\n", VAR_17, VAR_19+VAR_8));
        }
      }
    }
  }

asyncread_out:
  FUNC_4(VAR_0);
  if( VAR_10==VAR_3 && VAR_11<(VAR_8+VAR_7) ){
    VAR_10 = VAR_2;
  }
  return VAR_10;
}
