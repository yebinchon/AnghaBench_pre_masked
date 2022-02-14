
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_2__ {int iStart; int iTotal; scalar_t__ pStmt; int bSqlOnly; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(void){
  sqlite3_int64 VAR_1 = FUNC_1() - VAR_0.iStart;
  if( !VAR_0.bSqlOnly ){
    VAR_0.iTotal += VAR_1;
    FUNC_0("%4d.%03ds\n", (int)(VAR_1/1000), (int)(VAR_1%1000));
  }
  if( VAR_0.pStmt ){
    FUNC_2(VAR_0.pStmt);
    VAR_0.pStmt = 0;
  }
}
