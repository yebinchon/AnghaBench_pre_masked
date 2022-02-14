
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static int FUNC_1(char *VAR_1, char **VAR_2)
{
 int VAR_3 = 0;

 VAR_2[VAR_3++] = VAR_1;

 while (*VAR_1) {
  if (FUNC_0(*VAR_1)) {
   *VAR_1++ = '\0';

   if (!*VAR_1)
    return VAR_3;

   VAR_2[VAR_3++] = VAR_1;
   if (VAR_3 == VAR_0)
    return -1;
  }

  ++VAR_1;
 }

 return VAR_3;
}
