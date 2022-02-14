
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int szName; } ;
typedef int TCHAR ;
typedef TYPE_1__* PSOUND_SCHEME_CONTEXT ;
typedef scalar_t__ LRESULT ;
typedef int HWND ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;

PSOUND_SCHEME_CONTEXT FUNC_4(HWND VAR_2, TCHAR * VAR_3)
{
    LRESULT VAR_4, VAR_5, VAR_6;
    PSOUND_SCHEME_CONTEXT VAR_7;
    HWND VAR_8;

    VAR_8 = FUNC_2(VAR_2, VAR_1);
    VAR_4 = FUNC_0(VAR_8);
    if (VAR_4 == VAR_0)
    {
        return ((void*)0);
    }

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    {
        VAR_6 = FUNC_1(VAR_8, VAR_5);
        if (VAR_6 == VAR_0)
        {
            continue;
        }

        VAR_7 = (PSOUND_SCHEME_CONTEXT)VAR_6;
        if (!FUNC_3(VAR_7->szName, VAR_3))
        {
            return VAR_7;
        }
    }
    return ((void*)0);
}
