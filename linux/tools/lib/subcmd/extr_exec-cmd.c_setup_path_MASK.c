
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*) ;
 char* VAR_0 ;
 int FUNC_1 (char**,char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 () ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;

void FUNC_6(void)
{
 const char *VAR_1 = FUNC_4("PATH");
 char *VAR_2 = ((void*)0);
 char *VAR_3 = FUNC_3();

 FUNC_0(&VAR_2, VAR_3);
 FUNC_0(&VAR_2, VAR_0);
 FUNC_2(VAR_3);

 if (VAR_1)
  FUNC_1(&VAR_2, VAR_1);
 else
  FUNC_1(&VAR_2, "/usr/local/bin:/usr/bin:/bin");

 FUNC_5("PATH", VAR_2, 1);

 FUNC_2(VAR_2);
}
