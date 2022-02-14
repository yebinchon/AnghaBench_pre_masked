
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LogEst ;



LogEst FUNC_0(LogEst VAR_0, LogEst VAR_1){
  static const unsigned char VAR_2[] = {
     10, 10,
      9, 9,
      8, 8,
      7, 7, 7,
      6, 6, 6,
      5, 5, 5,
      4, 4, 4, 4,
      3, 3, 3, 3, 3, 3,
      2, 2, 2, 2, 2, 2, 2,
  };
  if( VAR_0>=VAR_1 ){
    if( VAR_0>VAR_1+49 ) return VAR_0;
    if( VAR_0>VAR_1+31 ) return VAR_0+1;
    return VAR_0+VAR_2[VAR_0-VAR_1];
  }else{
    if( VAR_1>VAR_0+49 ) return VAR_1;
    if( VAR_1>VAR_0+31 ) return VAR_1+1;
    return VAR_1+VAR_2[VAR_1-VAR_0];
  }
}
