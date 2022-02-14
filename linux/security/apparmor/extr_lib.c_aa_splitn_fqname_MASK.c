
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,int) ;
 char* FUNC_1 (char const*,int,char) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

const char *FUNC_3(const char *VAR_0, size_t VAR_1, const char **VAR_2,
        size_t *VAR_3)
{
 const char *VAR_4 = VAR_0 + VAR_1;
 const char *VAR_5 = FUNC_0(VAR_0, VAR_1);

 *VAR_2 = ((void*)0);
 *VAR_3 = 0;

 if (!VAR_5)
  return ((void*)0);

 if (VAR_5[0] == ':') {
  char *VAR_6 = FUNC_1(&VAR_5[1], VAR_4 - &VAR_5[1], ':');
  *VAR_2 = FUNC_0(&VAR_5[1], VAR_4 - &VAR_5[1]);
  if (!*VAR_2)
   return ((void*)0);
  if (VAR_6) {
   *VAR_3 = VAR_6 - *VAR_2;
   if (*VAR_3 == 0)
    *VAR_2 = ((void*)0);
   VAR_6++;
   if (VAR_4 - VAR_6 > 1 && FUNC_2(VAR_6, "//", 2) == 0)
    VAR_6 += 2;
   VAR_5 = FUNC_0(VAR_6, VAR_4 - VAR_6);
  } else {

   VAR_5 = ((void*)0);
   *VAR_3 = VAR_4 - *VAR_2;
  }
 }
 if (VAR_5 && *VAR_5 == 0)
  VAR_5 = ((void*)0);

 return VAR_5;
}
