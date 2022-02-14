
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(unsigned char *VAR_0, char *VAR_1) {
 unsigned char *VAR_2;
 char *VAR_3 = VAR_1;
 unsigned char VAR_4;
 for(VAR_2 = VAR_0; VAR_2 < VAR_0 + 4; VAR_2++) {
  VAR_4 = *VAR_2;
  if(*VAR_2 >= 100) {
   if(*VAR_2 >= 200)
    *(VAR_3++) = '2';
   else
    *(VAR_3++) = '1';
   VAR_4 %= 100;
  }
  if(*VAR_2 >= 10) {
   *(VAR_3++) = (VAR_4 / 10) + '0';
   VAR_4 %= 10;
  }
  *(VAR_3++) = VAR_4 + '0';
  *(VAR_3++) = '.';
 }
 VAR_3[-1] = 0;
}
