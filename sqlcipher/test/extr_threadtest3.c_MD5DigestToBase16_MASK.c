
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned char *VAR_0, char *VAR_1){
  static char const VAR_2[] = "0123456789abcdef";
  int VAR_3, VAR_4;

  for(VAR_4=VAR_3=0; VAR_3<16; VAR_3++){
    int VAR_5 = VAR_0[VAR_3];
    VAR_1[VAR_4++] = VAR_2[(VAR_5>>4)&0xf];
    VAR_1[VAR_4++] = VAR_2[VAR_5 & 0xf];
  }
  VAR_1[VAR_4] = 0;
}
