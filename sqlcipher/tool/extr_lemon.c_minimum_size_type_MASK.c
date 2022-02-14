
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(int VAR_0, int VAR_1, int *VAR_2){
  const char *VAR_3 = "int";
  int VAR_4 = 4;
  if( VAR_0>=0 ){
    if( VAR_1<=255 ){
      VAR_3 = "unsigned char";
      VAR_4 = 1;
    }else if( VAR_1<65535 ){
      VAR_3 = "unsigned short int";
      VAR_4 = 2;
    }else{
      VAR_3 = "unsigned int";
      VAR_4 = 4;
    }
  }else if( VAR_0>=-127 && VAR_1<=127 ){
    VAR_3 = "signed char";
    VAR_4 = 1;
  }else if( VAR_0>=-32767 && VAR_1<32767 ){
    VAR_3 = "short";
    VAR_4 = 2;
  }
  if( VAR_2 ) *VAR_2 = VAR_4;
  return VAR_3;
}
