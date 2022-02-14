
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_2__ {int * db; } ;
typedef TYPE_1__ Vdbe ;



sqlite3 *FUNC_0(sqlite3_stmt *VAR_0){
  return VAR_0 ? ((Vdbe*)VAR_0)->db : 0;
}
