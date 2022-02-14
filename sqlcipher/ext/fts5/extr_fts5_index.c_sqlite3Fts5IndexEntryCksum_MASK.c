
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int i64 ;


 scalar_t__ VAR_0 ;

u64 FUNC_0(
  i64 VAR_1,
  int VAR_2,
  int VAR_3,
  int VAR_4,
  const char *VAR_5,
  int VAR_6
){
  int VAR_7;
  u64 VAR_8 = VAR_1;
  VAR_8 += (VAR_8<<3) + VAR_2;
  VAR_8 += (VAR_8<<3) + VAR_3;
  if( VAR_4>=0 ) VAR_8 += (VAR_8<<3) + (VAR_0 + VAR_4);
  for(VAR_7=0; VAR_7<VAR_6; VAR_7++) VAR_8 += (VAR_8<<3) + VAR_5[VAR_7];
  return VAR_8;
}
