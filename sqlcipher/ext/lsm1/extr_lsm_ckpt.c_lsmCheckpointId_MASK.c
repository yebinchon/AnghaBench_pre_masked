
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int i64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

i64 FUNC_1(u32 *VAR_2, int VAR_3){
  i64 VAR_4;
  if( VAR_3 ){
    u8 *VAR_5 = (u8 *)VAR_2;
    VAR_4 = (((i64)FUNC_0(&VAR_5[VAR_1*4])) << 32);
    VAR_4 += ((i64)FUNC_0(&VAR_5[VAR_0*4]));
  }else{
    VAR_4 = ((i64)VAR_2[VAR_1] << 32) + (i64)VAR_2[VAR_0];
  }
  return VAR_4;
}
