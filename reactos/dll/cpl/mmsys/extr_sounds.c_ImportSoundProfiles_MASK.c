
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int PGLOBAL_DATA ;
typedef int HWND ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int *,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

BOOL
FUNC_6(PGLOBAL_DATA VAR_4, HWND VAR_5, HKEY VAR_6)
{
    DWORD VAR_7;
    DWORD VAR_8;
    DWORD VAR_9;
    TCHAR VAR_10[VAR_3];
    HKEY VAR_11;

    if (FUNC_3(VAR_6,
                     FUNC_4("Apps"),
                     0,
                     VAR_2,
                     &VAR_11) != VAR_0)
    {
        return VAR_1;
    }

    VAR_9 = 0;
    VAR_7 = 0;
    do
    {
        VAR_8 = FUNC_2(VAR_11,
                              VAR_7,
                              VAR_10,
                              FUNC_5(VAR_10));

        if (VAR_8 == VAR_0)
        {
            if (FUNC_0(VAR_4, VAR_5, VAR_11, VAR_10))
            {
                VAR_9++;
            }
        }
        VAR_7++;
    } while (VAR_8 == VAR_0);

    FUNC_1(VAR_11);

    return (VAR_9 != 0);
}
