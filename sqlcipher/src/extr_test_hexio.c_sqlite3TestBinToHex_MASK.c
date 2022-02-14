
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

void FUNC_1(unsigned char *VAR_0, int VAR_1){
  const unsigned char VAR_2[] = "0123456789ABCDEF";
  int VAR_3, VAR_4;
  unsigned char VAR_5;
  VAR_3 = VAR_1*2;
  VAR_0[VAR_3--] = 0;
  for(VAR_4=VAR_1-1; VAR_4>=0; VAR_4--){
    VAR_5 = VAR_0[VAR_4];
    VAR_0[VAR_3--] = VAR_2[VAR_5&0xf];
    VAR_0[VAR_3--] = VAR_2[VAR_5>>4];
  }
  FUNC_0( VAR_3==-1 );
}
