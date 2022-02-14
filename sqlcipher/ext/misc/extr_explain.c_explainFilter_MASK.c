
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_2__ {int rc; char* zSql; scalar_t__ pExplain; int db; } ;
typedef TYPE_1__ explain_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,int,scalar_t__*,int ) ;
 int FUNC_4 (scalar_t__) ;
 char* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(
  sqlite3_vtab_cursor *VAR_5,
  int VAR_6, const char *VAR_7,
  int VAR_8, sqlite3_value **VAR_9
){
  explain_cursor *VAR_10 = (explain_cursor *)VAR_5;
  char *VAR_11 = 0;
  int VAR_12;
  FUNC_0(VAR_10->pExplain);
  VAR_10->pExplain = 0;
  if( FUNC_6(VAR_9[0])!=VAR_4 ){
    VAR_10->rc = VAR_0;
    return VAR_2;
  }
  FUNC_1(VAR_10->zSql);
  VAR_10->zSql = FUNC_2("%s", FUNC_5(VAR_9[0]));
  if( VAR_10->zSql ){
    VAR_11 = FUNC_2("EXPLAIN %s", VAR_10->zSql);
  }
  if( VAR_11==0 ){
    VAR_12 = VAR_1;
  }else{
    VAR_12 = FUNC_3(VAR_10->db, VAR_11, -1, &VAR_10->pExplain, 0);
    FUNC_1(VAR_11);
  }
  if( VAR_12 ){
    FUNC_0(VAR_10->pExplain);
    VAR_10->pExplain = 0;
    FUNC_1(VAR_10->zSql);
    VAR_10->zSql = 0;
  }else{
    VAR_10->rc = FUNC_4(VAR_10->pExplain);
    VAR_12 = (VAR_10->rc==VAR_0 || VAR_10->rc==VAR_3) ? VAR_2 : VAR_10->rc;
  }
  return VAR_12;
}
