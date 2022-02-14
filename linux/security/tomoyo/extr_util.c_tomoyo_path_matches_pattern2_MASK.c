
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,char const*,char const*) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2;
 const char *VAR_3;

 while (*VAR_0 && *VAR_1) {
  VAR_2 = FUNC_0(VAR_0, '/');
  if (!VAR_2)
   VAR_2 = VAR_0 + FUNC_1(VAR_0);
  VAR_3 = FUNC_0(VAR_1, '/');
  if (!VAR_3)
   VAR_3 = VAR_1 + FUNC_1(VAR_1);
  if (*VAR_1 == '\\' && *(VAR_1 + 1) == '{')
   goto recursive;
  if (!FUNC_2(VAR_0, VAR_2, VAR_1,
       VAR_3))
   return 0;
  VAR_0 = VAR_2;
  if (*VAR_0)
   VAR_0++;
  VAR_1 = VAR_3;
  if (*VAR_1)
   VAR_1++;
 }

 while (*VAR_1 == '\\' &&
        (*(VAR_1 + 1) == '*' || *(VAR_1 + 1) == '@'))
  VAR_1 += 2;
 return !*VAR_0 && !*VAR_1;
 recursive:






 if (*(VAR_1 - 1) != '/' || VAR_3 <= VAR_1 + 3 || *VAR_3 != '/' ||
     *(VAR_3 - 1) != '}' || *(VAR_3 - 2) != '\\')
  return 0;
 do {

  if (!FUNC_2(VAR_0, VAR_2, VAR_1 + 2,
       VAR_3 - 2))
   break;

  VAR_0 = VAR_2;
  if (!*VAR_0)
   break;
  VAR_0++;

  if (FUNC_3(VAR_0, VAR_3 + 1))
   return 1;
  VAR_2 = FUNC_0(VAR_0, '/');
 } while (VAR_2);
 return 0;
}
