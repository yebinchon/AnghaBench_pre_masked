
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_2(char **VAR_0, bool *VAR_1)
{
 char *VAR_2;
 char *VAR_3 = *VAR_0;
 char *VAR_4;
 int VAR_5;





 VAR_4 = VAR_3;
 while (*VAR_4 != '\0' && *VAR_4 != ',')
  ++VAR_4;
 *VAR_1 = (*VAR_4 == ',');

 VAR_5 = VAR_4 - VAR_3;
 VAR_2 = (char *) FUNC_0(sizeof(char) * (VAR_5 + 1));
 if (VAR_2)
 {
  FUNC_1(VAR_2, VAR_3, VAR_5);
  VAR_2[VAR_5] = '\0';
 }
 *VAR_0 = VAR_4 + 1;

 return VAR_2;
}
