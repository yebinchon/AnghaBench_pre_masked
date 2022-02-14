
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned char VAR_0, int VAR_1){
  int VAR_2 = 1;
  if( VAR_0>0x7f ){
    if( (VAR_0&0xe0)==0xc0 ){
      VAR_2 = 2;
    }else if( (VAR_0&0xf0)==0xe0 ){
      VAR_2 = 3;
    }else{
      VAR_2 = 4;
    }
  }
  if( VAR_2>VAR_1 ) VAR_2 = VAR_1;
  return VAR_2;
}
