
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (char*,size_t,char*,char const*,...) ;

char *FUNC_3(const char *VAR_0, bool VAR_1, size_t VAR_2, int *VAR_3)
{






 size_t VAR_4 = VAR_2 * 28 + 1;
 size_t VAR_5, VAR_6 = 0;
 char *VAR_7 = FUNC_1(VAR_4);

 if (VAR_7) {
  const char *VAR_8 = "||", *VAR_9 = "==";
  char *VAR_10 = VAR_7;

  if (!VAR_1) {
   VAR_8 = "&&";
   VAR_9 = "!=";
  }

  for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
   if (VAR_6 == VAR_4)
    goto out_err_overflow;

   if (VAR_5 > 0)
    VAR_6 += FUNC_2(VAR_10 + VAR_6, VAR_4 - VAR_6, " %s ", VAR_8);
   VAR_6 += FUNC_2(VAR_10 + VAR_6, VAR_4 - VAR_6,
          "%s %s %d", VAR_0, VAR_9, VAR_3[VAR_5]);
  }
 }

 return VAR_7;

out_err_overflow:
 FUNC_0(VAR_7);
 return ((void*)0);
}
