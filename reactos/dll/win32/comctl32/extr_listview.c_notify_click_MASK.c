
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int nmia ;
struct TYPE_15__ {int hwndSelf; } ;
struct TYPE_14__ {int iItem; int pt; int iSubItem; } ;
struct TYPE_13__ {int lParam; scalar_t__ iSubItem; int iItem; int mask; } ;
struct TYPE_12__ {int lParam; int ptAction; int iSubItem; int iItem; } ;
typedef TYPE_1__ NMITEMACTIVATE ;
typedef int NMHDR ;
typedef TYPE_2__ LVITEMW ;
typedef TYPE_3__ LVHITTESTINFO ;
typedef int LRESULT ;
typedef TYPE_4__ LISTVIEW_INFO ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_4__ const*,TYPE_2__*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_3__ const*) ;
 int FUNC_5 (TYPE_4__ const*,scalar_t__,int *) ;

__attribute__((used)) static BOOL FUNC_6(const LISTVIEW_INFO *VAR_3, INT VAR_4, const LVHITTESTINFO *VAR_5)
{
    NMITEMACTIVATE VAR_6;
    LVITEMW VAR_7;
    HWND VAR_8 = VAR_3->hwndSelf;
    LRESULT VAR_9;

    FUNC_2("code=%d, lvht=%s\n", VAR_4, FUNC_4(VAR_5));
    FUNC_3(&VAR_6, sizeof(VAR_6));
    VAR_6.iItem = VAR_5->iItem;
    VAR_6.iSubItem = VAR_5->iSubItem;
    VAR_6.ptAction = VAR_5->pt;
    VAR_7.mask = VAR_0;
    VAR_7.iItem = VAR_5->iItem;
    VAR_7.iSubItem = 0;
    if (FUNC_1(VAR_3, &VAR_7, VAR_2)) VAR_6.lParam = VAR_7.lParam;
    VAR_9 = FUNC_5(VAR_3, VAR_4, (NMHDR*)&VAR_6);
    return FUNC_0(VAR_8) && (VAR_4 == VAR_1 ? !VAR_9 : VAR_2);
}
