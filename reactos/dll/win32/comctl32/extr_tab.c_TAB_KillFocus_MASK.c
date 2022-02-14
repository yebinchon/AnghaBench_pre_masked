
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwStyle; scalar_t__ uFocus; scalar_t__ iSelected; int hwnd; } ;
typedef TYPE_1__ TAB_INFO ;
typedef int RECT ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(TAB_INFO *VAR_2)
{

  if ((VAR_2->dwStyle & VAR_1) && (VAR_2->uFocus != VAR_2->iSelected))
  {
    RECT VAR_3;

    if (FUNC_1(VAR_2, VAR_2->uFocus, &VAR_3, ((void*)0)))
      FUNC_0(VAR_2->hwnd, &VAR_3, VAR_0);

    VAR_2->uFocus = VAR_2->iSelected;
  }
}
