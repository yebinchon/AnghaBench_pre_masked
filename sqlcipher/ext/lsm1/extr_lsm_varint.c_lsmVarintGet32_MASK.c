
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;


 int FUNC_0 (int*,scalar_t__*) ;

int FUNC_1(u8 *VAR_0, int *VAR_1){
  u64 VAR_2;
  int VAR_3;

  if( VAR_0[0]<=240 ){
    *VAR_1 = VAR_0[0];
    return 1;
  }
  if( VAR_0[0]<=248 ){
    *VAR_1 = (VAR_0[0]-241)*256 + VAR_0[1] + 240;
    return 2;
  }
  if( VAR_0[0]==249 ){
    *VAR_1 = 2288 + 256*VAR_0[1] + VAR_0[2];
    return 3;
  }
  if( VAR_0[0]==250 ){
    *VAR_1 = (VAR_0[1]<<16) + (VAR_0[2]<<8) + VAR_0[3];
    return 4;
  }

  VAR_3 = FUNC_0(VAR_0, &VAR_2);
  *VAR_1 = (int)VAR_2;
  return VAR_3;
}
