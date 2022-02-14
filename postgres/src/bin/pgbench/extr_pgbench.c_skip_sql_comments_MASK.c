
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_0)
{
 char *VAR_1 = VAR_0;


 for (;;)
 {
  if (FUNC_0((unsigned char) *VAR_1))
   VAR_1++;
  else if (FUNC_2(VAR_1, "--", 2) == 0)
  {
   VAR_1 = FUNC_1(VAR_1, '\n');
   if (VAR_1 == ((void*)0))
    return ((void*)0);
   VAR_1++;
  }
  else
   break;
 }


 if (*VAR_1 == '\0')
  return ((void*)0);

 return VAR_1;
}
