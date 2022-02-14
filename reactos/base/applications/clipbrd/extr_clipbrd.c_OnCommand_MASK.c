
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WPARAM ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_2__ {int hMainWnd; int hInstance; } ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HICON ;


 int FUNC_0 (int *) ;
 int VAR_0 ;







 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int *,int ) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ,int ,int ,int ,int) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *,int *,int ) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_14(HWND VAR_10, UINT VAR_11, WPARAM VAR_12, LPARAM VAR_13)
{
    switch (FUNC_4(VAR_12))
    {
        case 129:
        {
            FUNC_5();
            break;
        }

        case 128:
        {
            FUNC_11();
            break;
        }

        case 131:
        {
            FUNC_10(VAR_1.hMainWnd, VAR_9, 0, 0);
            break;
        }

        case 132:
        {
            if (FUNC_9(VAR_1.hMainWnd, VAR_1.hInstance,
                              VAR_7, VAR_8,
                              VAR_4 | VAR_5) != VAR_2)
            {
                break;
            }

            FUNC_1();
            break;
        }

        case 133:
        {
            FUNC_12(0);
            break;
        }

        case 130:
        {
            FUNC_3(VAR_1.hMainWnd, L"clipbrd.chm", 0, 0);
            break;
        }

        case 134:
        {
            HICON VAR_14;
            WCHAR VAR_15[VAR_3];

            VAR_14 = FUNC_6(VAR_1.hInstance, FUNC_8(VAR_0));
            FUNC_7(VAR_1.hInstance, VAR_6, VAR_15, FUNC_0(VAR_15));
            FUNC_13(VAR_1.hMainWnd, VAR_15, ((void*)0), VAR_14);
            FUNC_2(VAR_14);
            break;
        }

        default:
        {
            break;
        }
    }
    return 0;
}
