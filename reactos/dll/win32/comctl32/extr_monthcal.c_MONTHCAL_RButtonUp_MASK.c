
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_10__ {int dwStyle; int todaysDate; int hwndSelf; } ;
struct TYPE_9__ {short x; short y; } ;
typedef int SYSTEMTIME ;
typedef TYPE_1__ POINT ;
typedef TYPE_2__ MONTHCAL_INFO ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int HMENU ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_2__*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_11 (int ,int,short,short,int ,int ,int *) ;

__attribute__((used)) static LRESULT
FUNC_12(MONTHCAL_INFO *VAR_8, LPARAM VAR_9)
{
  HMENU VAR_10;
  POINT VAR_11;
  WCHAR VAR_12[32];

  VAR_10 = FUNC_3();
  FUNC_6(VAR_0, VAR_1, VAR_12, FUNC_0(VAR_12));
  FUNC_1(VAR_10, VAR_4|VAR_3, 1, VAR_12);
  VAR_11.x = (short)FUNC_5(VAR_9);
  VAR_11.y = (short)FUNC_4(VAR_9);
  FUNC_2(VAR_8->hwndSelf, &VAR_11);
  if( FUNC_11(VAR_10, VAR_7 | VAR_5 | VAR_6,
       VAR_11.x, VAR_11.y, 0, VAR_8->hwndSelf, ((void*)0)))
  {
      if (VAR_8->dwStyle & VAR_2)
      {
          SYSTEMTIME VAR_13[2];

          VAR_13[0] = VAR_13[1] = VAR_8->todaysDate;
          FUNC_10(VAR_8, VAR_13);
      }
      else
          FUNC_9(VAR_8, &VAR_8->todaysDate);

      FUNC_8(VAR_8);
      FUNC_7(VAR_8);
  }

  return 0;
}
