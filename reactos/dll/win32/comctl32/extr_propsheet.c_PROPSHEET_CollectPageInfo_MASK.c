
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WORD ;
typedef char WCHAR ;
struct TYPE_13__ {scalar_t__ hIcon; int pszIcon; } ;
struct TYPE_10__ {scalar_t__ pszTemplate; int * pResource; } ;
struct TYPE_16__ {int dwFlags; char* pszTitle; TYPE_4__ u2; int hInstance; TYPE_1__ u; scalar_t__ pfnCallback; } ;
struct TYPE_15__ {int signature; } ;
struct TYPE_11__ {int dwFlags; } ;
struct TYPE_14__ {int width; int height; scalar_t__ hImageList; TYPE_3__* proppage; TYPE_2__ ppshheader; void* hasHelp; } ;
struct TYPE_12__ {int useCallback; int hasHelp; int hasIcon; int const* pszText; void* isDirty; scalar_t__ hwndPage; scalar_t__ hpage; } ;
typedef TYPE_5__ PropSheetInfo ;
typedef TYPE_6__ MyDLGTEMPLATEEX ;
typedef int LPWSTR ;
typedef int LPSTR ;
typedef int LPCSTR ;
typedef TYPE_7__* LPCPROPSHEETPAGEW ;
typedef int HRSRC ;
typedef scalar_t__ HPROPSHEETPAGE ;
typedef scalar_t__ HICON ;
typedef int HGLOBAL ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef int DLGTEMPLATE ;
typedef void* BOOL ;


 int FUNC_0 (char*) ;
 void* VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int,int,int ,int,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int ,int ,int ,int,int,int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,char*,int ) ;
 int * FUNC_10 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_11 (char*,...) ;
 void* VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_12 (int const*) ;
 int const* FUNC_13 (char const*) ;
 int FUNC_14 (int const*) ;

