
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_16__ {int dwStyle; size_t* monthdayState; TYPE_1__* calendars; int * colors; } ;
struct TYPE_15__ {int wDay; int wYear; scalar_t__ wMonth; } ;
struct TYPE_14__ {TYPE_2__ month; } ;
typedef TYPE_2__ SYSTEMTIME ;
typedef int PAINTSTRUCT ;
typedef TYPE_3__ MONTHCAL_INFO ;
typedef size_t INT ;
typedef int HDC ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__ const*,int ,TYPE_2__*,size_t,int const*) ;
 int FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__ const*,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(const MONTHCAL_INFO *VAR_3, HDC VAR_4, const PAINTSTRUCT *VAR_5)
{
  INT VAR_6, VAR_7;
  UINT VAR_8;
  SYSTEMTIME VAR_9, VAR_10;

  if (VAR_3->dwStyle & VAR_2) return;

  FUNC_7(VAR_4, VAR_3->colors[VAR_1]);


  FUNC_3(VAR_3, &VAR_10);
  VAR_6 = 1 << (VAR_10.wDay-1);

  VAR_8 = FUNC_6(VAR_3->calendars[0].month.wMonth - 1,
                                VAR_3->calendars[0].month.wYear);
  VAR_7 = 0;
  while(VAR_10.wDay <= VAR_8)
  {
      FUNC_0(VAR_3, VAR_4, &VAR_10, VAR_3->monthdayState[VAR_7] & VAR_6, VAR_5);
      VAR_6 <<= 1;
      VAR_10.wDay++;
  }


  VAR_10 = VAR_3->calendars[FUNC_1(VAR_3)-1].month;
  VAR_10.wDay = 1;
  FUNC_5(&VAR_10);
  FUNC_2(VAR_3, &VAR_9);
  VAR_6 = 1;
  VAR_7 = FUNC_4(VAR_3, VAR_0, 0)-1;
  while(VAR_10.wDay <= VAR_9.wDay)
  {
      FUNC_0(VAR_3, VAR_4, &VAR_10, VAR_3->monthdayState[VAR_7] & VAR_6, VAR_5);
      VAR_6 <<= 1;
      VAR_10.wDay++;
  }
}
