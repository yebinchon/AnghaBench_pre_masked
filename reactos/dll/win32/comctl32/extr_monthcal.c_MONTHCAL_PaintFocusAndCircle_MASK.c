
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dwStyle; int focusedSel; int todaysDate; TYPE_1__* calendars; } ;
struct TYPE_7__ {int month; } ;
typedef int RECT ;
typedef int PAINTSTRUCT ;
typedef TYPE_2__ MONTHCAL_INFO ;
typedef size_t INT ;
typedef int HDC ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__ const*,int ,int *) ;
 int FUNC_2 (int *,int *) ;
 size_t FUNC_3 (TYPE_2__ const*) ;
 int FUNC_4 (TYPE_2__ const*,int *,int *,int) ;
 int FUNC_5 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(const MONTHCAL_INFO *VAR_2, HDC VAR_3, const PAINTSTRUCT *VAR_4)
{

  if (!(VAR_2->dwStyle & VAR_0))
  {
    INT VAR_5;

    for (VAR_5 = 0; VAR_5 < FUNC_3(VAR_2); VAR_5++)
      if (!FUNC_2(&VAR_2->todaysDate, &VAR_2->calendars[VAR_5].month))
      {
        FUNC_1(VAR_2, VAR_3, &VAR_2->todaysDate);
        break;
      }
  }

  if (!FUNC_5(&VAR_2->focusedSel, &VAR_1))
  {
    RECT VAR_6;
    FUNC_4(VAR_2, &VAR_2->focusedSel, &VAR_6, -1);
    FUNC_0(VAR_3, &VAR_6);
  }
}
