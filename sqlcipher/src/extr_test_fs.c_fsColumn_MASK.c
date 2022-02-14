
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_size; } ;
typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;
struct TYPE_2__ {int nAlloc; char* zBuf; int nBuf; int pStmt; } ;
typedef TYPE_1__ fs_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct stat*) ;
 int FUNC_3 (char const*,int ) ;
 scalar_t__ FUNC_4 (int,char*,int) ;
 char* FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,char*,int,int ) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(sqlite3_vtab_cursor *VAR_6, sqlite3_context *VAR_7, int VAR_8){
  fs_cursor *VAR_9 = (fs_cursor*)VAR_6;

  FUNC_0( VAR_8==0 || VAR_8==1 || VAR_8==2 );
  if( VAR_8==0 ){
    FUNC_9(VAR_7, FUNC_7(VAR_9->pStmt, 0));
  }else{
    const char *VAR_10 = (const char *)FUNC_6(VAR_9->pStmt, 1);
    struct stat VAR_11;
    int VAR_12;

    int VAR_13;
    VAR_12 = FUNC_3(VAR_10, VAR_0);
    if( VAR_12<0 ) return VAR_2;
    FUNC_2(VAR_12, &VAR_11);

    if( VAR_11.st_size>=VAR_9->nAlloc ){
      sqlite3_int64 VAR_14 = VAR_11.st_size*2;
      char *VAR_15;
      if( VAR_14<1024 ) VAR_14 = 1024;

      VAR_15 = FUNC_5(VAR_9->zBuf, VAR_14);
      if( VAR_15==0 ){
        FUNC_1(VAR_12);
        return VAR_3;
      }
      VAR_9->zBuf = VAR_15;
      VAR_9->nAlloc = VAR_14;
    }

    VAR_13 = (int)FUNC_4(VAR_12, VAR_9->zBuf, VAR_11.st_size);
    FUNC_1(VAR_12);
    if( VAR_13!=VAR_11.st_size ) return VAR_1;
    VAR_9->nBuf = VAR_11.st_size;
    VAR_9->zBuf[VAR_9->nBuf] = '\0';

    FUNC_8(VAR_7, VAR_9->zBuf, -1, VAR_5);
  }
  return VAR_4;
}
