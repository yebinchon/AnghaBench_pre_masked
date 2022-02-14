
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int i64 ;


 int FUNC_0 (int const*,int,int) ;

int FUNC_1(
  const u8 *VAR_0, int VAR_1,
  int *VAR_2,
  i64 *VAR_3
){
  int VAR_4 = *VAR_2;
  if( VAR_4>=VAR_1 ){

    *VAR_3 = -1;
    return 1;
  }else{
    i64 VAR_5 = *VAR_3;
    int VAR_6;
    FUNC_0(VAR_0, VAR_4, VAR_6);
    if( VAR_6==1 ){
      FUNC_0(VAR_0, VAR_4, VAR_6);
      VAR_5 = ((i64)VAR_6) << 32;
      FUNC_0(VAR_0, VAR_4, VAR_6);
    }
    *VAR_3 = VAR_5 + ((VAR_6-2) & 0x7FFFFFFF);
    *VAR_2 = VAR_4;
    return 0;
  }
}
