
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hWndControl; } ;
struct TYPE_5__ {int fsStyle; scalar_t__ dwData; } ;
typedef TYPE_1__ TBBUTTON ;
typedef TYPE_2__* PTBCUSTCTL ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

BOOL
FUNC_2(HWND VAR_4,
                          const TBBUTTON *VAR_5)
{
    if ((VAR_5->fsStyle & VAR_2) &&
        VAR_5->dwData != 0)
    {
        PTBCUSTCTL VAR_6 = (PTBCUSTCTL)VAR_5->dwData;

        FUNC_0(VAR_6->hWndControl);

        FUNC_1(VAR_1,
                 0,
                 VAR_6);
        return VAR_3;
    }

    return VAR_0;
}
