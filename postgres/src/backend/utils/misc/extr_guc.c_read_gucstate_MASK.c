
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static char *
FUNC_1(char **VAR_1, char *VAR_2)
{
 char *VAR_3 = *VAR_1;
 char *VAR_4;

 if (*VAR_1 >= VAR_2)
  FUNC_0(VAR_0, "incomplete GUC state");


 for (VAR_4 = *VAR_1; VAR_4 < VAR_2 && *VAR_4 != '\0'; VAR_4++)
  ;

 if (VAR_4 >= VAR_2)
  FUNC_0(VAR_0, "could not find null terminator in GUC state");


 *VAR_1 = VAR_4 + 1;

 return VAR_3;
}
