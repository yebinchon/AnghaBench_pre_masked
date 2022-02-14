
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_0)
{
 char *VAR_1, *VAR_2, *VAR_3, *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_0);
 VAR_4 = FUNC_1(VAR_4);
 VAR_5 = VAR_4[0] == '/';
 VAR_1 = VAR_2 = VAR_3 = VAR_4 + VAR_5;
 while (*VAR_1)
 {
  if(VAR_1[0] == '/')
   VAR_1++;
  else if (VAR_1[0] == '.' && FUNC_0(VAR_1[1]))
   VAR_1 += 1;
  else if (VAR_1[0] == '.' && VAR_1[1] == '.' && FUNC_0(VAR_1[2]))
  {
   VAR_1 += 2;
   if (VAR_2 > VAR_3)
   {
    while(--VAR_2 > VAR_3 && *VAR_2 != '/')
     ;
   }
   else if (!VAR_5)
   {
    if (VAR_2 != VAR_4)
     *VAR_2++ = '/';
    *VAR_2++ = '.';
    *VAR_2++ = '.';
    VAR_3 = VAR_2;
   }
  }
  else
  {
   if (VAR_2 != VAR_4+VAR_5)
    *VAR_2++ = '/';
   while ((*VAR_2 = *VAR_1) != '/' && *VAR_2 != 0)
    VAR_1++, VAR_2++;
  }
 }

 if (VAR_2 == VAR_4)
  *VAR_2++ = '.';
 *VAR_2 = '\0';

 return VAR_0;
}
