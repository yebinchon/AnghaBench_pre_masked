
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_uint64 ;
typedef int LogEst ;



LogEst FUNC_0(sqlite3_uint64 VAR_0){
  static LogEst VAR_1[] = { 0, 2, 3, 5, 6, 7, 8, 9 };
  LogEst VAR_2 = 40;
  if( VAR_0<8 ){
    if( VAR_0<2 ) return 0;
    while( VAR_0<8 ){ VAR_2 -= 10; VAR_0 <<= 1; }
  }else{
    while( VAR_0>255 ){ VAR_2 += 40; VAR_0 >>= 4; }
    while( VAR_0>15 ){ VAR_2 += 10; VAR_0 >>= 1; }
  }
  return VAR_1[VAR_0&7] + VAR_2 - 10;
}
