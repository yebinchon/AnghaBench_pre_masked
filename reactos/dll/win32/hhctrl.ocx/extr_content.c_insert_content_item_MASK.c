
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tvis ;
struct TYPE_11__ {scalar_t__ id; scalar_t__ child; int name; } ;
struct TYPE_8__ {int mask; void* iSelectedImage; void* iImage; scalar_t__ lParam; int pszText; scalar_t__ cchTextMax; } ;
struct TYPE_9__ {TYPE_1__ item; } ;
struct TYPE_10__ {int hInsertAfter; scalar_t__ hParent; TYPE_2__ u; } ;
typedef TYPE_3__ TVINSERTSTRUCTW ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;
typedef scalar_t__ HTREEITEM ;
typedef TYPE_4__ ContentItem ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_3(HWND VAR_8, ContentItem *VAR_9, ContentItem *VAR_10)
{
    TVINSERTSTRUCTW VAR_11;

    FUNC_2(&VAR_11, 0, sizeof(VAR_11));
    VAR_11.u.item.mask = VAR_5|VAR_3|VAR_2|VAR_4;
    VAR_11.u.item.cchTextMax = FUNC_1(VAR_10->name)+1;
    VAR_11.u.item.pszText = VAR_10->name;
    VAR_11.u.item.lParam = (LPARAM)VAR_10;
    VAR_11.u.item.iImage = VAR_10->child ? VAR_1 : VAR_0;
    VAR_11.u.item.iSelectedImage = VAR_10->child ? VAR_1 : VAR_0;
    VAR_11.hParent = VAR_9 ? VAR_9->id : 0;
    VAR_11.hInsertAfter = VAR_6;

    VAR_10->id = (HTREEITEM)FUNC_0(VAR_8, VAR_7, 0, (LPARAM)&VAR_11);
}
