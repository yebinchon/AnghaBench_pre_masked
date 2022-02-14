
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int sqlite3_stmt ;
struct TYPE_2__ {scalar_t__* aCounter; } ;
typedef TYPE_1__ Vdbe ;


 int VAR_0 ;

int FUNC_0(sqlite3_stmt *VAR_1, int VAR_2, int VAR_3){
  Vdbe *VAR_4 = (Vdbe*)VAR_1;
  u32 VAR_5;






  VAR_5 = VAR_4->aCounter[VAR_2];
  if( VAR_3 ) VAR_4->aCounter[VAR_2] = 0;
  return (int)VAR_5;
}
