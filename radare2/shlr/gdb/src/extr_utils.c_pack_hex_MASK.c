
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;


 char FUNC_0 (char const) ;

int FUNC_1(const char *VAR_0, ut64 VAR_1, char *VAR_2) {
 int VAR_3 = 0;
 int VAR_4 = 0;
 while (VAR_3 < (VAR_1 * 2)) {
  int VAR_5 = (VAR_0[VAR_4] & 0xf0) >> 4;
  VAR_2[VAR_3++] = FUNC_0 (VAR_5);
  VAR_2[VAR_3++] = FUNC_0 (VAR_0[VAR_4++] & 0x0f);
 }
 VAR_2[VAR_3] = '\0';
 return (VAR_1 / 2);
}
