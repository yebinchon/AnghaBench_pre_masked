
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned int *VAR_0, unsigned char VAR_1){
  if( VAR_0[0]<4 ){
    VAR_0[1] = (VAR_0[1]<<8) | VAR_1;
    VAR_0[0]++;
  }else{
    VAR_0[2] = (VAR_0[2]<<8) | VAR_1;
    VAR_0[0]++;
    if( VAR_0[0]==8 ){
      VAR_0[3] += VAR_0[1] + VAR_0[4];
      VAR_0[4] += VAR_0[2] + VAR_0[3];
      VAR_0[0] = VAR_0[1] = VAR_0[2] = 0;
    }
  }
}
