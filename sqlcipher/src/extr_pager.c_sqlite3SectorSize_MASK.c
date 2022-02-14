
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_file ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

int FUNC_2(sqlite3_file *VAR_1){
  int VAR_2 = FUNC_1(VAR_1);
  if( VAR_2<32 ){
    VAR_2 = 512;
  }else if( VAR_2>VAR_0 ){
    FUNC_0( VAR_0>=512 );
    VAR_2 = VAR_0;
  }
  return VAR_2;
}
