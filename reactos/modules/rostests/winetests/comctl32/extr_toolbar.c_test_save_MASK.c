
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int expect ;
typedef int data ;
typedef char WCHAR ;
struct TYPE_5__ {int member_0; } ;
struct TYPE_7__ {int member_1; int member_5; int member_6; scalar_t__ iBitmap; int idCommand; scalar_t__ fsState; scalar_t__ fsStyle; scalar_t__ dwData; scalar_t__ iString; TYPE_1__ member_4; int const member_3; int const member_2; int member_0; } ;
struct TYPE_6__ {char const* pszSubKey; char const* pszValueName; int hkr; } ;
typedef TYPE_2__ TBSAVEPARAMSW ;
typedef TYPE_3__ TBBUTTON ;
typedef int LPARAM ;
typedef int LONG ;
typedef scalar_t__ INT_PTR ;
typedef int * HWND ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (TYPE_3__ const*) ;

 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (int ,char const*,int *) ;
 int FUNC_6 (int ,char const*,int *,int*,int *,int*) ;
 int FUNC_7 (int *,int ,int,int ) ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int const*,int) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int ,int ,int ,char*,int) ;
 int FUNC_12 (int **) ;
 int FUNC_13 (int **) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_14 (char*,char*) ;

__attribute__((used)) static void FUNC_15(void)
{
    HWND VAR_14 = ((void*)0);
    TBSAVEPARAMSW VAR_15;
    static const WCHAR VAR_16[] = {'S','o','f','t','w','a','r','e','\\','W','i','n','e','\\',
                                   'W','i','n','e','T','e','s','t',0};
    static const WCHAR VAR_17[] = {'t','o','o','l','b','a','r','t','e','s','t',0};
    LONG VAR_18;
    HKEY VAR_19;
    BYTE VAR_20[100];
    DWORD VAR_21 = sizeof(VAR_20), VAR_22, VAR_23, VAR_24;
    TBBUTTON VAR_25;
    static const TBBUTTON VAR_26[2] =
        {
            {0, 11, 128, 130, 0, 0, -1},
            {0, 13, 129, 130, 0, 0, -1}
        };
    static const DWORD VAR_27[] = {0xcafe, 1, 0xcafe0000, 3, 0xcafe0001, 5, 0xcafe0002, 7, 0xcafe0003,
                                   9, 0xcafe0004, 11, 0xcafe0005, 13, 0xcafe0006, 0xffffffff, 0xcafe0007,
                                   0xfffffffe, 0xcafe0008, 0x80000000, 0xcafe0009, 0x7fffffff, 0xcafe000a,
                                   0x100, 0xcafe000b};
    static const TBBUTTON VAR_28[] =
    {
        {0, 1, 129, 130, 0, 0, 0},
        {0, 3, 129, 130, 0, 1, 2},
        {0, 5, 129, 130, 0, 2, 0},
        {0, 7, 0, 130, 0, 0, (INT_PTR)"foo"},
        {0, 9, 0, 130, 0, 0, 0},
        {0, 11, 0, 130, 0, 0, 3},
        {0, 13, 129, 130, 0, 6, 0},
        {0, 0, 129, 130, 0, 7, 0},
        {0, 0, 129, 130, 0, 8, 0},
        {0, 0, 129, 130, 0, 9, 0},
        {0, 0x7fffffff, 129, 130, 0, 0xa, 0},
    };

    VAR_15.hkr = VAR_1;
    VAR_15.pszSubKey = VAR_16;
    VAR_15.pszValueName = VAR_17;

    FUNC_13( &VAR_14 );
    FUNC_7(VAR_14, VAR_5, FUNC_0(VAR_26), (LPARAM)VAR_26);

    FUNC_8(VAR_13, VAR_2);
    VAR_18 = FUNC_7( VAR_14, VAR_8, VAR_9, (LPARAM)&VAR_15 );
    FUNC_10( VAR_18, "saving failed\n" );
    FUNC_11(VAR_13, VAR_3, VAR_12, "save", VAR_0);
    FUNC_1( VAR_14 );

    VAR_18 = FUNC_5( VAR_1, VAR_16, &VAR_19 );
    FUNC_10( !VAR_18, "got %08x\n", VAR_18 );
    VAR_18 = FUNC_6( VAR_19, VAR_17, ((void*)0), &VAR_22, VAR_20, &VAR_21 );
    FUNC_10( !VAR_18, "got %08x\n", VAR_18 );
    FUNC_10( VAR_22 == VAR_4, "got %08x\n", VAR_22 );
    FUNC_10( VAR_21 == sizeof(VAR_27), "got %08x\n", VAR_21 );
    FUNC_10( !FUNC_9( VAR_20, VAR_27, VAR_21 ), "mismatch\n" );

    FUNC_3( VAR_19 );

    VAR_14 = ((void*)0);
    FUNC_12( &VAR_14 );

    FUNC_8(VAR_13, VAR_2);
    VAR_18 = FUNC_7( VAR_14, VAR_8, VAR_0, (LPARAM)&VAR_15 );
    FUNC_10( VAR_18, "restoring failed\n" );
    FUNC_11(VAR_13, VAR_3, VAR_11, "restore", VAR_0);
    VAR_24 = FUNC_7( VAR_14, VAR_6, 0, 0 );
    FUNC_10( VAR_24 == FUNC_0(VAR_28), "got %d\n", VAR_24 );

    for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++)
    {
        VAR_18 = FUNC_7( VAR_14, VAR_7, VAR_23, (LPARAM)&VAR_25 );
        FUNC_10( VAR_18, "got %d\n", VAR_18 );

        FUNC_10( VAR_25.iBitmap == VAR_28[VAR_23].iBitmap, "%d: got %d\n", VAR_23, VAR_25.iBitmap );
        FUNC_10( VAR_25.idCommand == VAR_28[VAR_23].idCommand, "%d: got %d\n", VAR_23, VAR_25.idCommand );
        FUNC_10( VAR_25.fsState == VAR_28[VAR_23].fsState, "%d: got %02x\n", VAR_23, VAR_25.fsState );
        FUNC_10( VAR_25.fsStyle == VAR_28[VAR_23].fsStyle, "%d: got %02x\n", VAR_23, VAR_25.fsStyle );
        FUNC_10( VAR_25.dwData == VAR_28[VAR_23].dwData, "%d: got %lx\n", VAR_23, VAR_25.dwData );
        if (FUNC_2(VAR_28[VAR_23].iString))
            FUNC_10( VAR_25.iString == VAR_28[VAR_23].iString, "%d: got %lx\n", VAR_23, VAR_25.iString );
        else
            FUNC_10( !FUNC_14( (char *)VAR_25.iString, (char *)VAR_28[VAR_23].iString ),
                "%d: got %s\n", VAR_23, (char *)VAR_25.iString );


        if (VAR_25.idCommand == 7)
            FUNC_10( VAR_25.iString == (INT_PTR)VAR_10, "string not set\n");
    }

    FUNC_1( VAR_14 );
    FUNC_5( VAR_1, VAR_16, &VAR_19 );
    FUNC_4( VAR_19, VAR_17 );
    FUNC_3( VAR_19 );
}
