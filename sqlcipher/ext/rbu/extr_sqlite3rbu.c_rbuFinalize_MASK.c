
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rc; int zErrmsg; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(sqlite3rbu *VAR_1, sqlite3_stmt *VAR_2){
  sqlite3 *VAR_3 = FUNC_0(VAR_2);
  int VAR_4 = FUNC_2(VAR_2);
  if( VAR_1->rc==VAR_0 && VAR_4!=VAR_0 ){
    VAR_1->rc = VAR_4;
    VAR_1->zErrmsg = FUNC_3("%s", FUNC_1(VAR_3));
  }
}
