
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(char *VAR_0, int (*VAR_1)(char *, size_t))
{
 char *VAR_2 = 0, *VAR_3 = VAR_0;

 while (*VAR_3) {
  switch (*VAR_3) {
   case ' ':
   case ',':
    if (VAR_2) {
     *VAR_3 = '\0';
     VAR_1(VAR_2, VAR_3 - VAR_2);
     VAR_2 = 0;
    }
    break;
   default:
    if (!VAR_2) {
     VAR_2 = VAR_3;
    }
    break;
  }
  VAR_3++;
 }

 if (VAR_2) {
  VAR_1(VAR_2, VAR_3 - VAR_2);
 }
}
