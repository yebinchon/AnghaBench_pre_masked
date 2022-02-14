
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * db; int flags; } ;
typedef TYPE_1__ sqlite3_value ;
typedef int sqlite3 ;
typedef TYPE_1__ Mem ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;

sqlite3_value *FUNC_1(sqlite3 *VAR_1){
  Mem *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));
  if( VAR_2 ){
    VAR_2->flags = VAR_0;
    VAR_2->db = VAR_1;
  }
  return VAR_2;
}
