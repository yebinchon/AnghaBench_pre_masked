
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dwStyle; int hFont; int hBoldFont; int hUnderlineFont; int hBoldUnderlineFont; TYPE_1__ const* hotItem; } ;
struct TYPE_5__ {int state; } ;
typedef TYPE_1__ TREEVIEW_ITEM ;
typedef TYPE_2__ TREEVIEW_INFO ;
typedef int HFONT ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline HFONT
FUNC_0(const TREEVIEW_INFO *VAR_2, const TREEVIEW_ITEM *VAR_3)
{
    if ((VAR_2->dwStyle & VAR_1) && (VAR_3 == VAR_2->hotItem))
        return VAR_3->state & VAR_0 ? VAR_2->hBoldUnderlineFont : VAR_2->hUnderlineFont;
    if (VAR_3->state & VAR_0)
        return VAR_2->hBoldFont;
    return VAR_2->hFont;
}
