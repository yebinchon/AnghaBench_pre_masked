
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (char**,char**) ;
 scalar_t__ FUNC_1 (char**,char**) ;
 scalar_t__ FUNC_2 (char**,char**) ;
 scalar_t__ FUNC_3 (char**,char**) ;

int FUNC_4(char *VAR_4, char *VAR_5, size_t VAR_6, unsigned int VAR_7)
{
 char *VAR_8 = VAR_5;

 while (*VAR_4 && --VAR_6) {
  if (VAR_4[0] == '\\' && VAR_4[1] != '\0' && VAR_6 > 1) {
   VAR_4++;
   VAR_6--;

   if (VAR_7 & VAR_2 &&
     FUNC_2(&VAR_4, &VAR_8))
    continue;

   if (VAR_7 & VAR_1 &&
     FUNC_1(&VAR_4, &VAR_8))
    continue;

   if (VAR_7 & VAR_0 &&
     FUNC_0(&VAR_4, &VAR_8))
    continue;

   if (VAR_7 & VAR_3 &&
     FUNC_3(&VAR_4, &VAR_8))
    continue;

   *VAR_8++ = '\\';
  }
  *VAR_8++ = *VAR_4++;
 }
 *VAR_8 = '\0';

 return VAR_8 - VAR_5;
}
