
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_3__ {struct TYPE_3__* zLogName; struct TYPE_3__* zTableName; struct TYPE_3__* zThis; struct TYPE_3__* aCol; struct TYPE_3__* aIndex; } ;
typedef TYPE_1__ echo_vtab ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab *VAR_0){
  echo_vtab *VAR_1 = (echo_vtab*)VAR_0;
  FUNC_0(VAR_1->aIndex);
  FUNC_0(VAR_1->aCol);
  FUNC_0(VAR_1->zThis);
  FUNC_0(VAR_1->zTableName);
  FUNC_0(VAR_1->zLogName);
  FUNC_0(VAR_1);
  return 0;
}
