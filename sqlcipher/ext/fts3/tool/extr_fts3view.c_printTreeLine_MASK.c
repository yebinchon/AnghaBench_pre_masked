
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite3_int64 ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(sqlite3_int64 VAR_0, sqlite3_int64 VAR_1){
  FUNC_0("                 tree   %9lld", VAR_0);
  if( VAR_1>VAR_0 ){
    FUNC_0(" thru %9lld  (%lld blocks)", VAR_1, VAR_1-VAR_0+1);
  }
  FUNC_0("\n");
}
