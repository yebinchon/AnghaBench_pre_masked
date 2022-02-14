
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_6__ {int ioError; } ;
struct TYPE_5__ {int op; int nByte; char* zBuf; scalar_t__ pNext; int * pFileData; int iOffset; } ;
typedef TYPE_1__ AsyncWrite ;
typedef int AsyncFileData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (char*,char const*,int) ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(
  AsyncFileData *VAR_4,
  int VAR_5,
  sqlite3_int64 VAR_6,
  int VAR_7,
  const char *VAR_8
){
  AsyncWrite *VAR_9;
  if( VAR_5!=VAR_0 && VAR_3.ioError ){
    return VAR_3.ioError;
  }
  VAR_9 = FUNC_2(sizeof(AsyncWrite) + (VAR_8?VAR_7:0));
  if( !VAR_9 ){






    return VAR_1;
  }
  VAR_9->op = VAR_5;
  VAR_9->iOffset = VAR_6;
  VAR_9->nByte = VAR_7;
  VAR_9->pFileData = VAR_4;
  VAR_9->pNext = 0;
  if( VAR_8 ){
    VAR_9->zBuf = (char *)&VAR_9[1];
    FUNC_1(VAR_9->zBuf, VAR_8, VAR_7);
  }else{
    VAR_9->zBuf = 0;
  }
  FUNC_0(VAR_9);
  return VAR_2;
}
