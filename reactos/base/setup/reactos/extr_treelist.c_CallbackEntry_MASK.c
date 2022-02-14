
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_12__ {int hWnd; scalar_t__* cTempText1; scalar_t__* cTempText2; } ;
typedef TYPE_3__ TreeListData ;
struct TYPE_14__ {int uState; scalar_t__ iTextPixels; int bFlags; int uFirstChild; int lParam; } ;
struct TYPE_11__ {unsigned int mask; int state; int stateMask; int iImage; int iSelectedImage; int cChildren; int cchTextMax; scalar_t__* pszText; scalar_t__ hItem; int lParam; } ;
struct TYPE_10__ {int idFrom; int hwndFrom; int code; } ;
struct TYPE_13__ {TYPE_2__ item; TYPE_1__ hdr; } ;
typedef int TCHAR ;
typedef TYPE_4__ NMTVDISPINFO ;
typedef scalar_t__* LPCTSTR ;
typedef int LPARAM ;
typedef scalar_t__ HTREEITEM ;
typedef TYPE_5__ BaseItem ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_14 ;
 unsigned int FUNC_5 (scalar_t__*) ;

__attribute__((used)) static void FUNC_6(TreeListData *VAR_15, BaseItem *VAR_16, unsigned VAR_17, unsigned VAR_18, int *VAR_19, unsigned *VAR_20, LPCTSTR *VAR_21) {

 NMTVDISPINFO VAR_22;

 VAR_22.item.mask = VAR_4 | VAR_6 | VAR_8 | VAR_18;
 VAR_22.item.lParam = VAR_16->lParam;
 VAR_22.item.hItem = (HTREEITEM)(ULONG_PTR)VAR_17;
 VAR_22.item.state = VAR_16->uState;
 VAR_22.item.stateMask = 0xFFFFFFFF;
 VAR_22.item.iImage = VAR_2;
 VAR_22.item.iSelectedImage = VAR_2;
 VAR_22.item.cChildren = VAR_1;

 if(VAR_18 & VAR_9) {
  if(*VAR_20) {
   VAR_15->cTempText2[sizeof(VAR_15->cTempText2) / sizeof(TCHAR) - 1] = 0;
   VAR_15->cTempText2[0] = 0;
   VAR_22.item.pszText = VAR_15->cTempText2;
   VAR_22.item.cchTextMax = sizeof(VAR_15->cTempText2) / sizeof(TCHAR) - 1;
  } else {
   VAR_15->cTempText1[sizeof(VAR_15->cTempText1) / sizeof(TCHAR) - 1] = 0;
   VAR_15->cTempText1[0] = 0;
   VAR_22.item.pszText = VAR_15->cTempText1;
   VAR_22.item.cchTextMax = sizeof(VAR_15->cTempText1) / sizeof(TCHAR) - 1;
  }
 } else {
  VAR_22.item.pszText = 0;
  VAR_22.item.cchTextMax = 0;
 }

 VAR_22.hdr.hwndFrom = VAR_15->hWnd;
 VAR_22.hdr.idFrom = FUNC_1(VAR_15->hWnd, VAR_0);
 VAR_22.hdr.code = VAR_13;

 FUNC_4(VAR_15);
 FUNC_3(FUNC_0(VAR_22.hdr.hwndFrom), VAR_14, VAR_22.hdr.idFrom, (LPARAM)&VAR_22);
 FUNC_2(VAR_15);

 if(VAR_18 & VAR_5) {
  if(!(VAR_16->uState & VAR_10))
   *VAR_19 = VAR_22.item.iImage;
 } else
  if(VAR_18 & VAR_7) {
   if(VAR_16->uState & VAR_10)
    *VAR_19 = VAR_22.item.iSelectedImage;
  }

 if(VAR_18 & VAR_3) {
  switch(VAR_22.item.cChildren) {
   case 0:
    VAR_16->bFlags &= ~VAR_11;
    VAR_16->bFlags |= VAR_12;
    break;

   case 1:
    VAR_16->bFlags &= ~VAR_12;
    VAR_16->bFlags |= VAR_11;
    break;

   default
     :
    VAR_16->bFlags |= VAR_12;

    if(VAR_16->uFirstChild)
     VAR_16->bFlags |= VAR_11;
    else
     VAR_16->bFlags &= ~VAR_11;
  }
 }

 if(VAR_18 & VAR_9) {
  *VAR_21 = VAR_22.item.pszText;
  *VAR_20 = FUNC_5(VAR_22.item.pszText);
  VAR_16->iTextPixels = 0;
 }

}
