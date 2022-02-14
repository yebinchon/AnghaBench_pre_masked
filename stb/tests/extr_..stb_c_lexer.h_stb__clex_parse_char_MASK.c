
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(char *VAR_0, char **VAR_1)
{
   if (*VAR_0 == '\\') {
      *VAR_1 = VAR_0+2;
      switch(VAR_0[1]) {
         case '\\': return '\\';
         case '\'': return '\'';
         case '"': return '"';
         case 't': return '\t';
         case 'f': return '\f';
         case 'n': return '\n';
         case 'r': return '\r';
         case '0': return '\0';
         case 'x': case 'X': return -1;
         case 'u': return -1;
      }
   }
   *VAR_1 = VAR_0+1;
   return (unsigned char) *VAR_0;
}
