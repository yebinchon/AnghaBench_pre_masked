
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_4 (int ,char*,char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*,char*) ;
 char* VAR_4 ;
 char* VAR_5 ;

void
FUNC_7(const char *VAR_6)
{
 FUNC_0(!VAR_1);

 FUNC_2();


 FUNC_3();
 VAR_3 = &VAR_2;
 FUNC_1(VAR_3);


 if (VAR_4[0] == '\0')
 {
  if (FUNC_5(VAR_6, VAR_4) < 0)
   FUNC_4(VAR_0, "%s: could not locate my own executable path",
     VAR_6);
 }

 if (VAR_5[0] == '\0')
  FUNC_6(VAR_4, VAR_5);
}
