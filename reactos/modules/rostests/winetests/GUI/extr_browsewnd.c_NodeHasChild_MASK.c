
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hBrowseTV; } ;
struct TYPE_5__ {int cChildren; int mask; int hItem; } ;
typedef TYPE_1__ TV_ITEM ;
typedef TYPE_2__* PMAIN_WND_INFO ;
typedef int HTREEITEM ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static BOOL
FUNC_1(PMAIN_WND_INFO VAR_1,
             HTREEITEM VAR_2)
{
    TV_ITEM VAR_3;

    VAR_3.hItem = VAR_2;
    VAR_3.mask = VAR_0;

    (void)FUNC_0(VAR_1->hBrowseTV, &VAR_3);

    return (VAR_3.cChildren == 1);
}
