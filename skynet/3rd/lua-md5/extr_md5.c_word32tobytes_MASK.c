
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD32 ;



__attribute__((used)) static void FUNC_0 (const WORD32 *VAR_0, char *VAR_1) {
  int VAR_2 = 0;
  while (VAR_2<4*4) {
    WORD32 VAR_3 = *VAR_0++;
    VAR_1[VAR_2++] = (char)(VAR_3 & 0xff); VAR_3 >>= 8;
    VAR_1[VAR_2++] = (char)(VAR_3 & 0xff); VAR_3 >>= 8;
    VAR_1[VAR_2++] = (char)(VAR_3 & 0xff); VAR_3 >>= 8;
    VAR_1[VAR_2++] = (char)(VAR_3 & 0xff);
  }
}
