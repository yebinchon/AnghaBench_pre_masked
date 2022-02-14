
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int i64 ;



__attribute__((used)) static u64 FUNC_0(
  const char *VAR_0,
  int VAR_1,
  int VAR_2,
  int VAR_3,
  i64 VAR_4,
  int VAR_5,
  int VAR_6
){
  int VAR_7;
  u64 VAR_8 = (u64)VAR_4;

  VAR_8 += (VAR_8<<3) + VAR_2;
  VAR_8 += (VAR_8<<3) + VAR_3;
  VAR_8 += (VAR_8<<3) + VAR_5;
  VAR_8 += (VAR_8<<3) + VAR_6;
  for(VAR_7=0; VAR_7<VAR_1; VAR_7++) VAR_8 += (VAR_8<<3) + VAR_0[VAR_7];

  return VAR_8;
}
