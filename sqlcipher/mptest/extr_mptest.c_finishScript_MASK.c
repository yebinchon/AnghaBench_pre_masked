
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(int VAR_1, int VAR_2, int VAR_3){
  FUNC_0("UPDATE task"
         "   SET endtime=strftime('%%Y-%%m-%%d %%H:%%M:%%f','now')"
         " WHERE id=%d;", VAR_2);
  if( VAR_3 ){
    FUNC_0("DELETE FROM client WHERE id=%d", VAR_1);
  }
  return VAR_0;
}
