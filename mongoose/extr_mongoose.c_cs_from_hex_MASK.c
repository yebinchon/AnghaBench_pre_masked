
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

void FUNC_1(char *VAR_0, const char *VAR_1, size_t VAR_2) {
  size_t VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 2) {
    *VAR_0++ = (FUNC_0(VAR_1[VAR_3]) << 4) + FUNC_0(VAR_1[VAR_3 + 1]);
  }
  *VAR_0 = '\0';
}