__attribute__((used)) static BOOL FUNC_15(LPCPROPSHEETPAGEW VAR_24,
                               PropSheetInfo * VAR_25,
                               int VAR_26, BOOL VAR_27)
{
  const DLGTEMPLATE* VAR_28;
  const WORD* VAR_29;
  DWORD VAR_30;
  int VAR_31, VAR_32;

  if (!VAR_24)
    return VAR_0;

  FUNC_11("\n");
  VAR_25->proppage[VAR_26].hpage = (HPROPSHEETPAGE)VAR_24;
  VAR_25->proppage[VAR_26].hwndPage = 0;
  VAR_25->proppage[VAR_26].isDirty = VAR_0;




  VAR_30 = VAR_24->dwFlags;
  VAR_25->proppage[VAR_26].useCallback = (VAR_30 & VAR_12) && (VAR_24->pfnCallback);
  VAR_25->proppage[VAR_26].hasHelp = VAR_30 & VAR_9;
  VAR_25->proppage[VAR_26].hasIcon = VAR_30 & (VAR_15 | VAR_16);


  if (VAR_25->proppage[VAR_26].hasHelp)
    VAR_25->hasHelp = VAR_21;




  if (VAR_30 & VAR_8)
    VAR_28 = VAR_24->u.pResource;
  else if(VAR_30 & VAR_11 )
  {
    HRSRC VAR_33 = FUNC_2(VAR_24->hInstance,
                                    VAR_24->u.pszTemplate,
                                    (LPWSTR)VAR_18);
    HGLOBAL VAR_34 = FUNC_8(VAR_24->hInstance,
                                     VAR_33);
    VAR_28 = FUNC_10(VAR_34);
  }
  else
  {
    HRSRC VAR_35 = FUNC_1(VAR_24->hInstance,
                                    (LPCSTR)VAR_24->u.pszTemplate,
                                    (LPSTR)VAR_18);
    HGLOBAL VAR_36 = FUNC_8(VAR_24->hInstance,
                                     VAR_35);
    VAR_28 = FUNC_10(VAR_36);
  }




  if (!VAR_28)
      return VAR_0;

  VAR_29 = (const WORD *)VAR_28;

  if (((const MyDLGTEMPLATEEX*)VAR_28)->signature == 0xFFFF)
  {


    VAR_29++;
    VAR_29++;
    VAR_29 += 2;
    VAR_29 += 2;
    VAR_29 += 2;
  }
  else
  {


    VAR_29 += 2;
    VAR_29 += 2;
  }

  VAR_29++;
  VAR_29++;
  VAR_29++;
  VAR_31 = (WORD)*VAR_29; VAR_29++;
  VAR_32 = (WORD)*VAR_29; VAR_29++;

  if (VAR_24->dwFlags & (VAR_14 | VAR_13))
    VAR_25->ppshheader.dwFlags |= VAR_4;





  if ((VAR_25->ppshheader.dwFlags & (VAR_7 | VAR_6)) &&
      (VAR_25->ppshheader.dwFlags & VAR_4) &&
      !(VAR_30 & VAR_10))
  {
      VAR_32 += 2 * VAR_23 + VAR_22;
      VAR_31 += 2 * VAR_23;
  }
  if (VAR_25->ppshheader.dwFlags & VAR_5)
  {
      VAR_32 += 2 * VAR_23;
      VAR_31 += 2 * VAR_23;
  }


  if (VAR_27)
  {
      if (VAR_31 > VAR_25->width)
        VAR_25->width = VAR_31;

      if (VAR_32 > VAR_25->height)
        VAR_25->height = VAR_32;
  }


  switch ((WORD)*VAR_29)
  {
    case 0x0000:
      VAR_29++;
      break;
    case 0xffff:
      VAR_29 += 2;
      break;
    default:
      VAR_29 += FUNC_14( VAR_29 ) + 1;
      break;
  }


  switch ((WORD)*VAR_29)
  {
    case 0x0000:
      VAR_29++;
      break;
    case 0xffff:
      VAR_29 += 2;
      break;
    default:
      VAR_29 += FUNC_14( VAR_29 ) + 1;
      break;
  }


  VAR_25->proppage[VAR_26].pszText = VAR_29;
  FUNC_11("Tab %d %s\n",VAR_26,FUNC_12( VAR_29 ));

  if (VAR_30 & VAR_17)
  {
    WCHAR VAR_37[256];
    const WCHAR *VAR_38;
    static const WCHAR VAR_39[] = { '(','n','u','l','l',')',0 };

    if (FUNC_4( VAR_24->pszTitle ))
    {
      if (FUNC_9( VAR_24->hInstance, (DWORD_PTR)VAR_24->pszTitle, VAR_37, FUNC_0(VAR_37)))
        VAR_38 = VAR_37;
      else if (*VAR_29)
        VAR_38 = VAR_29;
      else
        VAR_38 = VAR_39;
    }
    else
      VAR_38 = VAR_24->pszTitle;

    VAR_25->proppage[VAR_26].pszText = FUNC_13( VAR_38 );
  }




  if ((VAR_30 & VAR_15) || (VAR_30 & VAR_16))
  {
    HICON VAR_40;
    int VAR_41 = FUNC_3(VAR_19);
    int VAR_42 = FUNC_3(VAR_20);

    if (VAR_30 & VAR_16)
      VAR_40 = FUNC_7(VAR_24->hInstance, VAR_24->u2.pszIcon, VAR_2,
                         VAR_41, VAR_42, VAR_3);
    else
      VAR_40 = VAR_24->u2.hIcon;

    if ( VAR_40 )
    {
      if (VAR_25->hImageList == 0 )
 VAR_25->hImageList = FUNC_6(VAR_41, VAR_42, VAR_1, 1, 1);

      FUNC_5(VAR_25->hImageList, VAR_40);
    }

  }

  return VAR_21;
}
