
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int errCode; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_8__ {char* zErrMsg; int nRow; int nColumn; int nData; int nAlloc; int rc; char** azResult; } ;
typedef TYPE_2__ TabResult ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char const*,int ,TYPE_2__*,char**) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char**) ;
 int VAR_5 ;
 char** FUNC_6 (int) ;
 char* FUNC_7 (char*,char*) ;
 char** FUNC_8 (char**,int) ;

int FUNC_9(
  sqlite3 *VAR_6,
  const char *VAR_7,
  char ***VAR_8,
  int *VAR_9,
  int *VAR_10,
  char **VAR_11
){
  int VAR_12;
  TabResult VAR_13;




  *VAR_8 = 0;
  if( VAR_10 ) *VAR_10 = 0;
  if( VAR_9 ) *VAR_9 = 0;
  if( VAR_11 ) *VAR_11 = 0;
  VAR_13.zErrMsg = 0;
  VAR_13.nRow = 0;
  VAR_13.nColumn = 0;
  VAR_13.nData = 1;
  VAR_13.nAlloc = 20;
  VAR_13.rc = VAR_4;
  VAR_13.azResult = FUNC_6(sizeof(char*)*VAR_13.nAlloc );
  if( VAR_13.azResult==0 ){
     VAR_6->errCode = VAR_2;
     return VAR_3;
  }
  VAR_13.azResult[0] = 0;
  VAR_12 = FUNC_3(VAR_6, VAR_7, VAR_5, &VAR_13, VAR_11);
  FUNC_1( sizeof(VAR_13.azResult[0])>= sizeof(VAR_13.nData) );
  VAR_13.azResult[0] = FUNC_0(VAR_13.nData);
  if( (VAR_12&0xff)==VAR_0 ){
    FUNC_5(&VAR_13.azResult[1]);
    if( VAR_13.zErrMsg ){
      if( VAR_11 ){
        FUNC_4(*VAR_11);
        *VAR_11 = FUNC_7("%s",VAR_13.zErrMsg);
      }
      FUNC_4(VAR_13.zErrMsg);
    }
    VAR_6->errCode = VAR_13.rc;
    return VAR_13.rc;
  }
  FUNC_4(VAR_13.zErrMsg);
  if( VAR_12!=VAR_4 ){
    FUNC_5(&VAR_13.azResult[1]);
    return VAR_12;
  }
  if( VAR_13.nAlloc>VAR_13.nData ){
    char **VAR_14;
    VAR_14 = FUNC_8( VAR_13.azResult, sizeof(char*)*VAR_13.nData );
    if( VAR_14==0 ){
      FUNC_5(&VAR_13.azResult[1]);
      VAR_6->errCode = VAR_2;
      return VAR_3;
    }
    VAR_13.azResult = VAR_14;
  }
  *VAR_8 = &VAR_13.azResult[1];
  if( VAR_10 ) *VAR_10 = VAR_13.nColumn;
  if( VAR_9 ) *VAR_9 = VAR_13.nRow;
  return VAR_12;
}
