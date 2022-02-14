
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nRow; int nData; int nAlloc; char** azResult; int nColumn; int rc; void* zErrMsg; } ;
typedef TYPE_1__ TabResult ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void*) ;
 char* FUNC_3 (int) ;
 void* FUNC_4 (char*,...) ;
 char** FUNC_5 (char**,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_2, int VAR_3, char **VAR_4, char **VAR_5){
  TabResult *VAR_6 = (TabResult*)VAR_2;
  int VAR_7;
  int VAR_8;
  char *VAR_9;




  if( VAR_6->nRow==0 && VAR_4!=0 ){
    VAR_7 = VAR_3*2;
  }else{
    VAR_7 = VAR_3;
  }
  if( VAR_6->nData + VAR_7 > VAR_6->nAlloc ){
    char **VAR_10;
    VAR_6->nAlloc = VAR_6->nAlloc*2 + VAR_7;
    VAR_10 = FUNC_5( VAR_6->azResult, sizeof(char*)*VAR_6->nAlloc );
    if( VAR_10==0 ) goto malloc_failed;
    VAR_6->azResult = VAR_10;
  }




  if( VAR_6->nRow==0 ){
    VAR_6->nColumn = VAR_3;
    for(VAR_8=0; VAR_8<VAR_3; VAR_8++){
      VAR_9 = FUNC_4("%s", VAR_5[VAR_8]);
      if( VAR_9==0 ) goto malloc_failed;
      VAR_6->azResult[VAR_6->nData++] = VAR_9;
    }
  }else if( (int)VAR_6->nColumn!=VAR_3 ){
    FUNC_2(VAR_6->zErrMsg);
    VAR_6->zErrMsg = FUNC_4(
       "sqlite3_get_table() called with two or more incompatible queries"
    );
    VAR_6->rc = VAR_0;
    return 1;
  }



  if( VAR_4!=0 ){
    for(VAR_8=0; VAR_8<VAR_3; VAR_8++){
      if( VAR_4[VAR_8]==0 ){
        VAR_9 = 0;
      }else{
        int VAR_11 = FUNC_1(VAR_4[VAR_8])+1;
        VAR_9 = FUNC_3( VAR_11 );
        if( VAR_9==0 ) goto malloc_failed;
        FUNC_0(VAR_9, VAR_4[VAR_8], VAR_11);
      }
      VAR_6->azResult[VAR_6->nData++] = VAR_9;
    }
    VAR_6->nRow++;
  }
  return 0;

malloc_failed:
  VAR_6->rc = VAR_1;
  return 1;
}
