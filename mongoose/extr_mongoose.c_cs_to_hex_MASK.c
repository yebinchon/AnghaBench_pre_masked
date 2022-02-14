
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(char *VAR_0, const unsigned char *VAR_1, size_t VAR_2) {
  static const char *VAR_3 = "0123456789abcdef";

  for (; VAR_2--; VAR_1++) {
    *VAR_0++ = VAR_3[VAR_1[0] >> 4];
    *VAR_0++ = VAR_3[VAR_1[0] & 0x0f];
  }
  *VAR_0 = '\0';
}
