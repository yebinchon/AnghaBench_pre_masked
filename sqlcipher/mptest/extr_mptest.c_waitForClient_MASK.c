
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_2__ {scalar_t__ iTimeout; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,...) ;
 TYPE_1__ VAR_4 ;
 int * FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(int VAR_5, int VAR_6, char *VAR_7){
  sqlite3_stmt *VAR_8;
  int VAR_9;
  if( VAR_5>0 ){
    VAR_8 = FUNC_1(
               "SELECT 1 FROM task"
               " WHERE client=%d"
               "   AND client IN (SELECT id FROM client)"
               "  AND endtime IS NULL",
               VAR_5);
  }else{
    VAR_8 = FUNC_1(
               "SELECT 1 FROM task"
               " WHERE client IN (SELECT id FROM client)"
               "   AND endtime IS NULL");
  }
  VAR_4.iTimeout = 0;
  while( ((VAR_9 = FUNC_5(VAR_8))==VAR_1 || VAR_9==VAR_3)
    && VAR_6>0
  ){
    FUNC_3(VAR_8);
    FUNC_4(50);
    VAR_6 -= 50;
  }
  FUNC_2(VAR_8);
  VAR_4.iTimeout = VAR_0;
  if( VAR_9!=VAR_2 ){
    if( VAR_7==0 ) VAR_7 = "";
    if( VAR_5>0 ){
      FUNC_0("%stimeout waiting for client %d", VAR_7, VAR_5);
    }else{
      FUNC_0("%stimeout waiting for all clients", VAR_7);
    }
  }
}
