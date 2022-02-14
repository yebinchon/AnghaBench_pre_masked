
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int wDay; int wYear; int wMonth; } ;
struct TYPE_16__ {TYPE_1__* calendars; } ;
struct TYPE_15__ {int wDay; int wYear; int wMonth; } ;
struct TYPE_14__ {TYPE_2__ month; } ;
typedef TYPE_2__ SYSTEMTIME ;
typedef TYPE_3__ MONTHCAL_INFO ;
typedef int LRESULT ;
typedef int INT ;
typedef int DWORD ;




 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_6 (char*,int) ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_7(const MONTHCAL_INFO *VAR_2, DWORD VAR_3, SYSTEMTIME *VAR_4)
{
  INT VAR_5;

  FUNC_5("flag=%d, st=%p\n", VAR_3, VAR_4);

  switch (VAR_3) {
  case 128:
  {
      if (VAR_4)
      {
          VAR_4[0] = VAR_2->calendars[0].month;
          VAR_4[1] = VAR_2->calendars[FUNC_1(VAR_2)-1].month;

          if (VAR_4[0].wMonth == VAR_1.wMonth &&
              VAR_4[0].wYear == VAR_1.wYear)
          {
              VAR_4[0].wDay = VAR_1.wDay;
          }
          else
              VAR_4[0].wDay = 1;
          FUNC_0(&VAR_4[0], VAR_0);

          VAR_4[1].wDay = FUNC_4(VAR_4[1].wMonth, VAR_4[1].wYear);
          FUNC_0(&VAR_4[1], VAR_0);
      }

      VAR_5 = FUNC_1(VAR_2);
      break;
  }
  case 129:
  {
      if (VAR_4)
      {
          FUNC_3(VAR_2, &VAR_4[0]);
          FUNC_2(VAR_2, &VAR_4[1]);
      }

      VAR_5 = FUNC_1(VAR_2) + 2;
      break;
  }
  default:
      FUNC_6("Unknown flag value, got %d\n", VAR_3);
      VAR_5 = 0;
  }

  return VAR_5;
}
