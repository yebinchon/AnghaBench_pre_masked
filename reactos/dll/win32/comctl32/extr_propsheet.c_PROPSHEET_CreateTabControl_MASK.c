
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nPages; TYPE_1__* proppage; scalar_t__ hImageList; } ;
struct TYPE_6__ {scalar_t__ pszText; int mask; int iImage; int cchTextMax; } ;
struct TYPE_5__ {scalar_t__ pszText; scalar_t__ hasIcon; } ;
typedef TYPE_2__ TCITEMW ;
typedef TYPE_3__ PropSheetInfo ;
typedef scalar_t__ LPWSTR ;
typedef int LPARAM ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static BOOL FUNC_3(HWND VAR_8,
                                       const PropSheetInfo * VAR_9)
{
  HWND VAR_10 = FUNC_0(VAR_8, VAR_0);
  TCITEMW VAR_11;
  int VAR_12, VAR_13;
  int VAR_14 = 0;

  FUNC_2("\n");
  VAR_11.mask = VAR_3;
  VAR_11.cchTextMax = VAR_1;

  VAR_13 = VAR_9->nPages;




  if (VAR_9->hImageList)
  {
    FUNC_1(VAR_10, VAR_5, 0, (LPARAM)VAR_9->hImageList);
  }

  FUNC_1(VAR_10, VAR_7, 0, 0);
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
  {
    if ( VAR_9->proppage[VAR_12].hasIcon )
    {
      VAR_11.mask |= VAR_2;
      VAR_11.iImage = VAR_14++;
    }
    else
    {
      VAR_11.mask &= ~VAR_2;
    }

    VAR_11.pszText = (LPWSTR) VAR_9->proppage[VAR_12].pszText;
    FUNC_1(VAR_10, VAR_4, VAR_12, (LPARAM)&VAR_11);
  }
  FUNC_1(VAR_10, VAR_7, 1, 0);

  return VAR_6;
}
