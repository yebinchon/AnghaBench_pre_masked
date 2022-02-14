
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int VAR_1 ;
 int FUNC_4 (char const*,int) ;

char FUNC_5(const char *VAR_2, const char *VAR_3)
{

    int VAR_4, VAR_5;

    while (1) {
 if (VAR_3)
     FUNC_3("%s ", VAR_3);
 FUNC_1(VAR_1);
 while (VAR_4 = FUNC_2(), VAR_4 == ' ' || VAR_4 == '\t') ;
 if (VAR_4 == VAR_0)
     FUNC_0(1);
 if (!FUNC_4(VAR_2, VAR_5 = VAR_4))
     VAR_5 = 0;
 while (VAR_4 = FUNC_2(), VAR_4 != '\n' && VAR_4 != VAR_0) ;
 if (VAR_4 == VAR_0)
     FUNC_0(1);
 if (VAR_5)
     return VAR_5;
 FUNC_3("Invalid input.\n");
    }



}
