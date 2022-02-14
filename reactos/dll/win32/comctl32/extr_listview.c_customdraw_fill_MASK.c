
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ nHotItem; int clrText; int clrTextBk; } ;
struct TYPE_11__ {scalar_t__ iItem; int state; int lParam; int iSubItem; } ;
struct TYPE_9__ {scalar_t__ dwItemSpec; int lItemlParam; int uItemState; int rc; int hdc; } ;
struct TYPE_10__ {TYPE_1__ nmcd; int iSubItem; int clrText; int clrTextBk; } ;
typedef int RECT ;
typedef TYPE_2__ NMLVCUSTOMDRAW ;
typedef TYPE_3__ LVITEMW ;
typedef TYPE_4__ LISTVIEW_INFO ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_1(NMLVCUSTOMDRAW *VAR_5, const LISTVIEW_INFO *VAR_6, HDC VAR_7,
       const RECT *VAR_8, const LVITEMW *VAR_9)
{
    FUNC_0(VAR_5, sizeof(NMLVCUSTOMDRAW));
    VAR_5->nmcd.hdc = VAR_7;
    VAR_5->nmcd.rc = *VAR_8;
    VAR_5->clrTextBk = VAR_6->clrTextBk;
    VAR_5->clrText = VAR_6->clrText;
    if (!VAR_9) return;
    VAR_5->nmcd.dwItemSpec = VAR_9->iItem + 1;
    VAR_5->iSubItem = VAR_9->iSubItem;
    if (VAR_9->state & VAR_4) VAR_5->nmcd.uItemState |= VAR_2;
    if (VAR_9->state & VAR_3) VAR_5->nmcd.uItemState |= VAR_0;
    if (VAR_9->iItem == VAR_6->nHotItem) VAR_5->nmcd.uItemState |= VAR_1;
    VAR_5->nmcd.lItemlParam = VAR_9->lParam;
}
