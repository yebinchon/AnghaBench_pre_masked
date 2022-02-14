
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
typedef int UINT ;
struct TYPE_3__ {int hMenuConsoleLarge; int hwnd; } ;
typedef TYPE_1__* PCONSOLE_MAINFRAME_WND ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;




 int VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static VOID
FUNC_9(HWND VAR_5,
               UINT VAR_6,
               WPARAM VAR_7,
               LPARAM VAR_8)
{
    PCONSOLE_MAINFRAME_WND VAR_9;
    HWND VAR_10;

    VAR_9 = (PCONSOLE_MAINFRAME_WND)FUNC_4(VAR_5, 0);

    switch (FUNC_5(VAR_7))
    {
        case 130:
            FUNC_0(VAR_9, VAR_4);
            FUNC_8(VAR_9->hwnd,
                    VAR_9->hMenuConsoleLarge);
            break;

        case 129:
            FUNC_2(VAR_5);
            break;

        case 128:
            FUNC_3(VAR_5);
            break;

        case 131:
            FUNC_6(VAR_5, VAR_1, 0, 0);
            break;

        default:
            if (FUNC_5(VAR_7) >= VAR_0)
            {
                FUNC_1(VAR_5, VAR_4, VAR_6, VAR_7, VAR_8);
            }
            else
            {
                VAR_10 = (HWND)FUNC_7(VAR_4, VAR_3, 0, 0);
                if (VAR_10)
                {
                    FUNC_7(VAR_10, VAR_2, VAR_7, VAR_8);
                }
            }
            break;
    }
}
