
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_3__ {scalar_t__ inTransaction; } ;
typedef TYPE_1__ echo_vtab ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(sqlite3_vtab *VAR_1){
  echo_vtab *VAR_2 = (echo_vtab*)VAR_1;
  int VAR_3;



  FUNC_0( VAR_2->inTransaction );

  if( FUNC_2(VAR_2, "xCommit") ){
    return VAR_0;
  }

  FUNC_3();
  VAR_3 = FUNC_1(VAR_1, "xCommit");
  FUNC_4();
  VAR_2->inTransaction = 0;
  return VAR_3;
}
