
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned int VAR_0, char **VAR_1){
  static const char VAR_2[] =
    "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ_abcdefghijklmnopqrstuvwxyz~";

  int VAR_3, VAR_4;
  char VAR_5[20];
  if( VAR_0==0 ){
    *(*VAR_1)++ = '0';
    return;
  }
  for(VAR_3=0; VAR_0>0; VAR_3++, VAR_0>>=6){
    VAR_5[VAR_3] = VAR_2[VAR_0&0x3f];
  }
  for(VAR_4=VAR_3-1; VAR_4>=0; VAR_4--){
    *(*VAR_1)++ = VAR_5[VAR_4];
  }
}
