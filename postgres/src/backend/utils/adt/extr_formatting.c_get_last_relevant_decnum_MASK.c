
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_1)
{
 char *VAR_2,
      *VAR_3 = FUNC_1(VAR_1, '.');





 if (!VAR_3)
  return ((void*)0);

 VAR_2 = VAR_3;

 while (*(++VAR_3))
 {
  if (*VAR_3 != '0')
   VAR_2 = VAR_3;
 }

 return VAR_2;
}
