
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VP8BitReader ;


 int FUNC_0 (int * const,int,char const*) ;

uint32_t FUNC_1(VP8BitReader* const VAR_0, int VAR_1, const char VAR_2[]) {
  uint32_t VAR_3 = 0;
  while (VAR_1-- > 0) {
    VAR_3 |= FUNC_0(VAR_0, 0x80, VAR_2) << VAR_1;
  }
  return VAR_3;
}
