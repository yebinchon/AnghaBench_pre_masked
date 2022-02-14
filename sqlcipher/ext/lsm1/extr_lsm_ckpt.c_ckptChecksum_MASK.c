
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static void FUNC_0(u32 *VAR_0, u32 VAR_1, u32 *VAR_2, u32 *VAR_3){
  u32 VAR_4;
  u32 VAR_5 = 1;
  u32 VAR_6 = 2;

  if( VAR_1 % 2 ){
    VAR_5 += VAR_0[VAR_1-3] & 0x0000FFFF;
    VAR_6 += VAR_0[VAR_1-3] & 0xFFFF0000;
  }

  for(VAR_4=0; (VAR_4+3)<VAR_1; VAR_4+=2){
    VAR_5 += VAR_6 + VAR_0[VAR_4];
    VAR_6 += VAR_5 + VAR_0[VAR_4+1];
  }

  *VAR_2 = VAR_5;
  *VAR_3 = VAR_6;
}
