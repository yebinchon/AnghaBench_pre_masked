
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_2__ {int pDb; } ;
typedef TYPE_1__ lsm1_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab *VAR_3){
  lsm1_vtab *VAR_4 = (lsm1_vtab*)VAR_3;
  int VAR_5 = FUNC_0(VAR_4->pDb, 0);
  return VAR_5==VAR_0 ? VAR_2 : VAR_1;
}
