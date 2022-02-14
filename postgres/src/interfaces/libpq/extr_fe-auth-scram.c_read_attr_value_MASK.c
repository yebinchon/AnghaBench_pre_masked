
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PQExpBuffer ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char) ;

__attribute__((used)) static char *
FUNC_2(char **VAR_0, char VAR_1, PQExpBuffer VAR_2)
{
 char *VAR_3 = *VAR_0;
 char *VAR_4;

 if (*VAR_3 != VAR_1)
 {
  FUNC_1(VAR_2,
        FUNC_0("malformed SCRAM message (attribute \"%c\" expected)\n"),
        VAR_1);
  return ((void*)0);
 }
 VAR_3++;

 if (*VAR_3 != '=')
 {
  FUNC_1(VAR_2,
        FUNC_0("malformed SCRAM message (expected character \"=\" for attribute \"%c\")\n"),
        VAR_1);
  return ((void*)0);
 }
 VAR_3++;

 VAR_4 = VAR_3;
 while (*VAR_4 && *VAR_4 != ',')
  VAR_4++;

 if (*VAR_4)
 {
  *VAR_4 = '\0';
  *VAR_0 = VAR_4 + 1;
 }
 else
  *VAR_0 = VAR_4;

 return VAR_3;
}
