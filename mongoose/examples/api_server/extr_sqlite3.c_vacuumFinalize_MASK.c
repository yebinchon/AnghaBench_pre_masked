
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef int Vdbe ;


 int FUNC_0 (char**,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(sqlite3 *VAR_0, sqlite3_stmt *VAR_1, char **VAR_2){
  int VAR_3;
  VAR_3 = FUNC_1((Vdbe*)VAR_1);
  if( VAR_3 ){
    FUNC_0(VAR_2, VAR_0, FUNC_2(VAR_0));
  }
  return VAR_3;
}
