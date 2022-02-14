
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_12__ {int * pszCaption; } ;
struct TYPE_9__ {scalar_t__ nStartPage; } ;
struct TYPE_11__ {int dwFlags; TYPE_1__ u2; int nPages; int pszCaption; scalar_t__ pfnCallback; int hInstance; int hwndParent; int dwSize; } ;
struct TYPE_10__ {int useCallback; scalar_t__ active_page; int nPages; TYPE_4__ ppshheader; } ;
typedef TYPE_2__ PropSheetInfo ;
typedef int PROPSHEETHEADERA ;
typedef TYPE_3__* LPCPROPSHEETHEADERA ;
typedef int DWORD ;


 int * FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int,int *,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void FUNC_8(LPCPROPSHEETHEADERA VAR_4,
                                       PropSheetInfo * VAR_5)
{
  DWORD VAR_6 = FUNC_7(VAR_4->dwSize,sizeof(PROPSHEETHEADERA));
  DWORD VAR_7 = VAR_4->dwFlags;

  VAR_5->useCallback = (VAR_7 & VAR_2 )&& (VAR_4->pfnCallback);

  FUNC_6(&VAR_5->ppshheader,VAR_4,VAR_6);
  FUNC_4("\n** PROPSHEETHEADER **\ndwSize\t\t%d\ndwFlags\t\t%08x\nhwndParent\t%p\nhInstance\t%p\npszCaption\t'%s'\nnPages\t\t%d\npfnCallback\t%p\n",
 VAR_4->dwSize, VAR_4->dwFlags, VAR_4->hwndParent, VAR_4->hInstance,
 FUNC_5(VAR_4->pszCaption), VAR_4->nPages, VAR_4->pfnCallback);

  if (VAR_4->dwFlags & VAR_1)
     VAR_5->ppshheader.pszCaption = ((void*)0);
  else
  {
     if (!FUNC_1(VAR_4->pszCaption))
     {
        int VAR_8 = FUNC_2(VAR_0, 0, VAR_4->pszCaption, -1, ((void*)0), 0);
        WCHAR *VAR_9 = FUNC_0( VAR_8*sizeof (WCHAR) );

        FUNC_2(VAR_0, 0, VAR_4->pszCaption, -1, VAR_9, VAR_8);
        VAR_5->ppshheader.pszCaption = VAR_9;
     }
  }
  VAR_5->nPages = VAR_4->nPages;

  if (VAR_7 & VAR_3)
  {
    FUNC_4("PSH_USEPSTARTPAGE is on\n");
    VAR_5->active_page = 0;
  }
  else
    VAR_5->active_page = VAR_4->u2.nStartPage;

  FUNC_3(VAR_5, VAR_7);
}
