
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (int ,char const*) ;
 int FUNC_4 (char*,char*,int,int) ;

__attribute__((used)) static char *
FUNC_5(const char *VAR_0)
{
 char VAR_1[100];

 if (VAR_0 == ((void*)0) || VAR_0[0] == '\0')
  FUNC_4("Password: ", VAR_1, sizeof(VAR_1), 0);
 else
 {
  char *VAR_2;

  VAR_2 = FUNC_3(FUNC_0("Password for user %s: "), VAR_0);
  FUNC_4(VAR_2, VAR_1, sizeof(VAR_1), 0);
  FUNC_1(VAR_2);
 }
 return FUNC_2(VAR_1);
}
