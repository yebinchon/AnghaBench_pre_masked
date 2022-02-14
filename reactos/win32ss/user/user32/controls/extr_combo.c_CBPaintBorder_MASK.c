
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int textRect; } ;
typedef int RECT ;
typedef int HWND ;
typedef TYPE_1__ HEADCOMBO ;
typedef int HDC ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_8(
  HWND VAR_3,
  const HEADCOMBO *VAR_4,
  HDC VAR_5)
{
  RECT VAR_6;

  if (FUNC_0(VAR_4) != VAR_1)
  {
    FUNC_6(VAR_3, &VAR_6);
  }
  else
  {
    FUNC_3(&VAR_6, &VAR_4->textRect);

    FUNC_7(&VAR_6, FUNC_5(), FUNC_5());
    FUNC_7(&VAR_6, FUNC_1(), FUNC_2());
  }

  FUNC_4(VAR_5, &VAR_6, VAR_2, VAR_0);
}
