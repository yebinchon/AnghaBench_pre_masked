
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int focusedSel; int hwndSelf; } ;
typedef int SYSTEMTIME ;
typedef int RECT ;
typedef TYPE_1__ MONTHCAL_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int *,int) ;
 scalar_t__ FUNC_2 (int *,int const*) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_4(MONTHCAL_INFO *VAR_3, const SYSTEMTIME *VAR_4)
{
  RECT VAR_5;

  if(VAR_4)
  {


    if(FUNC_2(&VAR_3->focusedSel, VAR_4)) return VAR_0;


    if (FUNC_1(VAR_3, &VAR_3->focusedSel, &VAR_5, -1))
      FUNC_0(VAR_3->hwndSelf, &VAR_5, VAR_0);

    VAR_3->focusedSel = *VAR_4;
  }


  if (FUNC_1(VAR_3, &VAR_3->focusedSel, &VAR_5, -1))
    FUNC_0(VAR_3->hwndSelf, &VAR_5, VAR_0);

  if(!VAR_4 && FUNC_3(&VAR_3->focusedSel))
    VAR_3->focusedSel = VAR_2;

  return VAR_1;
}
