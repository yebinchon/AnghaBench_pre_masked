
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zErrMsg; } ;
typedef TYPE_1__ sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_6__ {int zErrMsg; int * db; } ;
typedef TYPE_2__ Vdbe ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(Vdbe *VAR_0, sqlite3_vtab *VAR_1){
  sqlite3 *VAR_2 = VAR_0->db;
  FUNC_0(VAR_2, VAR_0->zErrMsg);
  VAR_0->zErrMsg = FUNC_1(VAR_2, VAR_1->zErrMsg);
  FUNC_2(VAR_1->zErrMsg);
  VAR_1->zErrMsg = 0;
}
