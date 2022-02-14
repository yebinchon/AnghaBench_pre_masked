
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wc ;
struct TYPE_4__ {int style; char const* lpszClassName; scalar_t__ hbrBackground; int hCursor; int hIcon; int hInstance; int lpfnWndProc; } ;
typedef TYPE_1__ WNDCLASSA ;
typedef int MSG ;
typedef int HWND ;
typedef scalar_t__ HBRUSH ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*,char const*,int ,int ,int ,int ,int ,int *,int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char const*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (int ,int ) ;
 int VAR_11 ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static void FUNC_17(void)
{
    WNDCLASSA VAR_12;
    HWND VAR_13;
    MSG VAR_14;
    static const char VAR_15[] = "MessageStateAnalyzerIME";

    FUNC_16("IME_DoTest\n");
    FUNC_4(VAR_11, FUNC_0(VAR_11));


    FUNC_13(&VAR_12, sizeof(VAR_12));
    VAR_12.style = VAR_2 | VAR_3 | VAR_1;
    VAR_12.lpfnWndProc = VAR_10;
    VAR_12.hInstance = FUNC_6(((void*)0));
    VAR_12.hIcon = FUNC_9(((void*)0), VAR_6);
    VAR_12.hCursor = FUNC_8(((void*)0), VAR_5);
    VAR_12.hbrBackground = (HBRUSH)(VAR_0 + 1);
    VAR_12.lpszClassName = VAR_15;
    if (!FUNC_10(&VAR_12))
    {
        FUNC_15("RegisterClassW failed.\n");
        return;
    }


    VAR_13 = FUNC_1(VAR_15, VAR_15, VAR_9,
                         0, 0, VAR_8, VAR_4, ((void*)0), ((void*)0),
                         FUNC_7(((void*)0)), ((void*)0));
    if (!VAR_13)
    {
        FUNC_15("CreateWindowW failed.\n");
        return;
    }


    while (FUNC_5(&VAR_14, ((void*)0), 0, 0))
    {
        FUNC_11(&VAR_14);
        FUNC_2(&VAR_14);
    }

    FUNC_14(FUNC_12(VAR_15, FUNC_6(((void*)0))), VAR_7);

    FUNC_3();
}
