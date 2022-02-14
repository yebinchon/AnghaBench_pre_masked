
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (char*,char const*,char const*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(const char *VAR_1){
  sqlite3_stmt *VAR_2 = FUNC_0(
      "SELECT A.sql=B.sql FROM main.sqlite_master A, aux.sqlite_master B"
      " WHERE A.name=%Q AND B.name=%Q", VAR_1, VAR_1
  );
  if( VAR_0==FUNC_5(VAR_2) ){
    if( FUNC_3(VAR_2,0)==0 ){
      FUNC_1("schema changes for table %s", FUNC_2(VAR_1));
    }
  }else{
    FUNC_1("table %s missing from one or both databases", FUNC_2(VAR_1));
  }
  FUNC_4(VAR_2);
}
