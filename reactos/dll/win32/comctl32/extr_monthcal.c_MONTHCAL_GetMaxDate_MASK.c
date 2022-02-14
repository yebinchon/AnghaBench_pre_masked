
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
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(const MONTHCAL_INFO *VAR_2, SYSTEMTIME *VAR_3)
{

  SYSTEMTIME VAR_4, *VAR_5 = &VAR_2->calendars[FUNC_1(VAR_2)-1].month;
  INT VAR_6;

  *VAR_3 = *VAR_5;
  VAR_4 = *VAR_5;


  VAR_4.wDay = 1;
  VAR_6 = FUNC_0(&VAR_4, VAR_0);

  FUNC_2(VAR_3);
  FUNC_3(&VAR_4);


  VAR_4.wDay = FUNC_4(VAR_4.wMonth, VAR_4.wYear) +
             (VAR_2->firstDay - VAR_6) % 7 + 1;
  if (VAR_4.wDay > FUNC_4(VAR_4.wMonth, VAR_4.wYear)) VAR_4.wDay -= 7;


  VAR_3->wDay = 42 - (FUNC_4(VAR_4.wMonth, VAR_4.wYear) - VAR_4.wDay + 1) -
                     FUNC_4(VAR_5->wMonth, VAR_5->wYear);


  FUNC_0(VAR_3, VAR_1);
}
