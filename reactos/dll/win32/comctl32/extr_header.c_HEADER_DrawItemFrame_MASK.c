
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dwStyle; int hwndSelf; } ;
struct TYPE_5__ {scalar_t__ bDown; } ;
typedef int RECT ;
typedef TYPE_1__ HEADER_ITEM ;
typedef TYPE_2__ HEADER_INFO ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_2(HEADER_INFO *VAR_11, HDC VAR_12, RECT *VAR_13, const HEADER_ITEM *VAR_14)
{
    if (FUNC_1(VAR_11->hwndSelf)) return;

    if (!(VAR_11->dwStyle & VAR_10))
    {
        if (VAR_11->dwStyle & VAR_9) {
            if (VAR_14->bDown)
                FUNC_0 (VAR_12, VAR_13, VAR_0, VAR_4 | VAR_3 | VAR_1);
            else
                FUNC_0 (VAR_12, VAR_13, VAR_8, VAR_4 | VAR_6 | VAR_1);
        }
        else
            FUNC_0 (VAR_12, VAR_13, VAR_7, VAR_2 | VAR_5 | VAR_1);
    }
}
