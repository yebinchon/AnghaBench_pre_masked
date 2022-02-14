
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_uint64 ;



int FUNC_0(sqlite3_uint64 VAR_0){
  int VAR_1 = 0;
  do{
    VAR_1++;
    VAR_0 >>= 7;
  }while( VAR_0!=0 );
  return VAR_1;
}
