
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 char FUNC_4 (char) ;

__attribute__((used)) static char *
FUNC_5(char **VAR_2, char *VAR_3)
{
 char *VAR_4 = *VAR_2;
 char *VAR_5;
 char VAR_6 = *VAR_4;

 if (VAR_6 == '\0')
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("malformed SCRAM message"),
     FUNC_2("Attribute expected, but found end of string.")));







 if (!((VAR_6 >= 'A' && VAR_6 <= 'Z') ||
    (VAR_6 >= 'a' && VAR_6 <= 'z')))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("malformed SCRAM message"),
     FUNC_2("Attribute expected, but found invalid character \"%s\".",
         FUNC_4(VAR_6))));
 if (VAR_3)
  *VAR_3 = VAR_6;
 VAR_4++;

 if (*VAR_4 != '=')
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("malformed SCRAM message"),
     FUNC_2("Expected character \"=\" for attribute \"%c\".", VAR_6)));
 VAR_4++;

 VAR_5 = VAR_4;
 while (*VAR_5 && *VAR_5 != ',')
  VAR_5++;

 if (*VAR_5)
 {
  *VAR_5 = '\0';
  *VAR_2 = VAR_5 + 1;
 }
 else
  *VAR_2 = VAR_5;

 return VAR_4;
}
