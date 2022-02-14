
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 char* FUNC_1 (char const*,int) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_0, int VAR_1)
{
 const char *VAR_2 = ((void*)0);
 const char *VAR_3 = VAR_0;
 int VAR_4 = 0;


 if (VAR_1 <= 0)
  return ((void*)0);

 while (VAR_4 < VAR_1)
 {
  VAR_2 = VAR_3;
  VAR_3 = FUNC_3(VAR_2 + 1, '\n');
  VAR_4++;
  if (VAR_3 == ((void*)0))
   break;
 }

 if (VAR_4 != VAR_1)
  return ((void*)0);

 while (*VAR_2 && FUNC_0((unsigned char) *VAR_2))
  VAR_2++;

 if (VAR_3 == ((void*)0))
  return FUNC_2(VAR_2);






 if (VAR_3 < VAR_2)
  return ((void*)0);

 return FUNC_1(VAR_2, VAR_3 - VAR_2);
}
