
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_14__ {int hWnd; scalar_t__* cTempText1; } ;
typedef TYPE_3__ TreeListData ;
struct TYPE_17__ {int uState; int lParam; } ;
struct TYPE_16__ {int uState; } ;
struct TYPE_13__ {unsigned int mask; int state; int stateMask; int iImage; unsigned int cChildren; int cchTextMax; scalar_t__* pszText; void* iSelectedImage; scalar_t__ hItem; int lParam; } ;
struct TYPE_12__ {int idFrom; int hwndFrom; int code; } ;
struct TYPE_15__ {TYPE_2__ item; TYPE_1__ hdr; } ;
typedef int TCHAR ;
typedef TYPE_4__ NMTVDISPINFO ;
typedef scalar_t__* LPCTSTR ;
typedef int LPARAM ;
typedef scalar_t__ HTREEITEM ;
typedef TYPE_5__ ExtraItem ;
typedef TYPE_6__ BaseItem ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 void* VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_10 ;
 unsigned int FUNC_5 (scalar_t__*) ;

__attribute__((used)) static void FUNC_6(TreeListData *VAR_11, BaseItem *VAR_12, ExtraItem *VAR_13, unsigned VAR_14, unsigned VAR_15, unsigned VAR_16, int *VAR_17, unsigned *VAR_18, LPCTSTR *VAR_19) {

 NMTVDISPINFO VAR_20;

 VAR_20.item.mask = VAR_2 | VAR_4 | VAR_5 | VAR_6 | VAR_16;
 VAR_20.item.lParam = VAR_12->lParam;
 VAR_20.item.hItem = (HTREEITEM)(ULONG_PTR)VAR_14;
 VAR_20.item.state = VAR_13->uState;
 VAR_20.item.state |= (VAR_12->uState & VAR_8);
 VAR_20.item.stateMask = 0xFFFFFFFF;
 VAR_20.item.iImage = VAR_1;
 VAR_20.item.iSelectedImage = VAR_1;
 VAR_20.item.cChildren = VAR_15;

 if(VAR_16 & VAR_7) {
  VAR_11->cTempText1[sizeof(VAR_11->cTempText1) / sizeof(TCHAR) - 1] = 0;
  VAR_11->cTempText1[0] = 0;
  VAR_20.item.pszText = VAR_11->cTempText1;
  VAR_20.item.cchTextMax = sizeof(VAR_11->cTempText1) / sizeof(TCHAR) - 1;
 } else {
  VAR_20.item.pszText = 0;
  VAR_20.item.cchTextMax = 0;
 }

 VAR_20.hdr.hwndFrom = VAR_11->hWnd;
 VAR_20.hdr.idFrom = FUNC_1(VAR_11->hWnd, VAR_0);
 VAR_20.hdr.code = VAR_9;

 FUNC_4(VAR_11);
 FUNC_3(FUNC_0(VAR_20.hdr.hwndFrom), VAR_10, VAR_20.hdr.idFrom, (LPARAM)&VAR_20);
 FUNC_2(VAR_11);


 if(VAR_16 & VAR_3)
  *VAR_17 = VAR_20.item.iImage;
 if(VAR_16 & VAR_7) {
  *VAR_19 = VAR_20.item.pszText;
  *VAR_18 = FUNC_5(VAR_20.item.pszText);
 }

}
