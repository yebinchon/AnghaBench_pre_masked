
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int firstDay; TYPE_1__* calendars; } ;
struct TYPE_9__ {int wDay; int wYear; int wMonth; } ;
struct TYPE_8__ {TYPE_2__ month; } ;
typedef TYPE_2__ SYSTEMTIME ;
typedef TYPE_3__ MONTHCAL_INFO ;
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(const MONTHCAL_INFO *VAR_2, SYSTEMTIME *VAR_3)
{

  SYSTEMTIME VAR_4 = VAR_2->calendars[0].month;
  INT VAR_5;

  VAR_4.wDay = 1;
  VAR_5 = FUNC_0(&VAR_4, VAR_0);

  *VAR_3 = VAR_2->calendars[0].month;
  FUNC_1(VAR_3);

  VAR_3->wDay = FUNC_2(VAR_3->wMonth, VAR_3->wYear) +
               (VAR_2->firstDay - VAR_5) % 7 + 1;

  if(VAR_3->wDay > FUNC_2(VAR_3->wMonth, VAR_3->wYear))
    VAR_3->wDay -= 7;


  FUNC_0(VAR_3, VAR_1);
}
