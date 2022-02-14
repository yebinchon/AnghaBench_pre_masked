
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cbSize; scalar_t__ hIcon; char* lpszClassName; int * hIconSm; int hInstance; int lpfnWndProc; } ;
typedef TYPE_1__ WNDCLASSEXW ;
typedef char WCHAR ;
typedef int LPCWSTR ;
typedef int LONG_PTR ;
typedef int ICONINFO ;
typedef int * HWND ;
typedef int HINSTANCE ;
typedef int * HICON ;


 int VAR_0 ;
 int * FUNC_0 (scalar_t__,int ,int ,int ,int ) ;
 int * FUNC_1 (int ,char*,int *,int ,int ,int ,int ,int ,int *,int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (int *,int ,int ,int ) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (char*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_14 (TYPE_1__*,int ,int) ;
 int FUNC_15 (int,char*) ;

__attribute__((used)) static void FUNC_16(void)
{
    WNDCLASSEXW VAR_13, VAR_14;
    WCHAR VAR_15[] = {'I','c','o','n','T','e','s','t','C','l','a','s','s',0};
    HWND VAR_16;
    HINSTANCE VAR_17 = FUNC_7(0);
    HICON VAR_18, VAR_19;
    ICONINFO VAR_20;

    FUNC_14(&VAR_13, 0, sizeof VAR_13);
    VAR_13.cbSize = sizeof VAR_13;
    VAR_13.lpfnWndProc = VAR_0;
    VAR_13.hIcon = FUNC_9(0, (LPCWSTR)VAR_6);
    VAR_13.hInstance = VAR_17;
    VAR_13.lpszClassName = VAR_15;
    FUNC_15(FUNC_10(&VAR_13), "RegisterClassExW returned 0\n");
    VAR_16 = FUNC_1(0, VAR_15, ((void*)0), VAR_12,
                        0, 0, 0, 0, ((void*)0), ((void*)0), VAR_17, 0);
    FUNC_15(VAR_16 != ((void*)0), "Window was not created\n");

    FUNC_15(FUNC_4(VAR_17, VAR_15, &VAR_14), "Class info was not retrieved\n");
    FUNC_15(VAR_13.hIcon == VAR_14.hIcon, "Icons don't match\n");
    FUNC_15(VAR_14.hIconSm != ((void*)0), "hIconSm should be non-zero handle\n");

    VAR_18 = (HICON)FUNC_5(VAR_16, VAR_2);
    FUNC_15(VAR_18 != ((void*)0), "GetClassLong should return non-zero handle\n");

    FUNC_15(FUNC_11(VAR_16, VAR_11, VAR_3, 0) == 0,
                    "WM_GETICON with ICON_BIG should not return the class icon\n");
    FUNC_15(FUNC_11(VAR_16, VAR_11, VAR_4, 0) == 0,
                    "WM_GETICON with ICON_SMALL should not return the class icon\n");
    FUNC_15(FUNC_11(VAR_16, VAR_11, VAR_5, 0) == 0,
                    "WM_GETICON with ICON_SMALL2 should not return the class icon\n");

    VAR_19 = FUNC_0(VAR_13.hIcon, VAR_8, FUNC_8(VAR_9),
                                                FUNC_8(VAR_10), 0);
    FUNC_15(!FUNC_12(VAR_16, VAR_2, (LONG_PTR)VAR_19),
                    "Previous hIconSm should be zero\n");
    FUNC_15(VAR_19 == (HICON)FUNC_5(VAR_16, VAR_2),
                    "Should return explicitly assigned small icon\n");
    FUNC_15(!FUNC_6(VAR_18, &VAR_20), "Previous small icon should be destroyed\n");

    FUNC_12(VAR_16, VAR_2, 0);
    VAR_18 = (HICON)FUNC_5(VAR_16, VAR_2);
    FUNC_15( VAR_18 != ((void*)0), "GetClassLong should return non-zero handle\n");

    FUNC_12(VAR_16, VAR_1, 0);
    FUNC_15(!FUNC_5(VAR_16, VAR_2), "GetClassLong should return zero handle\n");

    FUNC_12(VAR_16, VAR_1, (LONG_PTR)FUNC_9(((void*)0), (LPCWSTR)VAR_7));
    VAR_18 = (HICON)FUNC_5(VAR_16, VAR_2);
    FUNC_15(VAR_18 != ((void*)0), "GetClassLong should return non-zero handle\n");
    FUNC_13(VAR_15, VAR_17);
    FUNC_15(FUNC_6(VAR_18, &VAR_20), "Icon should NOT be destroyed\n");

    FUNC_2(VAR_19);
    FUNC_3(VAR_16);
}
