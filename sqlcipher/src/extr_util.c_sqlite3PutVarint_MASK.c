
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (unsigned char*,int) ;

int FUNC_1(unsigned char *VAR_0, u64 VAR_1){
  if( VAR_1<=0x7f ){
    VAR_0[0] = VAR_1&0x7f;
    return 1;
  }
  if( VAR_1<=0x3fff ){
    VAR_0[0] = ((VAR_1>>7)&0x7f)|0x80;
    VAR_0[1] = VAR_1&0x7f;
    return 2;
  }
  return FUNC_0(VAR_0,VAR_1);
}
