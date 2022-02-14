
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD32 ;



__attribute__((used)) static void FUNC_0 (WORD32 *VAR_0, const char *VAR_1) {
  int VAR_2;
  for (VAR_2=0; VAR_2<16; VAR_2++) {
    int VAR_3=VAR_2*4;
    VAR_0[VAR_2] = (((WORD32)(unsigned char)VAR_1[VAR_3+3] << 8 |
           (WORD32)(unsigned char)VAR_1[VAR_3+2]) << 8 |
           (WORD32)(unsigned char)VAR_1[VAR_3+1]) << 8 |
           (WORD32)(unsigned char)VAR_1[VAR_3];
  }

}
