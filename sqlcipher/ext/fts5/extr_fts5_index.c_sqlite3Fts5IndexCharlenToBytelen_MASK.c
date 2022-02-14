
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(
  const char *VAR_0,
  int VAR_1,
  int VAR_2
){
  int VAR_3 = 0;
  int VAR_4;
  for(VAR_4=0; VAR_4<VAR_2; VAR_4++){
    if( VAR_3>=VAR_1 ) return 0;
    if( (unsigned char)VAR_0[VAR_3++]>=0xc0 ){
      while( (VAR_0[VAR_3] & 0xc0)==0x80 ){
        VAR_3++;
        if( VAR_3>=VAR_1 ) break;
      }
    }
  }
  return VAR_3;
}
