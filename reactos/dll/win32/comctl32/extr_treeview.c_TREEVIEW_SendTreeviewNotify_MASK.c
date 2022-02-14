
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_12__ {int pszText; } ;
struct TYPE_9__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_11__ {TYPE_6__ itemNew; TYPE_6__ itemOld; int hdr; TYPE_1__ ptDrag; int action; } ;
struct TYPE_10__ {int bNtfUnicode; } ;
typedef TYPE_2__ TREEVIEW_INFO ;
typedef TYPE_3__ NMTREEVIEWW ;
typedef int HTREEITEM ;
typedef int BOOL ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__ const*,int ,int *) ;
 int FUNC_2 (TYPE_2__ const*,int ,TYPE_6__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;

__attribute__((used)) static BOOL
FUNC_5(const TREEVIEW_INFO *VAR_0, UINT VAR_1, UINT VAR_2,
       UINT VAR_3, HTREEITEM VAR_4, HTREEITEM VAR_5)
{
    NMTREEVIEWW VAR_6;
    BOOL VAR_7;

    FUNC_0("code:%d action:0x%x olditem:%p newitem:%p\n",
   VAR_1, VAR_2, VAR_4, VAR_5);

    FUNC_4(&VAR_6, 0, sizeof(NMTREEVIEWW));
    VAR_6.action = VAR_2;

    if (VAR_4)
 FUNC_2(VAR_0, VAR_3, &VAR_6.itemOld, VAR_4);

    if (VAR_5)
 FUNC_2(VAR_0, VAR_3, &VAR_6.itemNew, VAR_5);

    VAR_6.ptDrag.x = 0;
    VAR_6.ptDrag.y = 0;

    VAR_7 = FUNC_1(VAR_0, VAR_1, &VAR_6.hdr);
    if (!VAR_0->bNtfUnicode)
    {
        FUNC_3(VAR_6.itemOld.pszText);
        FUNC_3(VAR_6.itemNew.pszText);
    }
    return VAR_7;
}
