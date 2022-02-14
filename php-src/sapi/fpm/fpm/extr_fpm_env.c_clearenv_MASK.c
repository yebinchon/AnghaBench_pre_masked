
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

void FUNC_4()
{
 char **VAR_1;
 char *VAR_2;



 while (*(VAR_1 = VAR_0)) {
  char *VAR_3 = FUNC_1(*VAR_1, '=');

  VAR_2 = FUNC_2(*VAR_1);

  if (VAR_3) VAR_2[VAR_3 - *VAR_1] = '\0';

  FUNC_3(VAR_2);
  FUNC_0(VAR_2);
 }

}
