
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (unsigned char const) ;

int FUNC_1(const unsigned char *VAR_0, int VAR_1, char *VAR_2, int *VAR_3) {
  unsigned char VAR_4, VAR_5, VAR_6, VAR_7;
  int VAR_8 = VAR_1;
  char *VAR_9 = VAR_2;
  while (VAR_1 >= 4 && (VAR_4 = FUNC_0(VAR_0[0])) != 255 &&
         (VAR_5 = FUNC_0(VAR_0[1])) != 255 && (VAR_6 = FUNC_0(VAR_0[2])) != 255 &&
         (VAR_7 = FUNC_0(VAR_0[3])) != 255) {
    VAR_0 += 4;
    VAR_1 -= 4;
    if (VAR_4 == 200 || VAR_5 == 200) break;
    *VAR_2++ = VAR_4 << 2 | VAR_5 >> 4;
    if (VAR_6 == 200) break;
    *VAR_2++ = VAR_5 << 4 | VAR_6 >> 2;
    if (VAR_7 == 200) break;
    *VAR_2++ = VAR_6 << 6 | VAR_7;
  }
  *VAR_2 = 0;
  if (VAR_3 != ((void*)0)) *VAR_3 = (VAR_2 - VAR_9);
  return VAR_8 - VAR_1;
}
