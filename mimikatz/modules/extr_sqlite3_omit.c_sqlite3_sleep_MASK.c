
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_vfs ;


 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int ) ;

int FUNC_2(int VAR_0){
  sqlite3_vfs *VAR_1;
  int VAR_2;
  VAR_1 = FUNC_1(0);
  if( VAR_1==0 ) return 0;




  VAR_2 = (FUNC_0(VAR_1, 1000*VAR_0)/1000);
  return VAR_2;
}
