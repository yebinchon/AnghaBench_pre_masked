
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_18__ {int wDay; scalar_t__ wMilliseconds; scalar_t__ wSecond; scalar_t__ wMinute; scalar_t__ wHour; } ;
struct TYPE_19__ {int dwStyle; int hwndSelf; TYPE_2__ maxSel; TYPE_2__ minSel; TYPE_1__* calendars; } ;
struct TYPE_17__ {int month; } ;
typedef TYPE_2__ SYSTEMTIME ;
typedef int RECT ;
typedef TYPE_3__ MONTHCAL_INFO ;
typedef int LRESULT ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int *,int) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (char*,TYPE_2__*) ;
 int VAR_2 ;

__attribute__((used)) static LRESULT
FUNC_10(MONTHCAL_INFO *VAR_3, SYSTEMTIME *VAR_4)
{
  SYSTEMTIME VAR_5 = VAR_3->minSel, VAR_6;
  INT VAR_7;
  WORD VAR_8;

  FUNC_9("%p\n", VAR_4);
  if(!VAR_4) return VAR_0;
  if(VAR_3->dwStyle & VAR_1) return VAR_0;

  if(!FUNC_8(VAR_4)) return VAR_0;

  if (FUNC_5(&VAR_3->minSel, VAR_4)) return VAR_2;

  VAR_6 = *VAR_4;
  VAR_6.wHour = VAR_6.wMinute = VAR_6.wSecond = VAR_6.wMilliseconds = 0;
  FUNC_1(&VAR_6, VAR_2);

  if(!FUNC_6(VAR_3, &VAR_6, VAR_0)) return VAR_0;


  VAR_7 = FUNC_7(&VAR_3->calendars[FUNC_2(VAR_3)-1].month, VAR_4);
  if (VAR_7 <= 0)
  {
    VAR_7 = FUNC_7(&VAR_3->calendars[0].month, VAR_4);
    if (VAR_7 > 0) VAR_7 = 0;
  }

  if (VAR_7 != 0)
  {
    INT VAR_9;

    for (VAR_9 = 0; VAR_9 < FUNC_2(VAR_3); VAR_9++)
      FUNC_4(&VAR_3->calendars[VAR_9].month, VAR_7);
  }


  VAR_6 = *VAR_4;
  FUNC_1(&VAR_6, VAR_2);
  VAR_3->minSel = VAR_3->maxSel = VAR_6;


  VAR_8 = VAR_5.wDay;
  VAR_5.wDay = VAR_4->wDay;
  if (FUNC_5(&VAR_5, VAR_4))
  {
    RECT VAR_10, VAR_11;

    VAR_5.wDay = VAR_8;
    FUNC_3(VAR_3, &VAR_5, &VAR_10, -1);
    FUNC_3(VAR_3, VAR_4, &VAR_11, -1);

    FUNC_0(VAR_3->hwndSelf, &VAR_10, VAR_0);
    FUNC_0(VAR_3->hwndSelf, &VAR_11, VAR_0);
  }
  else
    FUNC_0(VAR_3->hwndSelf, ((void*)0), VAR_0);

  return VAR_2;
}
