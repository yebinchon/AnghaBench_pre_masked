
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int msg_name; scalar_t__* wnd_class; scalar_t__ wParam; scalar_t__ lParam; int msg_hwnd; int msgnum; } ;
typedef TYPE_1__ SPY_INSTANCE ;
typedef int HWND ;
typedef int DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 char const* FUNC_3 (char*,int ) ;

const char *FUNC_4( UINT VAR_0, HWND VAR_1 )
{
    SPY_INSTANCE VAR_2;
    DWORD VAR_3 = FUNC_0();

    VAR_2.msgnum = VAR_0;
    VAR_2.msg_hwnd = VAR_1;
    VAR_2.lParam = 0;
    VAR_2.wParam = 0;
    VAR_2.wnd_class[0] = 0;
    FUNC_1(&VAR_2);
    FUNC_2( VAR_3 );
    return FUNC_3("%s", VAR_2.msg_name);
}
