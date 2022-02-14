
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* calendars; } ;
struct TYPE_7__ {int month; } ;
typedef int SYSTEMTIME ;
typedef int RECT ;
typedef TYPE_2__ MONTHCAL_INFO ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int *) ;
 int FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (TYPE_2__ const*,int const*,int*,int*,int) ;
 int FUNC_3 (TYPE_2__ const*,int *,int,int,int) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_6(const MONTHCAL_INFO *VAR_2, const SYSTEMTIME *VAR_3, RECT *VAR_4, INT VAR_5)
{
  INT VAR_6, VAR_7;

  if (!FUNC_4(VAR_3))
  {
      FUNC_5(VAR_4);
      return VAR_0;
  }

  if (VAR_5 == -1)
  {
      INT VAR_8 = FUNC_0(VAR_3, &VAR_2->calendars[0].month);

      if (VAR_8 <= 0)
          VAR_5 = 0;
      else
      {
          VAR_8 = FUNC_0(VAR_3, &VAR_2->calendars[FUNC_1(VAR_2)-1].month);
          if (VAR_8 >= 0)
              VAR_5 = FUNC_1(VAR_2)-1;
          else
          {
              for (VAR_5 = 1; VAR_5 < FUNC_1(VAR_2)-1; VAR_5++)
                  if (FUNC_0(VAR_3, &VAR_2->calendars[VAR_5].month) == 0)
                      break;
          }
      }
  }

  FUNC_2(VAR_2, VAR_3, &VAR_6, &VAR_7, VAR_5);
  FUNC_3(VAR_2, VAR_4, VAR_6, VAR_7, VAR_5);

  return VAR_1;
}
