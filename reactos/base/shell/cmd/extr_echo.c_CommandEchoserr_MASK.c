
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPTSTR ;
typedef int INT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;

INT FUNC_6 (LPTSTR VAR_1)
{
    FUNC_2 ("CommandEchoserr: '%s'\n", FUNC_5(VAR_1));

    if (!FUNC_4 (VAR_1, FUNC_3("/?"), 2))
    {
        FUNC_1(VAR_0);
        return 0;
    }

    FUNC_0 (FUNC_3("%s"), VAR_1);
    return 0;
}
