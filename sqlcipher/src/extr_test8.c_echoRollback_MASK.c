
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_2__ {scalar_t__ inTransaction; } ;
typedef TYPE_1__ echo_vtab ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_0){
  int VAR_1;
  echo_vtab *VAR_2 = (echo_vtab*)VAR_0;



  FUNC_0( VAR_2->inTransaction );

  VAR_1 = FUNC_1(VAR_0, "xRollback");
  VAR_2->inTransaction = 0;
  return VAR_1;
}
