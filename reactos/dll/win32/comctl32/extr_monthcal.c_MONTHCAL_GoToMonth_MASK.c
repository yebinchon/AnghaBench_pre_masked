
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum nav_direction { ____Placeholder_nav_direction } nav_direction ;
struct TYPE_10__ {int delta; int dwStyle; TYPE_1__* calendars; } ;
struct TYPE_9__ {int month; } ;
typedef int SYSTEMTIME ;
typedef TYPE_2__ MONTHCAL_INFO ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int,int) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static void FUNC_7(MONTHCAL_INFO *VAR_3, enum nav_direction VAR_4)
{
  INT VAR_5 = VAR_3->delta ? VAR_3->delta : FUNC_0(VAR_3);
  BOOL VAR_6;
  SYSTEMTIME VAR_7;

  FUNC_6("%s\n", VAR_4 == VAR_0 ? "back" : "fwd");


  if(VAR_4 == VAR_0)
  {
    VAR_7 = VAR_3->calendars[0].month;
    FUNC_1(&VAR_7, -VAR_5);
  }
  else
  {
    VAR_7 = VAR_3->calendars[FUNC_0(VAR_3)-1].month;
    FUNC_1(&VAR_7, VAR_5);
  }

  if(!FUNC_2(VAR_3, &VAR_7, VAR_1)) return;

  VAR_6 = VAR_3->dwStyle & VAR_2;
  FUNC_5(VAR_3, VAR_4 == VAR_0 ? -VAR_5 : VAR_5, VAR_6);
  FUNC_3(VAR_3);
  if (!VAR_6)
    FUNC_4(VAR_3);
}
