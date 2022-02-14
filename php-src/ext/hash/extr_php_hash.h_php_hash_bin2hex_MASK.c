
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(char *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 static const char VAR_3[17] = "0123456789abcdef";
 size_t VAR_4;

 for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_0[VAR_4 * 2] = VAR_3[VAR_1[VAR_4] >> 4];
  VAR_0[(VAR_4 * 2) + 1] = VAR_3[VAR_1[VAR_4] & 0x0F];
 }
}
