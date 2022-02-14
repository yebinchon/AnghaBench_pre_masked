
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int hdr; scalar_t__ lItemlParam; scalar_t__ uItemState; scalar_t__ dwItemSpec; int rc; int hdc; int dwDrawStage; } ;
struct TYPE_7__ {TYPE_3__ nmcd; scalar_t__ iLevel; int clrTextBk; int clrText; } ;
struct TYPE_6__ {int clrBk; int clrText; } ;
typedef TYPE_1__ TREEVIEW_INFO ;
typedef int RECT ;
typedef TYPE_2__ NMTVCUSTOMDRAW ;
typedef TYPE_3__ NMCUSTOMDRAW ;
typedef int HDC ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_1__ const*,int ,int *) ;

__attribute__((used)) static BOOL
FUNC_2(const TREEVIEW_INFO *VAR_1, DWORD VAR_2,
         HDC VAR_3, RECT VAR_4)
{
    NMTVCUSTOMDRAW VAR_5;
    NMCUSTOMDRAW *VAR_6;

    FUNC_0("drawstage:0x%x hdc:%p\n", VAR_2, VAR_3);

    VAR_6 = &VAR_5.nmcd;
    VAR_6->dwDrawStage = VAR_2;
    VAR_6->hdc = VAR_3;
    VAR_6->rc = VAR_4;
    VAR_6->dwItemSpec = 0;
    VAR_6->uItemState = 0;
    VAR_6->lItemlParam = 0;
    VAR_5.clrText = VAR_1->clrText;
    VAR_5.clrTextBk = VAR_1->clrBk;
    VAR_5.iLevel = 0;

    return FUNC_1(VAR_1, VAR_0, &VAR_5.nmcd.hdr);
}
