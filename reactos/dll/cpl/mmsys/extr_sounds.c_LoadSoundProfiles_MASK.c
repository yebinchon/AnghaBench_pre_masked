
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGLOBAL_DATA ;
typedef int HWND ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (char*) ;

BOOL
FUNC_5(PGLOBAL_DATA VAR_4, HWND VAR_5)
{
    HKEY VAR_6;
    DWORD VAR_7;

    if (FUNC_3(VAR_2,
                     FUNC_4("AppEvents\\Schemes"),
                     0,
                     VAR_3,
                     &VAR_6) != VAR_0)
    {
        return VAR_1;
    }

    VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6);


    if (VAR_7)
    {

        FUNC_1(VAR_4, VAR_5, VAR_6);
    }

    FUNC_2(VAR_6);
    return VAR_1;
}
