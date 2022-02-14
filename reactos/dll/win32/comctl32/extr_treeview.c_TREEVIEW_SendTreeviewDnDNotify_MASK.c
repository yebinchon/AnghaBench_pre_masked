
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_13__ {int lParam; int state; } ;
struct TYPE_10__ {int y; int x; } ;
struct TYPE_9__ {int mask; int lParam; int state; TYPE_5__* hItem; } ;
struct TYPE_12__ {int hdr; TYPE_2__ ptDrag; TYPE_1__ itemNew; scalar_t__ action; } ;
struct TYPE_11__ {int y; int x; } ;
typedef int TREEVIEW_INFO ;
typedef TYPE_3__ POINT ;
typedef TYPE_4__ NMTREEVIEWW ;
typedef TYPE_5__* HTREEITEM ;
typedef int BOOL ;


 int FUNC_0 (char*,int ,TYPE_5__*) ;
 int FUNC_1 (int const*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BOOL
FUNC_2(const TREEVIEW_INFO *VAR_3, UINT VAR_4,
          HTREEITEM VAR_5, POINT VAR_6)
{
    NMTREEVIEWW VAR_7;

    FUNC_0("code:%d dragitem:%p\n", VAR_4, VAR_5);

    VAR_7.action = 0;
    VAR_7.itemNew.mask = VAR_2 | VAR_1 | VAR_0;
    VAR_7.itemNew.hItem = VAR_5;
    VAR_7.itemNew.state = VAR_5->state;
    VAR_7.itemNew.lParam = VAR_5->lParam;

    VAR_7.ptDrag.x = VAR_6.x;
    VAR_7.ptDrag.y = VAR_6.y;

    return FUNC_1(VAR_3, VAR_4, &VAR_7.hdr);
}
