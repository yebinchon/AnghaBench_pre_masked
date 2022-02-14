
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int wDay; } ;
struct TYPE_10__ {int dwStyle; int monthdayState; int hwndNotify; int hwndSelf; } ;
struct TYPE_8__ {int idFrom; int code; int hwndFrom; } ;
struct TYPE_9__ {int cDayState; int * prgDayState; TYPE_1__ nmhdr; TYPE_7__ stStart; } ;
typedef TYPE_2__ NMDAYSTATE ;
typedef int MONTHDAYSTATE ;
typedef TYPE_3__ MONTHCAL_INFO ;
typedef int LPARAM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,TYPE_7__*) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int) ;

__attribute__((used)) static void FUNC_7(MONTHCAL_INFO *VAR_5)
{
  MONTHDAYSTATE *VAR_6;
  NMDAYSTATE VAR_7;

  if (!(VAR_5->dwStyle & VAR_3)) return;

  VAR_7.nmhdr.hwndFrom = VAR_5->hwndSelf;
  VAR_7.nmhdr.idFrom = FUNC_0(VAR_5->hwndSelf, VAR_1);
  VAR_7.nmhdr.code = VAR_2;
  VAR_7.cDayState = FUNC_2(VAR_5, VAR_0, 0);
  VAR_7.prgDayState = VAR_6 = FUNC_4(VAR_7.cDayState * sizeof(MONTHDAYSTATE));

  FUNC_1(VAR_5, &VAR_7.stStart);
  VAR_7.stStart.wDay = 1;

  FUNC_3(VAR_5->hwndNotify, VAR_4, VAR_7.nmhdr.idFrom, (LPARAM)&VAR_7);
  FUNC_6(VAR_5->monthdayState, VAR_7.prgDayState,
      FUNC_2(VAR_5, VAR_0, 0)*sizeof(MONTHDAYSTATE));

  FUNC_5(VAR_6);
}
