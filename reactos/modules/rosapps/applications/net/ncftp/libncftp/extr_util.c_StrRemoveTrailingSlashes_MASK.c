
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;

void
FUNC_1(char *VAR_0)
{
 char *VAR_1;

 VAR_1 = FUNC_0(VAR_0, '/');
 if ((VAR_1 == ((void*)0)) || (VAR_1[1] != '\0'))
  return;


 while ((VAR_1 > VAR_0) && (*VAR_1 == '/'))
  *VAR_1-- = '\0';
}
