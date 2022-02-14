
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct message {int message; int flags; int wParam; } ;
typedef int seq ;
typedef int cp ;
typedef int WCHAR ;
struct TYPE_6__ {int message; int hwnd; int wParam; int lParam; } ;
typedef TYPE_1__ MSG ;
typedef int LCID ;
typedef int HWND ;
typedef scalar_t__ HKL ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int *,int ,int,int,int,int,int ,int ,int ,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int *,int) ;
 int FUNC_7 (TYPE_1__*,int,int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int,int ,int ) ;
 int FUNC_9 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (char*,int ) ;
 int FUNC_12 (int,int,int,int ) ;
 int FUNC_13 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct message*,int ,int) ;
 int FUNC_17 (int,char*,...) ;
 int FUNC_18 (struct message*,char*,int ) ;
 int VAR_5 ;
 int FUNC_19 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_20(void)
{
    HWND VAR_8;
    MSG VAR_9;
    struct message VAR_10[2];
    HKL VAR_11, VAR_12;
    DWORD VAR_13;
    LCID VAR_14;

    VAR_11 = FUNC_5( 0 );
    FUNC_6( FUNC_10( VAR_11 ), VAR_1 | VAR_2, (WCHAR*)&VAR_13, sizeof(VAR_13) / sizeof(WCHAR) );
    if (VAR_13 != 1252)
    {
        FUNC_19( "Default codepage %d\n", VAR_13 );
        return;
    }

    VAR_12 = FUNC_11( "00000408", 0 );
    if (!VAR_12 || VAR_12 == VAR_11 )
    {
        FUNC_19( "Unable to load Greek keyboard layout\n" );
        return;
    }

    VAR_8 = FUNC_1( 0, VAR_6, ((void*)0), VAR_4,
                            100, 100, 200, 200, 0, 0, 0, ((void*)0) );
    FUNC_14();

    FUNC_12( VAR_8, VAR_3, 0x3b1, 0 );

    while (FUNC_8( &VAR_9, VAR_8, 0, 0 ))
    {
        if (!FUNC_15( VAR_9.message )) break;
    }

    FUNC_17( VAR_9.hwnd == VAR_8, "unexpected hwnd %p\n", VAR_9.hwnd );
    FUNC_17( VAR_9.message == VAR_3, "unexpected message %x\n", VAR_9.message );
    FUNC_17( VAR_9.wParam == 0x3b1, "bad wparam %lx\n", VAR_9.wParam );
    FUNC_17( VAR_9.lParam == 0, "bad lparam %lx\n", VAR_9.lParam );

    FUNC_4( &VAR_9 );

    FUNC_16( VAR_10, 0, sizeof(VAR_10) );
    VAR_10[0].message = VAR_3;
    VAR_10[0].flags = VAR_5|VAR_7;
    VAR_10[0].wParam = 0x3b1;

    FUNC_18( VAR_10, "unicode WM_CHAR", VAR_0 );

    FUNC_14();


    FUNC_12( VAR_8, VAR_3, 0x3b1, 0 );

    FUNC_17( FUNC_7( &VAR_9, VAR_8, 0, 0 ), "no message\n" );
    FUNC_17( VAR_9.hwnd == VAR_8, "unexpected hwnd %p\n", VAR_9.hwnd );
    FUNC_17( VAR_9.message == VAR_3, "unexpected message %x\n", VAR_9.message );
    FUNC_17( VAR_9.wParam == 0x61, "bad wparam %lx\n", VAR_9.wParam );
    FUNC_17( VAR_9.lParam == 0, "bad lparam %lx\n", VAR_9.lParam );

    FUNC_3( &VAR_9 );

    VAR_10[0].wParam = 0x61;
    FUNC_18( VAR_10, "unicode WM_CHAR", VAR_0 );

    VAR_14 = FUNC_9();
    FUNC_0( VAR_12, 0 );
    FUNC_17( FUNC_9() == VAR_14, "locale changed from %08x to %08x\n",
        VAR_14, FUNC_9() );

    FUNC_14();


    FUNC_12( VAR_8, VAR_3, 0x3b1, 0 );

    FUNC_17( FUNC_7( &VAR_9, VAR_8, 0, 0 ), "no message\n" );
    FUNC_17( VAR_9.hwnd == VAR_8, "unexpected hwnd %p\n", VAR_9.hwnd );
    FUNC_17( VAR_9.message == VAR_3, "unexpected message %x\n", VAR_9.message );
    FUNC_17( VAR_9.wParam == 0xe1, "bad wparam %lx\n", VAR_9.wParam );
    FUNC_17( VAR_9.lParam == 0, "bad lparam %lx\n", VAR_9.lParam );

    FUNC_3( &VAR_9 );

    VAR_10[0].wParam = 0x3b1;
    FUNC_18( VAR_10, "unicode WM_CHAR", VAR_0 );

    FUNC_2( VAR_8 );
    FUNC_0( VAR_11, 0 );
    FUNC_13( VAR_12 );
}
