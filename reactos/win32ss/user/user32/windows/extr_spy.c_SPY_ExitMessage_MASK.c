
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_5__ {int msg_name; int wnd_name; int wParam; int lParam; int msg_hwnd; int msgnum; } ;
typedef TYPE_1__ SPY_INSTANCE ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int INT ;
typedef int HWND ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;


 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,char*,int ,int ,int ,int ,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 () ;
 int VAR_2 ;
 int FUNC_11 (int) ;

void FUNC_12( INT VAR_3, HWND VAR_4, UINT VAR_5, LRESULT VAR_6,
                       WPARAM VAR_7, LPARAM VAR_8 )
{
    SPY_INSTANCE VAR_9;
    int VAR_10;
    DWORD VAR_11 = FUNC_0();

    if (!FUNC_6(VAR_2) || FUNC_9(VAR_5) ||
        (FUNC_8() && VAR_3 == 129))
        return;

    VAR_9.msgnum = VAR_5;
    VAR_9.msg_hwnd = VAR_4;
    VAR_9.lParam = VAR_8;
    VAR_9.wParam = VAR_7;
    FUNC_3(&VAR_9);
    FUNC_2(&VAR_9);

    if ((VAR_10 = FUNC_10()))
    {
        VAR_10 -= VAR_1;
        FUNC_11( VAR_10 );
    }

    switch(VAR_3)
    {
    case 129:
        FUNC_5(" %*s(%p)  DefWindowProc: [%04x] %s returned %08lx\n",
              VAR_10, "", VAR_4, VAR_5, VAR_9.msg_name, VAR_6 );
        break;

    case 128:
        FUNC_5(" %*s(%p) %-16s [%04x] %s returned %08lx\n",
                        VAR_10, "", VAR_4, FUNC_7(VAR_9.wnd_name), VAR_5,
                        VAR_9.msg_name, VAR_6 );
        FUNC_1(&VAR_9, VAR_0);
        break;
    }
    FUNC_4( VAR_11 );
}
