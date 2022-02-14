
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_value ;
struct TYPE_3__ {int db; } ;
typedef TYPE_1__ Mem ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(sqlite3_value *VAR_0){
  if( !VAR_0 ) return;
  FUNC_1((Mem *)VAR_0);
  FUNC_0(((Mem*)VAR_0)->db, VAR_0);
}
