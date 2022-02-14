
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef char WCHAR ;
struct TYPE_11__ {int wDay; } ;
struct TYPE_14__ {int hFont; int hBoldFont; int * brushes; int * colors; TYPE_10__ maxSel; TYPE_10__ minSel; } ;
struct TYPE_13__ {int rcPaint; } ;
struct TYPE_12__ {int wDay; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int RECT ;
typedef TYPE_2__ PAINTSTRUCT ;
typedef TYPE_3__ MONTHCAL_INFO ;
typedef int INT ;
typedef int HDC ;
typedef int COLORREF ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int *,int) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *,int *,int *) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_1__ const*,TYPE_10__*) ;
 int FUNC_4 (TYPE_3__ const*,TYPE_1__ const*,int *,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,int ,...) ;
 int VAR_6 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,char const*,int ) ;

__attribute__((used)) static void FUNC_12(const MONTHCAL_INFO *VAR_7, HDC VAR_8, const SYSTEMTIME *VAR_9,
                             int VAR_10, const PAINTSTRUCT *VAR_11)
{
  static const WCHAR VAR_12[] = { '%','d',0 };
  WCHAR VAR_13[10];
  RECT VAR_14, VAR_15;
  COLORREF VAR_16 = 0;
  COLORREF VAR_17 = 0;
  INT VAR_18, VAR_19;



  FUNC_4(VAR_7, VAR_9, &VAR_14, -1);
  if(!FUNC_2(&VAR_15, &(VAR_11->rcPaint), &VAR_14)) return;

  if ((FUNC_3(VAR_9, &VAR_7->minSel) >= 0) &&
      (FUNC_3(VAR_9, &VAR_7->maxSel) <= 0))
  {
    FUNC_9("%d %d %d\n", VAR_9->wDay, VAR_7->minSel.wDay, VAR_7->maxSel.wDay);
    FUNC_9("%s\n", FUNC_10(&VAR_14));
    VAR_16 = FUNC_8(VAR_8, VAR_7->colors[VAR_4]);
    VAR_17 = FUNC_6(VAR_8, VAR_7->colors[VAR_5]);
    FUNC_1(VAR_8, &VAR_14, VAR_7->brushes[VAR_0]);

    VAR_19 = 1;
  }
  else
    VAR_19 = 0;

  FUNC_5(VAR_8, VAR_10 ? VAR_7->hBoldFont : VAR_7->hFont);

  VAR_18 = FUNC_7(VAR_8, VAR_6);
  FUNC_11(VAR_13, VAR_12, VAR_9->wDay);
  FUNC_0(VAR_8, VAR_13, -1, &VAR_14, VAR_1 | VAR_3 | VAR_2 );
  FUNC_7(VAR_8, VAR_18);

  if (VAR_19)
  {
    FUNC_8(VAR_8, VAR_16);
    FUNC_6(VAR_8, VAR_17);
  }
}
