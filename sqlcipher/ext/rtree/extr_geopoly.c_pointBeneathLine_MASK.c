
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(
  double VAR_0, double VAR_1,
  double VAR_2, double VAR_3,
  double VAR_4, double VAR_5
){
  double VAR_6;
  if( VAR_0==VAR_2 && VAR_1==VAR_3 ) return 2;
  if( VAR_2<VAR_4 ){
    if( VAR_0<=VAR_2 || VAR_0>VAR_4 ) return 0;
  }else if( VAR_2>VAR_4 ){
    if( VAR_0<=VAR_4 || VAR_0>VAR_2 ) return 0;
  }else{

    if( VAR_0!=VAR_2 ) return 0;
    if( VAR_1<VAR_3 && VAR_1<VAR_5 ) return 0;
    if( VAR_1>VAR_3 && VAR_1>VAR_5 ) return 0;
    return 2;
  }
  VAR_6 = VAR_3 + (VAR_5-VAR_3)*(VAR_0-VAR_2)/(VAR_4-VAR_2);
  if( VAR_1==VAR_6 ) return 2;
  if( VAR_1<VAR_6 ) return 1;
  return 0;
}
