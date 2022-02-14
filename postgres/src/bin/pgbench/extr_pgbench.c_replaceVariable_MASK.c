
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static char *
FUNC_4(char **VAR_0, char *VAR_1, int VAR_2, char *VAR_3)
{
 int VAR_4 = FUNC_3(VAR_3);

 if (VAR_4 > VAR_2)
 {
  size_t VAR_5 = VAR_1 - *VAR_0;

  *VAR_0 = FUNC_2(*VAR_0, FUNC_3(*VAR_0) - VAR_2 + VAR_4 + 1);
  VAR_1 = *VAR_0 + VAR_5;
 }

 if (VAR_4 != VAR_2)
  FUNC_1(VAR_1 + VAR_4, VAR_1 + VAR_2, FUNC_3(VAR_1 + VAR_2) + 1);
 FUNC_0(VAR_1, VAR_3, VAR_4);

 return VAR_1 + VAR_4;
}
