
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_15__ {int dwStyle; size_t firstDay; TYPE_1__* calendars; int * pens; scalar_t__ height_increment; int * colors; int * brushes; } ;
struct TYPE_14__ {scalar_t__ bottom; int right; scalar_t__ top; } ;
struct TYPE_13__ {size_t wDay; int wMonth; int wYear; } ;
struct TYPE_12__ {TYPE_3__ weeknums; TYPE_2__ month; } ;
typedef TYPE_2__ SYSTEMTIME ;
typedef TYPE_3__ RECT ;
typedef int PAINTSTRUCT ;
typedef TYPE_4__ MONTHCAL_INFO ;
typedef size_t INT ;
typedef int HPEN ;
typedef int HDC ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int,TYPE_3__*,int) ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_3__*,int ) ;
 int FUNC_3 (int ,int ,char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_4__ const*,TYPE_2__*) ;
 scalar_t__ FUNC_7 (size_t,int) ;
 int FUNC_8 (int ,int ,scalar_t__,int *) ;
 int FUNC_9 (TYPE_3__*,int ,scalar_t__) ;
 size_t VAR_9 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*,size_t) ;
 size_t FUNC_13 (char*) ;
 int FUNC_14 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_15(const MONTHCAL_INFO *VAR_10, HDC VAR_11, const PAINTSTRUCT *VAR_12, INT VAR_13)
{
  const SYSTEMTIME *VAR_14 = &VAR_10->calendars[VAR_13].month;
  static const WCHAR VAR_15[] = { '%','d',0 };
  INT VAR_16, VAR_17, VAR_18, VAR_19;
  INT VAR_20, VAR_21;
  SYSTEMTIME VAR_22;
  WCHAR VAR_23[80];
  HPEN VAR_24;
  RECT VAR_25;

  if (!(VAR_10->dwStyle & VAR_8)) return;

  FUNC_6(VAR_10, &VAR_22);
  VAR_19 = VAR_22.wDay;
  VAR_22 = *VAR_14;

  VAR_21 = VAR_14->wMonth - 1;
  if(VAR_21 == 0) VAR_21 = 12;
  FUNC_3(VAR_6, VAR_5, VAR_23, FUNC_0(VAR_23));
  VAR_17 = FUNC_13(VAR_23);
  switch (VAR_17)
  {
    case 1: VAR_16 = 6;
 break;
    case 2: VAR_16 = 3;
 break;
    case 0: VAR_16 = 0;
        break;
    default:
        FUNC_12("Unknown LOCALE_IFIRSTWEEKOFYEAR value %d, defaulting to 0\n", VAR_17);
 VAR_16 = 0;
  }

  if (VAR_14->wMonth == 1)
  {

    VAR_22.wDay = VAR_22.wMonth = 1;
    VAR_18 = FUNC_5(&VAR_22, VAR_4);
    if ((VAR_10->firstDay - VAR_18) % 7 > VAR_16)
 VAR_17 = 1;
    else
    {
 VAR_17 = 0;
 for(VAR_20 = 0; VAR_20 < 11; VAR_20++)
    VAR_17 += FUNC_7(VAR_20+1, VAR_14->wYear - 1);

 VAR_17 += VAR_19 + 7;
 VAR_17 /= 7;
 VAR_22.wYear -= 1;
 VAR_18 = FUNC_5(&VAR_22, VAR_4);
 if ((VAR_10->firstDay - VAR_18) % 7 > VAR_16) VAR_17++;
    }
  }
  else
  {
    VAR_17 = 0;
    for(VAR_20 = 0; VAR_20 < VAR_21 - 1; VAR_20++)
 VAR_17 += FUNC_7(VAR_20+1, VAR_14->wYear);

    VAR_17 += VAR_19 + 7;
    VAR_17 /= 7;
    VAR_22.wDay = VAR_22.wMonth = 1;
    VAR_18 = FUNC_5(&VAR_22, VAR_4);
    if ((VAR_10->firstDay - VAR_18) % 7 > VAR_16) VAR_17++;
  }

  VAR_25 = VAR_10->calendars[VAR_13].weeknums;


  FUNC_2(VAR_11, &VAR_25, VAR_10->brushes[VAR_0]);
  FUNC_11(VAR_11, VAR_10->colors[VAR_7]);


  VAR_25.bottom = VAR_25.top + VAR_10->height_increment;

  for(VAR_20 = 0; VAR_20 < 6; VAR_20++) {
    if((VAR_20 == 0) && (VAR_17 > 50))
    {
        FUNC_14(VAR_23, VAR_15, VAR_17);
        VAR_17 = 0;
    }
    else if((VAR_20 == 5) && (VAR_17 > 47))
    {
 FUNC_14(VAR_23, VAR_15, 1);
    }
    else
 FUNC_14(VAR_23, VAR_15, VAR_17 + VAR_20);

    FUNC_1(VAR_11, VAR_23, -1, &VAR_25, VAR_1 | VAR_3 | VAR_2);
    FUNC_9(&VAR_25, 0, VAR_10->height_increment);
  }


  VAR_24 = FUNC_10(VAR_11, VAR_10->pens[VAR_9]);
  FUNC_8(VAR_11, VAR_10->calendars[VAR_13].weeknums.right, VAR_10->calendars[VAR_13].weeknums.top + 3 , ((void*)0));
  FUNC_4(VAR_11, VAR_10->calendars[VAR_13].weeknums.right, VAR_10->calendars[VAR_13].weeknums.bottom);
  FUNC_10(VAR_11, VAR_24);
}
