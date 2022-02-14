
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int VAR_0 ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*,int,char*,char*,char const*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*) ;

void
FUNC_5(char *VAR_1,
      const char *VAR_2, const char *VAR_3)
{
 if (VAR_1 != VAR_2)
  FUNC_3(VAR_1, VAR_2, VAR_0);







 while (VAR_3[0] == '.' && FUNC_0(VAR_3[1]))
  VAR_3 += 2;

 if (*VAR_3)
 {

  FUNC_2(VAR_1 + FUNC_4(VAR_1), VAR_0 - FUNC_4(VAR_1),
     "%s%s",
     (*(FUNC_1(VAR_2)) != '\0') ? "/" : "",
     VAR_3);
 }
}
