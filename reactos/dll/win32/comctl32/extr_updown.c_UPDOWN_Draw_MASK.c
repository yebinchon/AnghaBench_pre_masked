
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Flags; int dwStyle; int Self; int Buddy; } ;
typedef TYPE_1__ UPDOWN_INFO ;
typedef int RECT ;
typedef int LRESULT ;
typedef scalar_t__ HTHEME ;
typedef int HDC ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int *,int ,int) ;
 int FUNC_1 (int ,int *,int ,int) ;
 int FUNC_2 (scalar_t__,int ,int,int,int *,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_7 (TYPE_1__ const*,int ) ;
 int FUNC_8 (TYPE_1__ const*,int *,int) ;
 scalar_t__ FUNC_9 (TYPE_1__ const*) ;
 int VAR_29 ;

__attribute__((used)) static LRESULT FUNC_10 (const UPDOWN_INFO *VAR_30, HDC VAR_31)
{
    BOOL VAR_32, VAR_33, VAR_34, VAR_35;
    RECT VAR_36;
    HTHEME VAR_37 = FUNC_4 (VAR_30->Self);
    int VAR_38 = 0, VAR_39 = 0, VAR_40 = 0, VAR_41 = 0;
    BOOL VAR_42 = VAR_17;

    VAR_32 = (VAR_30->Flags & VAR_21) && (VAR_30->Flags & VAR_19);
    VAR_33 = (VAR_30->Flags & VAR_19) && (VAR_30->Flags & VAR_20);
    VAR_34 = (VAR_30->Flags & VAR_21) && (VAR_30->Flags & VAR_18);
    VAR_35 = (VAR_30->Flags & VAR_18) && (VAR_30->Flags & VAR_20);
    if (VAR_37) {
        VAR_38 = (VAR_30->dwStyle & VAR_27) ? VAR_25 : VAR_24;
        VAR_39 = (VAR_30->dwStyle & VAR_29) ? VAR_12
            : (VAR_32 ? VAR_15 : (VAR_33 ? VAR_13 : VAR_14));
        VAR_40 = (VAR_30->dwStyle & VAR_27) ? VAR_23 : VAR_22;
        VAR_41 = (VAR_30->dwStyle & VAR_29) ? VAR_12
            : (VAR_34 ? VAR_15 : (VAR_35 ? VAR_13 : VAR_14));
        VAR_42 = FUNC_6 (VAR_30->Buddy)
            && (FUNC_5 (VAR_37, VAR_38, VAR_39)
              || FUNC_5 (VAR_37, VAR_40, VAR_41));
    }


    if (FUNC_9(VAR_30) || VAR_42) {
        if (!VAR_37 || !FUNC_7 (VAR_30, VAR_31)) {
            FUNC_3(VAR_30->Self, &VAR_36);
     FUNC_0(VAR_31, &VAR_36, VAR_16,
       VAR_0 | VAR_3 |
       (VAR_30->dwStyle & VAR_26 ? VAR_1 : VAR_2));
        }
    }


    FUNC_8 (VAR_30, &VAR_36, VAR_19);
    if (VAR_37) {
        FUNC_2(VAR_37, VAR_31, VAR_38, VAR_39, &VAR_36, ((void*)0));
    } else {
        FUNC_1(VAR_31, &VAR_36, VAR_11,
            (VAR_30->dwStyle & VAR_27 ? VAR_9 : VAR_10) |
            ((VAR_30->dwStyle & VAR_28) && VAR_33 ? VAR_4 : 0) |
            (VAR_32 ? VAR_6 : 0) |
            (VAR_30->dwStyle & VAR_29 ? VAR_5 : 0) );
    }


    FUNC_8(VAR_30, &VAR_36, VAR_18);
    if (VAR_37) {
        FUNC_2(VAR_37, VAR_31, VAR_40, VAR_41, &VAR_36, ((void*)0));
    } else {
        FUNC_1(VAR_31, &VAR_36, VAR_11,
            (VAR_30->dwStyle & VAR_27 ? VAR_8 : VAR_7) |
            ((VAR_30->dwStyle & VAR_28) && VAR_35 ? VAR_4 : 0) |
            (VAR_34 ? VAR_6 : 0) |
            (VAR_30->dwStyle & VAR_29 ? VAR_5 : 0) );
    }

    return 0;
}
