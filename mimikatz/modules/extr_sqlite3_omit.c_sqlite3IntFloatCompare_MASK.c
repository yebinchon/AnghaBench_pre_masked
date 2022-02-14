
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ i64 ;
typedef double LONGDOUBLE_TYPE ;



__attribute__((used)) static int FUNC_0(i64 VAR_0, double VAR_1){
  if( sizeof(LONGDOUBLE_TYPE)>8 ){
    LONGDOUBLE_TYPE VAR_2 = (LONGDOUBLE_TYPE)VAR_0;
    if( VAR_2<VAR_1 ) return -1;
    if( VAR_2>VAR_1 ) return +1;
    return 0;
  }else{
    i64 VAR_3;
    double VAR_4;
    if( VAR_1<-9223372036854775808.0 ) return +1;
    if( VAR_1>=9223372036854775808.0 ) return -1;
    VAR_3 = (i64)VAR_1;
    if( VAR_0<VAR_3 ) return -1;
    if( VAR_0>VAR_3 ) return +1;
    VAR_4 = (double)VAR_0;
    if( VAR_4<VAR_1 ) return -1;
    if( VAR_4>VAR_1 ) return +1;
    return 0;
  }
}
