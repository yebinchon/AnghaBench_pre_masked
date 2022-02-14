
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ szDefault; } ;
typedef int TCHAR ;
typedef TYPE_1__* PGLOBAL_DATA ;
typedef int LPBYTE ;
typedef int HWND ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int ,int ,int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int *,scalar_t__*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int *,int *,int ,scalar_t__*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__) ;

DWORD
FUNC_8(PGLOBAL_DATA VAR_4, HWND VAR_5, HKEY VAR_6)
{
    HKEY VAR_7;
    DWORD VAR_8, VAR_9, VAR_10, VAR_11;
    DWORD VAR_12;
    TCHAR VAR_13[VAR_3];

    VAR_12 = sizeof(VAR_4->szDefault);
    if (FUNC_4(VAR_6,
                        ((void*)0),
                        ((void*)0),
                        ((void*)0),
                        (LPBYTE)VAR_4->szDefault,
                        &VAR_12) != VAR_0)
    {
        return VAR_1;
    }

    if (FUNC_3(VAR_6,
                     FUNC_5("Names"),
                     0,
                     VAR_2,
                     &VAR_7) != VAR_0)
    {
        return VAR_1;
    }

    VAR_11 = 0;
    VAR_9 = 0;
    do
    {
        VAR_8 = FUNC_6(VAR_13);
        VAR_10 = FUNC_2(VAR_7,
                                VAR_9,
                                VAR_13,
                                &VAR_8,
                                ((void*)0),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0));

        if (VAR_10 == VAR_0)
        {
            if (FUNC_0(VAR_5, VAR_7, VAR_13, (!FUNC_7(VAR_13, VAR_4->szDefault))))
            {
                VAR_11++;
            }
        }

        VAR_9++;
    } while (VAR_10 == VAR_0);

    FUNC_1(VAR_7);
    return VAR_11;
}
