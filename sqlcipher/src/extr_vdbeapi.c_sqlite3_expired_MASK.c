
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_2__ {scalar_t__ expired; } ;
typedef TYPE_1__ Vdbe ;



int FUNC_0(sqlite3_stmt *VAR_0){
  Vdbe *VAR_1 = (Vdbe*)VAR_0;
  return VAR_1==0 || VAR_1->expired;
}
