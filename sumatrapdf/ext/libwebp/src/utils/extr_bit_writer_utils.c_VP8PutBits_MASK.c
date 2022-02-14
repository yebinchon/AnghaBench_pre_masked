
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VP8BitWriter ;


 int FUNC_0 (int * const,int) ;
 int FUNC_1 (int) ;

void FUNC_2(VP8BitWriter* const VAR_0, uint32_t VAR_1, int VAR_2) {
  uint32_t VAR_3;
  FUNC_1(VAR_2 > 0 && VAR_2 < 32);
  for (VAR_3 = 1u << (VAR_2 - 1); VAR_3; VAR_3 >>= 1) {
    FUNC_0(VAR_0, VAR_1 & VAR_3);
  }
}
