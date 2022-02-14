
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*) ;

int FUNC_2(char *VAR_0, int VAR_1, FILE *VAR_2)
{
 char *VAR_3 = VAR_0, *const VAR_4 = VAR_0 + VAR_1;

 while (VAR_4 - VAR_3 > 1 && FUNC_0(VAR_3, VAR_4 - VAR_3, VAR_2)) {
  if (*VAR_3 == '\n')
   return VAR_3 - VAR_0;
  VAR_3 += FUNC_1(VAR_3);
 }

 return -1;
}
