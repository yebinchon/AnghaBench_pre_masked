
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int PGLOBAL_DATA ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int *,scalar_t__*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *) ;

BOOL
FUNC_6(PGLOBAL_DATA VAR_5)
{
    HKEY VAR_6;
    DWORD VAR_7;
    TCHAR VAR_8[VAR_4];
    DWORD VAR_9;
    DWORD VAR_10;
    DWORD VAR_11;
    if (FUNC_3(VAR_2,
                     FUNC_4("AppEvents\\EventLabels"),
                     0,
                     VAR_3,
                     &VAR_6) != VAR_0)
    {
        return VAR_1;
    }

    VAR_7 = 0;
    VAR_11 = 0;
    do
    {
        VAR_9 = FUNC_5(VAR_8);
        VAR_10 = FUNC_2(VAR_6,
                                VAR_7,
                                VAR_8,
                                &VAR_9,
                                ((void*)0),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0));

        if (VAR_10 == VAR_0)
        {
            if (FUNC_0(VAR_5, VAR_6, VAR_8))
            {
                VAR_11++;
            }
        }
        VAR_7++;

    } while (VAR_10 == VAR_0);

    FUNC_1(VAR_6);
    return (VAR_11 != 0);
}
