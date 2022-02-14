
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_3__ {int wnd_class; int msg_hwnd; } ;
typedef TYPE_1__ SPY_INSTANCE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4( SPY_INSTANCE *VAR_4 )
{

    if ((FUNC_0(VAR_4->msg_hwnd, VAR_0) == (ULONG_PTR)VAR_2) &&
        (FUNC_2(VAR_4->msg_hwnd, VAR_1))) {
        FUNC_3(VAR_4->wnd_class, VAR_3);
    }
    else {
        FUNC_1(VAR_4->msg_hwnd, VAR_4->wnd_class, sizeof(VAR_4->wnd_class)/sizeof(WCHAR));
    }
}
