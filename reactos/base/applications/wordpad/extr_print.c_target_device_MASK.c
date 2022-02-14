
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_3__ {int right; int left; } ;
typedef TYPE_1__ RECT ;
typedef scalar_t__ LRESULT ;
typedef int HWND ;
typedef scalar_t__ HDC ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int) ;
 TYPE_1__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 () ;

void FUNC_8(HWND VAR_4, DWORD VAR_5)
{
    HWND VAR_6 = FUNC_3(VAR_4, VAR_1);

    if(VAR_5 == VAR_2)
    {
        int VAR_7 = 0;
        LRESULT VAR_8;
        HDC VAR_9 = FUNC_7();
        RECT VAR_10 = FUNC_6(VAR_9);

        VAR_7 = VAR_10.right - VAR_10.left;
        if(!VAR_9)
        {
            HDC VAR_11 = FUNC_2(VAR_4);
            VAR_9 = FUNC_0(VAR_11);
            FUNC_4(VAR_4, VAR_11);
        }
        VAR_8 = FUNC_5(VAR_6, VAR_0, (WPARAM)VAR_9, VAR_7);
        FUNC_1(VAR_9);
        if (VAR_8)
            return;


    }

    if (VAR_5 != VAR_3) {
        FUNC_5(VAR_6, VAR_0, 0, 0);
    } else {
        FUNC_5(VAR_6, VAR_0, 0, 1);
    }

}
