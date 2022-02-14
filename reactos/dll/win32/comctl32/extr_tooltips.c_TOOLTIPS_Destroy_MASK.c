
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_8__ {size_t uNumTools; int hwndSelf; int hTitleFont; int hFont; int hTitleIcon; struct TYPE_8__* pszTitle; struct TYPE_8__* tools; struct TYPE_8__* lpszText; } ;
typedef TYPE_1__ TTTOOL_INFO ;
typedef TYPE_1__ TOOLTIPS_INFO ;
typedef int LRESULT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_6 (TOOLTIPS_INFO *VAR_2)
{
    TTTOOL_INFO *VAR_3;
    UINT VAR_4;


    if (VAR_2->tools) {
 for (VAR_4 = 0; VAR_4 < VAR_2->uNumTools; VAR_4++) {
     VAR_3 = &VAR_2->tools[VAR_4];
     if (VAR_3->lpszText) {
  if ( (VAR_3->lpszText != VAR_0) &&
       !FUNC_2(VAR_3->lpszText) )
  {
      FUNC_1 (VAR_3->lpszText);
      VAR_3->lpszText = ((void*)0);
  }
     }

            FUNC_5 (VAR_3);
        }

 FUNC_1 (VAR_2->tools);
    }


    FUNC_1 (VAR_2->pszTitle);

    if (FUNC_4(VAR_2->hTitleIcon) > VAR_1)
        FUNC_0(VAR_2->hTitleIcon);


    FUNC_0 (VAR_2->hFont);
    FUNC_0 (VAR_2->hTitleFont);


    FUNC_3(VAR_2->hwndSelf, 0, 0);
    FUNC_1 (VAR_2);

    return 0;
}
