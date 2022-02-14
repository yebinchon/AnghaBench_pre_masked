
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hWnd; } ;
typedef int MCI_GENERIC_PARMS ;
typedef TYPE_1__ MCI_DGV_WINDOW_PARMSW ;
typedef int MCI_DGV_RECT_PARMS ;
typedef scalar_t__ MCIERROR ;
typedef int HWND ;
typedef int DWORD_PTR ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int ,int ,int,int ) ;
 int VAR_12 ;

void FUNC_2(HWND VAR_13)
{
    MCIERROR VAR_14;
    MCI_GENERIC_PARMS VAR_15;
    MCI_DGV_RECT_PARMS VAR_16;
    MCI_DGV_WINDOW_PARMSW VAR_17;

    FUNC_0(VAR_11, VAR_0, VAR_9 | VAR_10);

    VAR_14 = FUNC_1(VAR_12, VAR_3, VAR_6, (DWORD_PTR)&VAR_15);
    if (VAR_14 == 0)
    {
        FUNC_0(VAR_11, VAR_1, VAR_9 | VAR_10);
    }

    VAR_17.hWnd = VAR_13;

    VAR_14 = FUNC_1(VAR_12, VAR_8, VAR_5 | VAR_6, (DWORD_PTR)&VAR_17);
    if (!VAR_14)
    {
        VAR_14 = FUNC_1(VAR_12, VAR_7, VAR_4 | VAR_6, (DWORD_PTR)&VAR_16);
        if (!VAR_14)
        {
            FUNC_0(VAR_11, VAR_2, VAR_9 | VAR_10);
        }
    }
}
