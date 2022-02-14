
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int * pszCaption; } ;
struct TYPE_9__ {scalar_t__ nStartPage; } ;
struct TYPE_11__ {int dwFlags; TYPE_1__ u2; int nPages; int pszCaption; scalar_t__ pfnCallback; int hInstance; int hwndParent; int dwSize; } ;
struct TYPE_10__ {int useCallback; scalar_t__ active_page; int nPages; TYPE_4__ ppshheader; } ;
typedef TYPE_2__ PropSheetInfo ;
typedef int PROPSHEETHEADERW ;
typedef TYPE_3__* LPCPROPSHEETHEADERW ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(LPCPROPSHEETHEADERW VAR_3,
                                       PropSheetInfo * VAR_4)
{
  DWORD VAR_5 = FUNC_6(VAR_3->dwSize,sizeof(PROPSHEETHEADERW));
  DWORD VAR_6 = VAR_3->dwFlags;

  VAR_4->useCallback = (VAR_6 & VAR_1) && (VAR_3->pfnCallback);

  FUNC_5(&VAR_4->ppshheader,VAR_3,VAR_5);
  FUNC_2("\n** PROPSHEETHEADER **\ndwSize\t\t%d\ndwFlags\t\t%08x\nhwndParent\t%p\nhInstance\t%p\npszCaption\t%s\nnPages\t\t%d\npfnCallback\t%p\n",
      VAR_3->dwSize, VAR_3->dwFlags, VAR_3->hwndParent, VAR_3->hInstance, FUNC_3(VAR_3->pszCaption), VAR_3->nPages, VAR_3->pfnCallback);

  if (VAR_3->dwFlags & VAR_0)
     VAR_4->ppshheader.pszCaption = ((void*)0);
  else
  {
     if (!FUNC_0(VAR_3->pszCaption))
       VAR_4->ppshheader.pszCaption = FUNC_4( VAR_3->pszCaption );
  }
  VAR_4->nPages = VAR_3->nPages;

  if (VAR_6 & VAR_2)
  {
    FUNC_2("PSH_USEPSTARTPAGE is on\n");
    VAR_4->active_page = 0;
  }
  else
    VAR_4->active_page = VAR_3->u2.nStartPage;

  FUNC_1(VAR_4, VAR_6);
}
