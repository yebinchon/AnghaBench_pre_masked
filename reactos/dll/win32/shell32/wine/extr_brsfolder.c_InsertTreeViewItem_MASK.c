
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int hwndTreeView; } ;
typedef TYPE_2__ browse_info ;
typedef int WCHAR ;
struct TYPE_14__ {void* lpifq; int * pEnumIL; void* lpi; int * lpsfParent; } ;
struct TYPE_12__ {int mask; int cChildren; int cchTextMax; scalar_t__ lParam; int * pszText; } ;
struct TYPE_10__ {TYPE_3__ item; } ;
struct TYPE_13__ {int * hParent; int * hInsertAfter; TYPE_1__ u; } ;
typedef int TV_ITEMDATA ;
typedef TYPE_3__ TVITEMW ;
typedef TYPE_4__ TVINSERTSTRUCTW ;
typedef TYPE_5__* LPTV_ITEMDATA ;
typedef scalar_t__ LPCITEMIDLIST ;
typedef scalar_t__ LPARAM ;
typedef int IShellFolder ;
typedef int IEnumIDList ;
typedef int * HTREEITEM ;


 int FUNC_0 (int *,scalar_t__,int ,int *) ;
 int FUNC_1 (void*,TYPE_3__*) ;
 void* FUNC_2 (scalar_t__) ;
 void* FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 TYPE_5__* FUNC_5 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_6 (int ,TYPE_4__*) ;

__attribute__((used)) static HTREEITEM FUNC_7( browse_info *VAR_7, IShellFolder * VAR_8,
    LPCITEMIDLIST VAR_9, LPCITEMIDLIST VAR_10, IEnumIDList* VAR_11,
    HTREEITEM VAR_12)
{
 TVITEMW VAR_13;
 TVINSERTSTRUCTW VAR_14;
 WCHAR VAR_15[VAR_0];
 LPTV_ITEMDATA VAR_16=0;

 VAR_13.mask = VAR_6 | VAR_3 | VAR_5 | VAR_4;

 VAR_13.cChildren= VAR_11 ? 1 : 0;
 VAR_13.mask |= VAR_2;

 if (!FUNC_0(VAR_8, VAR_9, VAR_1, VAR_15))
     return ((void*)0);

 VAR_16 = FUNC_5( sizeof(TV_ITEMDATA) );
 if (!VAR_16)
     return ((void*)0);

 VAR_13.pszText = VAR_15;
 VAR_13.cchTextMax = VAR_0;
 VAR_13.lParam = (LPARAM)VAR_16;

 FUNC_4(VAR_8);
 VAR_16->lpsfParent = VAR_8;
 VAR_16->lpi = FUNC_2(VAR_9);
 VAR_16->lpifq = VAR_10 ? FUNC_3(VAR_10, VAR_9) : FUNC_2(VAR_9);
 VAR_16->pEnumIL = VAR_11;
 FUNC_1(VAR_16->lpifq, &VAR_13);

 VAR_14.u.item = VAR_13;
 VAR_14.hInsertAfter = ((void*)0);
 VAR_14.hParent = VAR_12;

 return FUNC_6( VAR_7->hwndTreeView, &VAR_14 );
}
