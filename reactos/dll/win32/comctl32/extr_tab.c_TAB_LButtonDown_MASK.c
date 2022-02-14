
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_14__ {int dwState; } ;
struct TYPE_13__ {short x; short y; } ;
struct TYPE_12__ {int dwStyle; int iSelected; int uNumItem; int hwnd; scalar_t__ hwndToolTip; } ;
typedef TYPE_1__ TAB_INFO ;
typedef int RECT ;
typedef TYPE_2__ POINT ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 TYPE_9__* FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int,int *,int *) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__,int *) ;
 int FUNC_8 (scalar_t__,int ,int ,int,int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (char*,int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static LRESULT
FUNC_12 (TAB_INFO *VAR_10, WPARAM VAR_11, LPARAM VAR_12)
{
  POINT VAR_13;
  INT VAR_14;
  UINT VAR_15;

  if (VAR_10->hwndToolTip)
    FUNC_8 (VAR_10->hwndToolTip, VAR_10->hwnd,
      VAR_9, VAR_11, VAR_12);

  if (!(VAR_10->dwStyle & VAR_6)) {
    FUNC_3 (VAR_10->hwnd);
  }

  if (VAR_10->hwndToolTip)
    FUNC_8 (VAR_10->hwndToolTip, VAR_10->hwnd,
      VAR_9, VAR_11, VAR_12);

  VAR_13.x = (short)FUNC_2(VAR_12);
  VAR_13.y = (short)FUNC_0(VAR_12);

  VAR_14 = FUNC_7 (VAR_10, VAR_13, &VAR_15);

  FUNC_11("On Tab, item %d\n", VAR_14);

  if ((VAR_14 != -1) && (VAR_10->iSelected != VAR_14))
  {
    if ((VAR_10->dwStyle & VAR_5) && (VAR_10->dwStyle & VAR_7) &&
        (VAR_11 & VAR_1))
    {
      RECT VAR_16;


      FUNC_5(VAR_10, VAR_14)->dwState ^= VAR_2;
      if (FUNC_6 (VAR_10, VAR_14, &VAR_16, ((void*)0)))
        FUNC_1 (VAR_10->hwnd, &VAR_16, VAR_8);
    }
    else
    {
      INT VAR_17;
      BOOL VAR_18 = VAR_0;


      for (VAR_17 = 0; VAR_17 < VAR_10->uNumItem; VAR_17++)
        if ((FUNC_5 (VAR_10, VAR_17)->dwState & VAR_2) &&
            (VAR_10->iSelected != VAR_17))
        {
          VAR_18 = VAR_8;
          break;
        }

      if (FUNC_9(VAR_10, VAR_4))
        return 0;

      if (VAR_18)
        FUNC_4 (VAR_10, VAR_0);
      else
        FUNC_10(VAR_10, VAR_14);

      FUNC_9(VAR_10, VAR_3);
    }
  }

  return 0;
}
