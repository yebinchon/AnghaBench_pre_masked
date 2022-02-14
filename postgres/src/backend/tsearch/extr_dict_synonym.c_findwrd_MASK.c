
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_1, char **VAR_2, uint16 *VAR_3)
{
 char *VAR_4;
 char *VAR_5;


 while (*VAR_1 && FUNC_2(VAR_1))
  VAR_1 += FUNC_0(VAR_1);


 if (*VAR_1 == '\0')
 {
  *VAR_2 = ((void*)0);
  return ((void*)0);
 }

 VAR_5 = VAR_4 = VAR_1;


 while (*VAR_1 && !FUNC_2(VAR_1))
 {
  VAR_5 = VAR_1;
  VAR_1 += FUNC_0(VAR_1);
 }

 if (VAR_1 - VAR_5 == 1 && FUNC_1(VAR_5, '*') && VAR_3)
 {
  *VAR_3 = VAR_0;
  *VAR_2 = VAR_5;
 }
 else
 {
  if (VAR_3)
   *VAR_3 = 0;
  *VAR_2 = VAR_1;
 }

 return VAR_4;
}
