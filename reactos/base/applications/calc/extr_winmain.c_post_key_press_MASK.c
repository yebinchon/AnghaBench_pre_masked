
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_2__ {int hWnd; } ;
typedef int TCHAR ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int HWND ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 int FUNC_6 (int *,int ) ;
 TYPE_1__ VAR_9 ;

__attribute__((used)) static LRESULT FUNC_7(LPARAM VAR_10, WORD VAR_11)
{
    HWND VAR_12 = FUNC_1(VAR_9.hWnd,VAR_11);
    TCHAR VAR_13[64];


    if (!FUNC_3(VAR_12))
        return 1;

    if (!FUNC_0(VAR_12, VAR_13, FUNC_5(VAR_13)))
        return 1;

    if (!FUNC_6(VAR_13, VAR_8)) {
        DWORD VAR_14 = FUNC_2(VAR_12, VAR_5) & 0xF;


        if (VAR_14 == VAR_4 || VAR_14 == VAR_2 || VAR_14 == VAR_3) {
            if (!(VAR_10 & VAR_7)) {
                FUNC_4(VAR_12, VAR_1, 1, 0);
            } else
            if ((VAR_10 & VAR_6)) {
                FUNC_4(VAR_12, VAR_1, 0, 0);
                FUNC_4(VAR_12, VAR_0, 0, 0);
            }
            return 1;
        }
    }

    if ((VAR_10 & VAR_6)) {
        FUNC_4(VAR_12, VAR_0, 0, 0);
    }
    return 1;
}
