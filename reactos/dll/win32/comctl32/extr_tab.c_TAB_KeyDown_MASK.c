
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_6__ {int idFrom; int code; int hwndFrom; } ;
struct TYPE_8__ {int wVKey; TYPE_1__ hdr; int flags; } ;
struct TYPE_7__ {scalar_t__ uFocus; scalar_t__ uNumItem; int hwndNotify; int hwnd; } ;
typedef TYPE_2__ TAB_INFO ;
typedef TYPE_3__ NMTCKEYDOWN ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int VAR_1 ;


 int VAR_2 ;

__attribute__((used)) static LRESULT FUNC_3(TAB_INFO* VAR_3, WPARAM VAR_4, LPARAM VAR_5)
{
  INT VAR_6 = -1;
  NMTCKEYDOWN VAR_7;


  VAR_7.hdr.hwndFrom = VAR_3->hwnd;
  VAR_7.hdr.idFrom = FUNC_0(VAR_3->hwnd, VAR_0);
  VAR_7.hdr.code = VAR_1;
  VAR_7.wVKey = VAR_4;
  VAR_7.flags = VAR_5;
  FUNC_1(VAR_3->hwndNotify, VAR_2, VAR_7.hdr.idFrom, (LPARAM)&VAR_7);

  switch (VAR_4)
  {
    case 129:
      VAR_6 = VAR_3->uFocus - 1;
      break;
    case 128:
      VAR_6 = VAR_3->uFocus + 1;
      break;
  }


  if (VAR_6 >= 0 && VAR_6 < VAR_3->uNumItem && VAR_3->uFocus != VAR_6)
      FUNC_2(VAR_3, VAR_6);

  return 0;
}
