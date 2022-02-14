
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPTSTR ;
typedef int INT ;
typedef int DWORD ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__*,int ,int) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 () ;
 scalar_t__ VAR_2 ;

INT FUNC_7 (LPTSTR VAR_3)
{
    DWORD VAR_4;
    DWORD VAR_5=1000;

    if (FUNC_3 (VAR_3, FUNC_2("/?"), 2) == 0)
    {
        FUNC_0(VAR_1,VAR_0);
        return 0;
    }

    VAR_2 = 0;

    if (*VAR_3==0)
    {
        FUNC_6 ();
        return 1;
    }

    if (FUNC_4(VAR_3,FUNC_2("/m"),2) == 0)
    {
        VAR_5 = 1;
        VAR_3 += 2;
    }

    VAR_4 = FUNC_5(VAR_3);
    FUNC_1(VAR_4 * VAR_5);

    return 0;
}
