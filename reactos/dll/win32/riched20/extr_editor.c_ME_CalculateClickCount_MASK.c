
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WPARAM ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {short x; short y; } ;
struct TYPE_4__ {scalar_t__ hwnd; scalar_t__ message; scalar_t__ wParam; scalar_t__ time; TYPE_1__ pt; int lParam; } ;
typedef TYPE_2__ MSG ;
typedef int ME_TextEditor ;
typedef int LPARAM ;
typedef scalar_t__ HWND ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (short) ;

__attribute__((used)) static int FUNC_6(ME_TextEditor *VAR_12, UINT VAR_13, WPARAM VAR_14,
                                  LPARAM VAR_15)
{
    static int VAR_16 = 0;
    if (VAR_13 < VAR_6 || VAR_13 > VAR_7)
        return 0;

    if ((VAR_13 == VAR_2) ||
        (VAR_13 == VAR_8) ||
        (VAR_13 == VAR_4) ||
        (VAR_13 == VAR_10))
    {
        VAR_13 -= (VAR_2 - VAR_3);
    }

    if ((VAR_13 == VAR_3) ||
        (VAR_13 == VAR_9) ||
        (VAR_13 == VAR_5) ||
        (VAR_13 == VAR_11))
    {
        static MSG VAR_17;
        MSG VAR_18;


        VAR_18.hwnd = (HWND)VAR_12;
        VAR_18.message = VAR_13;
        VAR_18.wParam = VAR_14;
        VAR_18.lParam = VAR_15;
        VAR_18.time = FUNC_1();
        VAR_18.pt.x = (short)FUNC_4(VAR_15);
        VAR_18.pt.y = (short)FUNC_3(VAR_15);
        if ((VAR_16 != 0) &&
            (VAR_18.message == VAR_17.message) &&
            (VAR_18.hwnd == VAR_17.hwnd) &&
            (VAR_18.wParam == VAR_17.wParam) &&
            (VAR_18.time - VAR_17.time < FUNC_0()) &&
            (FUNC_5(VAR_18.pt.x - VAR_17.pt.x) < FUNC_2(VAR_0)/2) &&
            (FUNC_5(VAR_18.pt.y - VAR_17.pt.y) < FUNC_2(VAR_1)/2))
        {
            VAR_16++;
        } else {
            VAR_16 = 1;
        }
        VAR_17 = VAR_18;
    } else {
        return 0;
    }
    return VAR_16;
}
