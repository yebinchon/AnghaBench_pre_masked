
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ i64 ;
typedef double LONGDOUBLE_TYPE ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(i64 VAR_1, double VAR_2){
  if( sizeof(LONGDOUBLE_TYPE)>8 ){
    LONGDOUBLE_TYPE VAR_3 = (LONGDOUBLE_TYPE)VAR_1;
    if( VAR_3<VAR_2 ) return -1;
    if( VAR_3>VAR_2 ) return +1;
    return 0;
  }else{
    i64 VAR_4;
    double VAR_5;
    if( VAR_2<-9223372036854775808.0 ) return +1;
    if( VAR_2>9223372036854775807.0 ) return -1;
    VAR_4 = (i64)VAR_2;
    if( VAR_1<VAR_4 ) return -1;
    if( VAR_1>VAR_4 ){
      if( VAR_4==VAR_0 && VAR_2>0.0 ) return -1;
      return +1;
    }
    VAR_5 = (double)VAR_1;
    if( VAR_5<VAR_2 ) return -1;
    if( VAR_5>VAR_2 ) return +1;
    return 0;
  }
}
