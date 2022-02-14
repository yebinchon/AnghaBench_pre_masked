
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,int *,int) ;

__attribute__((used)) static inline void FUNC_2(char **VAR_0,
        const char **VAR_1)
{
 char *VAR_2 = *VAR_0;
 const char *VAR_3 = *VAR_1;

 switch (*(VAR_3++)) {
 case '\'':
  *(VAR_2++) = '\'';
  break;
 case '\"':
  *(VAR_2++) = '\"';
  break;
 case '\?':
  *(VAR_2++) = '\?';
  break;
 case '\\':
  *(VAR_2++) = '\\';
  break;
 case '0':
  *(VAR_2++) = '\0';
  break;
 case 'a':
  *(VAR_2++) = '\a';
  break;
 case 'b':
  *(VAR_2++) = '\b';
  break;
 case 'f':
  *(VAR_2++) = '\f';
  break;
 case 'n':
  *(VAR_2++) = '\n';
  break;
 case 'r':
  *(VAR_2++) = '\r';
  break;
 case 't':
  *(VAR_2++) = '\t';
  break;
 case 'v':
  *(VAR_2++) = '\v';
  break;


 case 'X':
 case 'x':
  *(VAR_2++) = (char)FUNC_1(VAR_3, ((void*)0), 16);
  VAR_3 += 2;
  break;


 default:
  if (FUNC_0(*VAR_3)) {
   *(VAR_2++) = (char)FUNC_1(VAR_3, ((void*)0), 8);
   VAR_3 += 3;
  }



 }

 *VAR_0 = VAR_2;
 *VAR_1 = VAR_3;
}
