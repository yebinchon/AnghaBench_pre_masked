
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_5__ {int msg_name; int wnd_name; int wParam; int lParam; int msg_hwnd; int msgnum; } ;
typedef TYPE_1__ SPY_INSTANCE ;
typedef int LPARAM ;
typedef int INT ;
typedef int HWND ;
typedef int DWORD ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;


 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int,char*,int ,int ,int ,int ,char*,...) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (char*,char*,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (char*,char*) ;

void FUNC_16( INT VAR_2, HWND VAR_3, UINT VAR_4,
                       WPARAM VAR_5, LPARAM VAR_6 )
{
    SPY_INSTANCE VAR_7;
    int VAR_8;
    DWORD VAR_9 = FUNC_1();

    if (!FUNC_14() || FUNC_10(VAR_4)) return;

    VAR_7.msgnum = VAR_4;
    VAR_7.msg_hwnd = VAR_3;
    VAR_7.lParam = VAR_6;
    VAR_7.wParam = VAR_5;
    FUNC_5(&VAR_7);
    FUNC_4(&VAR_7);
    VAR_8 = FUNC_11();


    switch(VAR_2)
    {
    case 129:
        FUNC_7("%*s(%p) %-16s [%04x] %s dispatched  wp=%08lx lp=%08lx\n",
                        VAR_8, "", VAR_3, FUNC_8(VAR_7.wnd_name), VAR_4,
                        VAR_7.msg_name, VAR_5, VAR_6);
        break;

    case 128:
        {
            char VAR_10[20];
            DWORD VAR_11 = FUNC_2( VAR_3, ((void*)0) );

            if (VAR_11 == FUNC_0()) FUNC_15( VAR_10, "self" );
            else FUNC_13( VAR_10, "tid %04ld", FUNC_0() );

            FUNC_7("%*s(%p) %-16s [%04x] %s sent from %s wp=%08lx lp=%08lx\n",
                  VAR_8, "", VAR_3, FUNC_8(VAR_7.wnd_name), VAR_4,
                  VAR_7.msg_name, VAR_10, VAR_5, VAR_6 );
            FUNC_3(&VAR_7, VAR_1);
        }
        break;

    case 130:
        if (FUNC_9()) return;
        FUNC_7("%*s(%p)  DefWindowProc:[%04x] %s  wp=%08lx lp=%08lx\n",
              VAR_8, "", VAR_3, VAR_4, VAR_7.msg_name, VAR_5, VAR_6 );
        break;
    }
    FUNC_12( VAR_8 + VAR_0 );
    FUNC_6( VAR_9 );
}
