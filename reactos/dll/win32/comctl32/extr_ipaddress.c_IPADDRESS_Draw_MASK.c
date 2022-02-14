
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_17__ {scalar_t__ clrGrayText; scalar_t__ clr3dFace; scalar_t__ clrWindowText; scalar_t__ clrWindow; } ;
struct TYPE_16__ {scalar_t__ Self; TYPE_1__* Part; scalar_t__ Enabled; } ;
struct TYPE_15__ {int left; int right; } ;
struct TYPE_14__ {int EditHwnd; } ;
typedef TYPE_2__ RECT ;
typedef int POINT ;
typedef int LRESULT ;
typedef TYPE_3__ IPADDRESS_INFO ;
typedef scalar_t__ HTHEME ;
typedef int HDC ;
typedef int HBRUSH ;
typedef scalar_t__ DWORD_PTR ;
typedef int DWORD ;
typedef scalar_t__ COLORREF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,TYPE_2__*,int ,int) ;
 int FUNC_2 (int ,char const*,int,TYPE_2__*,int) ;
 int FUNC_3 (scalar_t__,int ,int ,int,TYPE_2__*,int ) ;
 int FUNC_4 (scalar_t__,int ,TYPE_2__*) ;
 int FUNC_5 (scalar_t__,int ,int ,int,char const*,int,int,int ,TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ,TYPE_2__*,int ) ;
 int VAR_12 ;
 int FUNC_7 (scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (scalar_t__,int ,int,int ,scalar_t__*) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_12 (scalar_t__,int ,int) ;
 int FUNC_13 (int ,scalar_t__,int *,int) ;
 scalar_t__ FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (int ,scalar_t__) ;
 int FUNC_16 (int ,scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_17 (char*) ;
 int VAR_15 ;
 TYPE_4__ VAR_16 ;

__attribute__((used)) static LRESULT FUNC_18 (const IPADDRESS_INFO *VAR_17, HDC VAR_18)
{
    static const WCHAR VAR_19[] = { '.', 0 };
    RECT VAR_20, VAR_21;
    COLORREF VAR_22, VAR_23;
    HTHEME VAR_24;
    int VAR_25, VAR_26 = VAR_10;

    FUNC_17("\n");

    FUNC_7 (VAR_17->Self, &VAR_20);

    VAR_24 = FUNC_14(VAR_17->Self, VAR_15);

    if (VAR_24) {
        DWORD VAR_27 = FUNC_10 (VAR_17->Self, VAR_12);

        if (!VAR_17->Enabled)
            VAR_26 = VAR_8;
        else if (VAR_27 & VAR_7)
            VAR_26 = VAR_11;
        else if (FUNC_8() == VAR_17->Self)
            VAR_26 = VAR_9;

        FUNC_9(VAR_24, VAR_6, VAR_26, VAR_13, &VAR_22);
        FUNC_9(VAR_24, VAR_6, VAR_26, VAR_14, &VAR_23);

        if (FUNC_12 (VAR_24, VAR_6, VAR_26))
            FUNC_4(VAR_17->Self, VAR_18, &VAR_20);
        FUNC_3 (VAR_24, VAR_18, VAR_6, VAR_26, &VAR_20, 0);
    } else {
        if (VAR_17->Enabled) {
            VAR_22 = VAR_16.clrWindow;
            VAR_23 = VAR_16.clrWindowText;
        } else {
            VAR_22 = VAR_16.clr3dFace;
            VAR_23 = VAR_16.clrGrayText;
        }

        FUNC_6 (VAR_18, &VAR_20, (HBRUSH)(DWORD_PTR)(VAR_22+1));
        FUNC_1 (VAR_18, &VAR_20, VAR_5, VAR_1 | VAR_0);
    }

    FUNC_15 (VAR_18, VAR_22);
    FUNC_16(VAR_18, VAR_23);

    for (VAR_25 = 0; VAR_25 < 3; VAR_25++) {
        FUNC_11 (VAR_17->Part[VAR_25].EditHwnd, &VAR_21);
        FUNC_13( 0, VAR_17->Self, (POINT *)&VAR_21, 2 );
        VAR_20.left = VAR_21.right;
        FUNC_11 (VAR_17->Part[VAR_25+1].EditHwnd, &VAR_21);
        FUNC_13( 0, VAR_17->Self, (POINT *)&VAR_21, 2 );
        VAR_20.right = VAR_21.left;

        if (VAR_24)
            FUNC_5(VAR_24, VAR_18, VAR_6, VAR_26, VAR_19, 1, VAR_4 | VAR_3 | VAR_2, 0, &VAR_20);
        else
            FUNC_2(VAR_18, VAR_19, 1, &VAR_20, VAR_4 | VAR_3 | VAR_2);
    }

    if (VAR_24)
        FUNC_0(VAR_24);

    return 0;
}
