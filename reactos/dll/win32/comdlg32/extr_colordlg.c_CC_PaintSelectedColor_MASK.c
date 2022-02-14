
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* lpcc; int hwndSelf; } ;
struct TYPE_4__ {int rgbResult; } ;
typedef int RECT ;
typedef int HWND ;
typedef int HDC ;
typedef scalar_t__ HBRUSH ;
typedef TYPE_2__ CCPRIV ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int ,int *,scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(const CCPRIV *VAR_4)
{
 if (FUNC_7( FUNC_6(VAR_4->hwndSelf, VAR_2) ))
 {
  RECT VAR_5;
  HDC VAR_6;
  HBRUSH VAR_7;
  HWND VAR_8 = FUNC_6(VAR_4->hwndSelf, VAR_3);

  VAR_6 = FUNC_5(VAR_8);
  FUNC_4(VAR_8, &VAR_5) ;
  VAR_7 = FUNC_0(VAR_4->lpcc->rgbResult);
  if (VAR_7)
  {
   FUNC_3(VAR_6, &VAR_5, VAR_7);
   FUNC_2(VAR_6, &VAR_5, VAR_0, VAR_1);
   FUNC_1(VAR_7);
  }
  FUNC_8(VAR_8, VAR_6);
 }
}
