
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned char *VAR_0, char *VAR_1, int VAR_2){
  static const char VAR_3[] = "0123456789abcdef";
  int VAR_4;

  for(VAR_4=0; VAR_4<VAR_2; VAR_4++){
    *VAR_1++ = VAR_3[(*VAR_0>>4)&0xf];
    *VAR_1++ = VAR_3[*VAR_0++ & 0xf];
  }
  *VAR_1 = '\0';
}
