
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {char* array; } ;



__attribute__((used)) static void FUNC_0(struct dstr *VAR_0)
{
 char *VAR_1 = VAR_0->array;
 char *VAR_2 = VAR_0->array;

 for (; *VAR_1; VAR_1++, VAR_2++) {
  char VAR_3 = *VAR_1;
  if (VAR_3 == '\\') {
   char VAR_4 = VAR_1[1];
   if (VAR_4 == '\\') {
    VAR_1++;
   } else if (VAR_4 == 'r') {
    VAR_3 = '\r';
    VAR_1++;
   } else if (VAR_4 == 'n') {
    VAR_3 = '\n';
    VAR_1++;
   }
  }

  if (VAR_1 != VAR_2)
   *VAR_2 = VAR_3;
 }

 if (VAR_1 != VAR_2)
  *VAR_2 = '\0';
}
