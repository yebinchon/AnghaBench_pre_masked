
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int dwStyle; int minSel; TYPE_1__* calendars; } ;
struct TYPE_8__ {int month; } ;
typedef int SYSTEMTIME ;
typedef TYPE_2__ MONTHCAL_INFO ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_6(MONTHCAL_INFO *VAR_1, INT VAR_2, BOOL VAR_3)
{
  INT VAR_4, VAR_5 = -1;

  for(VAR_4 = 0; VAR_4 < FUNC_1(VAR_1); VAR_4++)
  {

    if (VAR_5 == -1 && FUNC_0(&VAR_1->minSel, &VAR_1->calendars[VAR_4].month) == 0)
      VAR_5 = VAR_4;

    FUNC_2(&VAR_1->calendars[VAR_4].month, VAR_2);
  }

  if (VAR_3)
    return;


  if (VAR_1->dwStyle & VAR_0)
  {
    SYSTEMTIME VAR_6[2];

    FUNC_3(VAR_1, VAR_6);
    FUNC_2(&VAR_6[0], VAR_2 - VAR_5);
    FUNC_2(&VAR_6[1], VAR_2 - VAR_5);
    FUNC_5(VAR_1, VAR_6);
  }
  else
  {
    SYSTEMTIME VAR_7 = VAR_1->minSel;

    FUNC_2(&VAR_7, VAR_2 - VAR_5);
    FUNC_4(VAR_1, &VAR_7);
  }
}
