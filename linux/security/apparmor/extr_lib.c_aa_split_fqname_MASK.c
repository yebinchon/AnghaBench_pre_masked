
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

char *FUNC_4(char *VAR_0, char **VAR_1)
{
 char *VAR_2 = FUNC_2(VAR_0);

 *VAR_1 = ((void*)0);
 if (VAR_2[0] == ':') {
  char *VAR_3 = FUNC_1(&VAR_2[1], ':');
  *VAR_1 = FUNC_0(&VAR_2[1]);
  if (VAR_3) {

   *VAR_3++ = 0;
   if (FUNC_3(VAR_3, "//", 2) == 0)
    VAR_3 += 2;
   VAR_2 = FUNC_0(VAR_3);
  } else

   VAR_2 = ((void*)0);
 }
 if (VAR_2 && *VAR_2 == 0)
  VAR_2 = ((void*)0);

 return VAR_2;
}
