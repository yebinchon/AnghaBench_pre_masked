
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(
  i64 VAR_4,
  int *VAR_5,
  int *VAR_6,
  int *VAR_7,
  int *VAR_8
){
  *VAR_8 = (int)(VAR_4 & (((i64)1 << VAR_3) - 1));
  VAR_4 >>= VAR_3;

  *VAR_7 = (int)(VAR_4 & (((i64)1 << VAR_1) - 1));
  VAR_4 >>= VAR_1;

  *VAR_6 = (int)(VAR_4 & 0x0001);
  VAR_4 >>= VAR_0;

  *VAR_5 = (int)(VAR_4 & (((i64)1 << VAR_2) - 1));
}
