
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_16__ {scalar_t__ top; scalar_t__ bottom; } ;
struct TYPE_23__ {size_t firstDay; int* monthdayState; int * colors; scalar_t__ width_increment; TYPE_5__* calendars; int hFont; scalar_t__ textHeight; int * pens; int * brushes; TYPE_1__ todayrect; } ;
struct TYPE_22__ {scalar_t__ left; scalar_t__ right; scalar_t__ bottom; } ;
struct TYPE_21__ {int wDay; int wYear; int wMonth; } ;
struct TYPE_19__ {scalar_t__ right; } ;
struct TYPE_18__ {scalar_t__ left; scalar_t__ right; scalar_t__ bottom; } ;
struct TYPE_17__ {scalar_t__ bottom; } ;
struct TYPE_20__ {TYPE_7__ wdays; TYPE_4__ weeknums; TYPE_3__ days; TYPE_2__ title; TYPE_6__ month; } ;
typedef TYPE_6__ SYSTEMTIME ;
typedef TYPE_7__ RECT ;
typedef int PAINTSTRUCT ;
typedef TYPE_8__ MONTHCAL_INFO ;
typedef size_t INT ;
typedef int HPEN ;
typedef int HDC ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int ,TYPE_7__*,int) ;
 int FUNC_2 (int ,TYPE_7__*,int ) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_4 (TYPE_8__ const*,int ,TYPE_6__*,int,int const*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__,int *) ;
 int FUNC_7 (TYPE_7__*,scalar_t__,int ) ;
 size_t VAR_7 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_8__ const*,size_t,int *,int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(const MONTHCAL_INFO *VAR_8, HDC VAR_9, const PAINTSTRUCT *VAR_10, INT VAR_11)
{
  const SYSTEMTIME *VAR_12 = &VAR_8->calendars[VAR_11].month;
  INT VAR_13, VAR_14;
  UINT VAR_15;
  RECT VAR_16, VAR_17;
  SYSTEMTIME VAR_18;
  WCHAR VAR_19[80];
  HPEN VAR_20;
  int VAR_21;


  VAR_17 = VAR_8->calendars[VAR_11].wdays;
  VAR_17.bottom = VAR_8->calendars[VAR_11].days.bottom +
                          (VAR_8->todayrect.bottom - VAR_8->todayrect.top);

  FUNC_2(VAR_9, &VAR_17, VAR_8->brushes[VAR_0]);


  VAR_20 = FUNC_8(VAR_9, VAR_8->pens[VAR_7]);
  FUNC_6(VAR_9, VAR_8->calendars[VAR_11].days.left + 3,
                VAR_8->calendars[VAR_11].title.bottom + VAR_8->textHeight + 1, ((void*)0));
  FUNC_3(VAR_9, VAR_8->calendars[VAR_11].days.right - 3,
              VAR_8->calendars[VAR_11].title.bottom + VAR_8->textHeight + 1);
  FUNC_8(VAR_9, VAR_20);

  VAR_8->calendars[VAR_11].wdays.left = VAR_8->calendars[VAR_11].days.left =
      VAR_8->calendars[VAR_11].weeknums.right;


  FUNC_8(VAR_9, VAR_8->hFont);
  FUNC_9(VAR_9, VAR_8->colors[VAR_4]);
  FUNC_10(VAR_9, VAR_8->colors[VAR_6]);

  VAR_16 = VAR_8->calendars[VAR_11].wdays;
  VAR_16.right = VAR_16.left + VAR_8->width_increment;

  VAR_13 = VAR_8->firstDay;
  for(VAR_14 = 0; VAR_14 < 7; VAR_14++) {
    FUNC_11(VAR_8, (VAR_13 + VAR_14 + 6) % 7, VAR_19, FUNC_0(VAR_19));
    FUNC_1(VAR_9, VAR_19, FUNC_12(VAR_19), &VAR_16, VAR_1 | VAR_3 | VAR_2);
    FUNC_7(&VAR_16, VAR_8->width_increment, 0);
  }


  FUNC_10(VAR_9, VAR_8->colors[VAR_5]);
  VAR_18 = *VAR_12;
  VAR_18.wDay = 1;
  VAR_21 = 1;
  VAR_15 = FUNC_5(VAR_12->wMonth, VAR_12->wYear);
  while(VAR_18.wDay <= VAR_15)
  {
    FUNC_4(VAR_8, VAR_9, &VAR_18, VAR_8->monthdayState[VAR_11+1] & VAR_21, VAR_10);
    VAR_21 <<= 1;
    VAR_18.wDay++;
  }
}
