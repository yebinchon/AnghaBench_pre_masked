
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int hwndSelf; } ;
struct TYPE_11__ {int lParam; scalar_t__ iSubItem; void* iItem; int mask; } ;
struct TYPE_10__ {int lParam; void* iItem; } ;
typedef TYPE_1__ NMLISTVIEW ;
typedef TYPE_2__ LVITEMW ;
typedef TYPE_3__ LISTVIEW_INFO ;
typedef void* INT ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_3__ const*,TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_3__ const*,int ,TYPE_1__*) ;

__attribute__((used)) static BOOL FUNC_4(const LISTVIEW_INFO *VAR_3, INT VAR_4)
{
    NMLISTVIEW VAR_5;
    LVITEMW VAR_6;
    HWND VAR_7 = VAR_3->hwndSelf;

    FUNC_2(&VAR_5, sizeof (NMLISTVIEW));
    VAR_5.iItem = VAR_4;
    VAR_6.mask = VAR_0;
    VAR_6.iItem = VAR_4;
    VAR_6.iSubItem = 0;
    if (FUNC_1(VAR_3, &VAR_6, VAR_2)) VAR_5.lParam = VAR_6.lParam;
    FUNC_3(VAR_3, VAR_1, &VAR_5);
    return FUNC_0(VAR_7);
}
