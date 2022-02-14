
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 char** FUNC_1 (int,int) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,int) ;

char **FUNC_6(const char *VAR_0, int *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_0);
 char **VAR_3 = FUNC_1(VAR_2 + 1, sizeof(*VAR_3));
 char **VAR_4;

 if (VAR_3 == ((void*)0))
  goto out;

 if (VAR_1)
  *VAR_1 = VAR_2;

 VAR_4 = VAR_3;

 while (*VAR_0) {
  VAR_0 = FUNC_4(VAR_0);

  if (*VAR_0) {
   const char *VAR_5 = VAR_0;
   char *VAR_6;

   VAR_0 = FUNC_3(VAR_0);

   VAR_6 = FUNC_5(VAR_5, VAR_0-VAR_5);
   if (VAR_6 == ((void*)0))
    goto fail;
   *VAR_4++ = VAR_6;
  }
 }
 *VAR_4 = ((void*)0);

out:
 return VAR_3;

fail:
 FUNC_0(VAR_3);
 return ((void*)0);
}
