
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hwnd; int uFocus; } ;
typedef TYPE_1__ TAB_INFO ;
typedef int RECT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,int ,int *,int *) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(const TAB_INFO *VAR_1)
{
  RECT VAR_2;
  BOOL VAR_3;




  VAR_3 = FUNC_1(VAR_1,
          VAR_1->uFocus,
          ((void*)0),
          &VAR_2);





  if (VAR_3)
  {
    FUNC_2("invalidate (%s)\n", FUNC_3(&VAR_2));
    FUNC_0(VAR_1->hwnd, &VAR_2, VAR_0);
  }
}
