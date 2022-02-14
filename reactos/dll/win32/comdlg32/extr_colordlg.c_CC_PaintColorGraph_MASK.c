
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int hdcMem; int hwndSelf; } ;
struct TYPE_6__ {int bottom; int right; } ;
typedef TYPE_1__ RECT ;
typedef int HWND ;
typedef int HDC ;
typedef TYPE_2__ CCPRIV ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_1 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(CCPRIV *VAR_2)
{
 HWND VAR_3 = FUNC_4( VAR_2->hwndSelf, VAR_0 );
 HDC VAR_4;
 RECT VAR_5;

 if (FUNC_5(VAR_3))
 {
  if (!VAR_2->hdcMem)
   FUNC_1(VAR_2);

  VAR_4 = FUNC_3(VAR_3);
  FUNC_2(VAR_3, &VAR_5);
  if (VAR_2->hdcMem)
      FUNC_0(VAR_4, 0, 0, VAR_5.right, VAR_5.bottom, VAR_2->hdcMem, 0, 0, VAR_1);
  else
      FUNC_7("choose color: hdcMem is not defined\n");
  FUNC_6(VAR_3, VAR_4);
 }
}
