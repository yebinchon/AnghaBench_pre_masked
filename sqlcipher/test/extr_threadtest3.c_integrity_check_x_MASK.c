
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_7__ {int rc; char* zErr; } ;
struct TYPE_6__ {int * pStmt; } ;
typedef TYPE_1__ Statement ;
typedef int Sqlite ;
typedef TYPE_2__ Error ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,int *,char*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 char* FUNC_2 (char*,char const*,...) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static void FUNC_6(
  Error *VAR_2,
  Sqlite *VAR_3
){
  if( VAR_2->rc==VAR_0 ){
    Statement *VAR_4;
    char *VAR_5 = 0;

    VAR_4 = FUNC_0(VAR_2, VAR_3, "PRAGMA integrity_check");
    if( VAR_4 ){
      sqlite3_stmt *VAR_6 = VAR_4->pStmt;
      while( VAR_1==FUNC_4(VAR_6) ){
        const char *VAR_7 = (const char*)FUNC_1(VAR_6, 0);
        if( FUNC_5(VAR_7, "ok") ){
          if( VAR_5==0 ){
            VAR_5 = FUNC_2("%s", VAR_7);
          }else{
            VAR_5 = FUNC_2("%z\n%s", VAR_5, VAR_7);
          }
        }
      }
      FUNC_3(VAR_6);

      if( VAR_5 ){
        VAR_2->zErr = VAR_5;
        VAR_2->rc = 1;
      }
    }
  }
}
