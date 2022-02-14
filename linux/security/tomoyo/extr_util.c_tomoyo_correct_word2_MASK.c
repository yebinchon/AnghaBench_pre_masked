
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (unsigned char,unsigned char,unsigned char) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0, size_t VAR_1)
{
 const char *const VAR_2 = VAR_0;
 bool VAR_3 = 0;
 unsigned char VAR_4;
 unsigned char VAR_5;
 unsigned char VAR_6;

 if (!VAR_1)
  goto out;
 while (VAR_1--) {
  VAR_4 = *VAR_0++;
  if (VAR_4 == '\\') {
   if (!VAR_1--)
    goto out;
   VAR_4 = *VAR_0++;
   switch (VAR_4) {
   case '\\':
    continue;
   case '$':
   case '+':
   case '?':
   case '*':
   case '@':
   case 'x':
   case 'X':
   case 'a':
   case 'A':
   case '-':
    continue;
   case '{':
    if (VAR_0 - 3 < VAR_2 || *(VAR_0 - 3) != '/')
     break;
    VAR_3 = 1;
    continue;
   case '}':
    if (*VAR_0 != '/')
     break;
    if (!VAR_3)
     break;
    VAR_3 = 0;
    continue;
   case '0':
   case '1':
   case '2':
   case '3':
    if (!VAR_1-- || !VAR_1--)
     break;
    VAR_5 = *VAR_0++;
    VAR_6 = *VAR_0++;
    if (VAR_5 < '0' || VAR_5 > '7' || VAR_6 < '0' || VAR_6 > '7')
     break;
    VAR_4 = FUNC_0(VAR_4, VAR_5, VAR_6);
    if (VAR_4 <= ' ' || VAR_4 >= 127)
     continue;
   }
   goto out;
  } else if (VAR_3 && VAR_4 == '/') {
   goto out;
  } else if (VAR_4 <= ' ' || VAR_4 >= 127) {
   goto out;
  }
 }
 if (VAR_3)
  goto out;
 return 1;
 out:
 return 0;
}
