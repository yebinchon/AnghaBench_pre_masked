
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int s; int h; int hwndSelf; } ;
struct TYPE_7__ {int bottom; int top; } ;
typedef TYPE_1__ RECT ;
typedef int HWND ;
typedef int HDC ;
typedef int HBRUSH ;
typedef TYPE_2__ CCPRIV ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_3 ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static void FUNC_11(const CCPRIV *VAR_4)
{
 HWND VAR_5 = FUNC_7(VAR_4->hwndSelf, VAR_2);
 RECT VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;
 HBRUSH VAR_11;
 HDC VAR_12;

 if (FUNC_8(VAR_5))
 {
  VAR_12 = FUNC_6(VAR_5);
  FUNC_5(VAR_5, &VAR_7);
  VAR_6 = VAR_7;

  VAR_9 = 240 / VAR_3;
  VAR_10 = VAR_7.bottom / VAR_3+1;
  for (VAR_8 = 0; VAR_8 < 240 + VAR_9; VAR_8 += VAR_9)
  {
   VAR_6.top = FUNC_10(0, VAR_6.bottom - VAR_10);
   VAR_11 = FUNC_1(FUNC_0(VAR_4->h, VAR_4->s, VAR_8));
   FUNC_4(VAR_12, &VAR_6, VAR_11);
   FUNC_2(VAR_11);
   VAR_6.bottom = VAR_6.top;
  }
  FUNC_5(VAR_5, &VAR_6);
  FUNC_3(VAR_12, &VAR_6, VAR_0, VAR_1);
  FUNC_9(VAR_5, VAR_12);
 }
}
