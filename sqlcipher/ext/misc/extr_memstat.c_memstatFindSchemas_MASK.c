
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_4__ {int nDb; char** azDb; int db; } ;
typedef TYPE_1__ memstat_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,char*,int,int **,int ) ;
 char** FUNC_5 (char**,int) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(memstat_cursor *VAR_3){
  sqlite3_stmt *VAR_4 = 0;
  int VAR_5;
  if( VAR_3->nDb ) return VAR_1;
  VAR_5 = FUNC_4(VAR_3->db, "PRAGMA database_list", -1, &VAR_4, 0);
  if( VAR_5 ){
    FUNC_2(VAR_4);
    return VAR_5;
  }
  while( FUNC_6(VAR_4)==VAR_2 ){
    char **VAR_6, *VAR_7;
    VAR_6 = FUNC_5(VAR_3->azDb, sizeof(char*)*(VAR_3->nDb+1));
    if( VAR_6==0 ){
      FUNC_0(VAR_3);
      return VAR_0;
    }
    VAR_3->azDb = VAR_6;
    VAR_7 = FUNC_3("%s", FUNC_1(VAR_4, 1));
    if( VAR_7==0 ){
      FUNC_0(VAR_3);
      return VAR_0;
    }
    VAR_3->azDb[VAR_3->nDb] = VAR_7;
    VAR_3->nDb++;
  }
  FUNC_2(VAR_4);
  return VAR_1;
}
