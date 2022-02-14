
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int firstDay; TYPE_1__* calendars; } ;
struct TYPE_11__ {int wDay; int wYear; int wMonth; } ;
struct TYPE_10__ {TYPE_2__ month; } ;
typedef TYPE_2__ SYSTEMTIME ;
typedef TYPE_3__ MONTHCAL_INFO ;
typedef int LONG ;
typedef size_t INT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__ const*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__ const*) ;
 size_t FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(const MONTHCAL_INFO *VAR_1, const SYSTEMTIME *VAR_2,
    INT *VAR_3, INT *VAR_4, INT VAR_5)
{
  SYSTEMTIME VAR_6 = VAR_1->calendars[VAR_5].month;
  INT VAR_7;

  VAR_6.wDay = 1;
  VAR_7 = (FUNC_0(&VAR_6, VAR_0) + 6 - VAR_1->firstDay) % 7;

  if (VAR_5 == 0 || VAR_5 == FUNC_2(VAR_1)-1) {
      const SYSTEMTIME *VAR_8 = &VAR_1->calendars[VAR_5].month;
      LONG VAR_9 = FUNC_1(VAR_2, &VAR_6);


      if (VAR_9 == -1) {
        *VAR_3 = (VAR_7 - FUNC_3(VAR_2->wMonth, VAR_8->wYear) + VAR_2->wDay) % 7;
        *VAR_4 = 0;
        return;
      }


      if (VAR_9 == 1)
          VAR_7 += FUNC_3(VAR_8->wMonth, VAR_8->wYear);
  }

  *VAR_3 = (VAR_2->wDay + VAR_7) % 7;
  *VAR_4 = (VAR_2->wDay + VAR_7 - *VAR_3) / 7;
}
