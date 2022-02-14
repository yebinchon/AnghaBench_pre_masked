
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_3__ {int pDb; } ;
typedef TYPE_1__ lsm1_vtab ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_1){
  lsm1_vtab *VAR_2 = (lsm1_vtab*)VAR_1;
  FUNC_0(VAR_2->pDb);
  FUNC_1(VAR_2);
  return VAR_0;
}
