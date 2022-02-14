
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPTSTR ;
typedef int INT ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

INT FUNC_6 (LPTSTR VAR_2)
{
    FUNC_1 ("cmd_if: (\'%s\')\n", FUNC_4(VAR_2));

    if (!FUNC_3 (VAR_2, FUNC_2("/?"), 2))
    {
        FUNC_0(VAR_1,VAR_0);
        return 0;
    }

    FUNC_5(VAR_2);
    return 1;
}
