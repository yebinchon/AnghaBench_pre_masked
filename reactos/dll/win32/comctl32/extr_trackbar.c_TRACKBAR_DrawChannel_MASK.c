
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwStyle; int rcSelection; int hwndSelf; int rcChannel; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int RECT ;
typedef scalar_t__ HTHEME ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,int) ;
 int FUNC_1 (scalar_t__,int ,int ,int ,int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (TYPE_1__ const*) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_7 (const TRACKBAR_INFO *VAR_10, HDC VAR_11)
{
    RECT VAR_12 = VAR_10->rcChannel;
    HTHEME VAR_13 = FUNC_5 (VAR_10->hwndSelf);

    if (VAR_13)
    {
        FUNC_1 (VAR_13, VAR_11,
            (VAR_10->dwStyle & VAR_5) ?
                VAR_7 : VAR_6, VAR_8, &VAR_12, 0);
    }
    else
    {
        FUNC_0 (VAR_11, &VAR_12, VAR_3, VAR_1 | VAR_0);
        if (VAR_10->dwStyle & VAR_4) {
            FUNC_2 (VAR_11, &VAR_12, FUNC_3(VAR_9));
            if (FUNC_6(VAR_10))
                FUNC_2 (VAR_11, &VAR_10->rcSelection, FUNC_4(VAR_2));
        }
    }
}
