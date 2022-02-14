
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WND_DATA ;
typedef int * PWND_DATA ;
typedef int LPCWSTR ;
typedef int HWND ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int * FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int VAR_1 ;

PWND_DATA FUNC_5(HWND VAR_2)
{
    PWND_DATA VAR_3;

    VAR_3 = (PWND_DATA)FUNC_1(VAR_2, (LPCWSTR)FUNC_3(VAR_1));
    if(VAR_3 == ((void*)0))
    {
        VAR_3 = FUNC_2(FUNC_0(),
                            VAR_0,
                            sizeof(WND_DATA));
        if(VAR_3 == ((void*)0))
        {
            return ((void*)0);
        }

        FUNC_4( VAR_2, (LPCWSTR)FUNC_3(VAR_1), VAR_3);
    }

    return VAR_3;
}
