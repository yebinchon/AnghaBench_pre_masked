
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* putcf ) (void*,char) ;



__attribute__((used)) static void FUNC_0(void *VAR_0, putcf VAR_1, int VAR_2, char VAR_3, char *VAR_4) {
  char VAR_5 = VAR_3 ? '0' : ' ';
  char VAR_6;
  char *VAR_7 = VAR_4;
  while (*VAR_7++ && VAR_2 > 0)
    VAR_2--;
  while (VAR_2-- > 0)
    VAR_1(VAR_0, VAR_5);
  while ((VAR_6 = *VAR_4++))
    VAR_1(VAR_0, VAR_6);
}
