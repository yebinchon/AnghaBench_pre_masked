
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_4__ {int dwStyle; int hwndSelf; int BRbtnState; int clrBk; int TLbtnState; } ;
typedef int RECT ;
typedef TYPE_1__ PAGER_INFO ;
typedef int LRESULT ;
typedef scalar_t__ HRGN ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int,int ,int ) ;
 int FUNC_3 (TYPE_1__ const*,int *,int *,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static LRESULT
FUNC_5 (const PAGER_INFO* VAR_7, HRGN VAR_8)
{
    RECT VAR_9, VAR_10;
    HDC VAR_11;

    if (VAR_7->dwStyle & VAR_6)
        return 0;

    FUNC_0 (VAR_7->hwndSelf, VAR_5, (WPARAM)VAR_8, 0);

    if (!(VAR_11 = FUNC_1 (VAR_7->hwndSelf, 0, VAR_0 | VAR_1)))
        return 0;

    FUNC_3(VAR_7, &VAR_10, &VAR_9, VAR_2);

    FUNC_2(VAR_11, VAR_7->clrBk, VAR_10,
                     VAR_7->dwStyle & VAR_3, VAR_4, VAR_7->TLbtnState);
    FUNC_2(VAR_11, VAR_7->clrBk, VAR_9,
                     VAR_7->dwStyle & VAR_3, VAR_2, VAR_7->BRbtnState);

    FUNC_4( VAR_7->hwndSelf, VAR_11 );
    return 0;
}
