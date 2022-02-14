
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tme ;
typedef enum SCROLL_HITTEST { ____Placeholder_SCROLL_HITTEST } SCROLL_HITTEST ;
typedef int UINT ;
struct TYPE_3__ {int cbSize; int dwFlags; scalar_t__ hwndTrack; } ;
typedef TYPE_1__ TRACKMOUSEEVENT ;
typedef int POINT ;
typedef scalar_t__ HWND ;
typedef int HTHEME ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;


 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_4(HWND VAR_8, HTHEME VAR_9, UINT VAR_10, POINT VAR_11)
{
    enum SCROLL_HITTEST VAR_12;
    TRACKMOUSEEVENT VAR_13;

    if (FUNC_0(VAR_8, VAR_0) & (VAR_2 | VAR_1))
        return;

    VAR_12 = FUNC_2(VAR_8, VAR_9, VAR_11);

    switch (VAR_10)
    {
        case 128:
            VAR_12 = FUNC_2(VAR_8, VAR_9, VAR_11);
            VAR_7 = VAR_8;
            break;

        case 129:
            if (VAR_7 == VAR_8) {
                VAR_12 = VAR_3;
            }
            break;
    }

    VAR_13.cbSize = sizeof(VAR_13);
    VAR_13.dwFlags = VAR_5;
    FUNC_1(&VAR_13);

    if (!(VAR_13.dwFlags & VAR_4) || VAR_13.hwndTrack != VAR_8) {
        VAR_13.dwFlags = VAR_4;
        VAR_13.hwndTrack = VAR_8;
        FUNC_1(&VAR_13);
    }

    if (VAR_7 != VAR_8 && VAR_10 == 129) {
        FUNC_3(VAR_8, VAR_9, VAR_3);
        return;
    }

    if (VAR_7 == VAR_8 && VAR_12 != VAR_6) {
        enum SCROLL_HITTEST VAR_14 = VAR_6;

        VAR_6 = VAR_12;

        if (VAR_12 != VAR_3)
            FUNC_3(VAR_8, VAR_9, VAR_12);
        else
            VAR_7 = 0;

        if (VAR_14 != VAR_3)
            FUNC_3(VAR_8, VAR_9, VAR_14);
    }
}
