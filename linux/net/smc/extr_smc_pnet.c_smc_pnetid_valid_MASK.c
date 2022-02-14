
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 char* FUNC_3 (char const*) ;
 size_t FUNC_4 (char*) ;
 char FUNC_5 (char) ;

__attribute__((used)) static bool FUNC_6(const char *VAR_1, char *VAR_2)
{
 char *VAR_3 = FUNC_3(VAR_1);
 size_t VAR_4 = FUNC_4(VAR_3);
 char *VAR_5 = VAR_3 + VAR_4;

 if (!VAR_4)
  return 0;
 while (--VAR_5 >= VAR_3 && FUNC_2(*VAR_5))
  ;
 if (VAR_5 - VAR_3 >= VAR_0)
  return 0;
 while (VAR_3 <= VAR_5) {
  if (!FUNC_0(*VAR_3))
   return 0;
  *VAR_2++ = FUNC_1(*VAR_3) ? FUNC_5(*VAR_3) : *VAR_3;
  VAR_3++;
 }
 *VAR_2 = '\0';
 return 1;
}
