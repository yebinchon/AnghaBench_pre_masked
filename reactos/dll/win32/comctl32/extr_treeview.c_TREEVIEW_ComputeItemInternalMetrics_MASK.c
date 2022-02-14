
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {int dwStyle; int uIndent; scalar_t__ normalImageWidth; int stateImageWidth; scalar_t__ scrollX; } ;
struct TYPE_5__ {int iLevel; scalar_t__ imageOffset; scalar_t__ textOffset; int state; scalar_t__ stateOffset; scalar_t__ linesOffset; } ;
typedef TYPE_1__ TREEVIEW_ITEM ;
typedef TYPE_2__ TREEVIEW_INFO ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static VOID
FUNC_1(const TREEVIEW_INFO *VAR_3, TREEVIEW_ITEM *VAR_4)
{

    BOOL VAR_5 = ((VAR_3->dwStyle & (VAR_2|VAR_1|VAR_0))
  > VAR_2);

    VAR_4->linesOffset = VAR_3->uIndent * (VAR_5 ? VAR_4->iLevel : VAR_4->iLevel - 1)
 - VAR_3->scrollX;
    VAR_4->stateOffset = VAR_4->linesOffset + VAR_3->uIndent;
    VAR_4->imageOffset = VAR_4->stateOffset
 + (FUNC_0(VAR_4->state) ? VAR_3->stateImageWidth : 0);
    VAR_4->textOffset = VAR_4->imageOffset + VAR_3->normalImageWidth;
}
