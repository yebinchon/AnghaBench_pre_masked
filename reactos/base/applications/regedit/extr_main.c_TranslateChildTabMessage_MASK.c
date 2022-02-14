
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hAddressBarWnd; scalar_t__ hWnd; } ;
struct TYPE_4__ {scalar_t__ message; scalar_t__ hwnd; int wParam; } ;
typedef TYPE_1__* PMSG ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int ,int ,int ) ;
 int FUNC_3 (scalar_t__,int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_2__* VAR_8 ;

BOOL FUNC_4(PMSG VAR_9)
{
    if (VAR_9->message != VAR_7) return VAR_1;


    if ((VAR_9->hwnd == VAR_8->hAddressBarWnd) &&
        (VAR_9->message == VAR_7) &&
        (VAR_9->wParam == L'A') && (FUNC_0(VAR_4) < 0))
    {
        FUNC_3(VAR_9->hwnd, VAR_0, 0, -1);
        return VAR_3;
    }

    if (VAR_9->wParam != VAR_5) return VAR_1;
    if (FUNC_1(VAR_9->hwnd) != VAR_8->hWnd) return VAR_1;
    FUNC_2(VAR_8->hWnd, VAR_6, VAR_2, 0);
    return VAR_3;
}
