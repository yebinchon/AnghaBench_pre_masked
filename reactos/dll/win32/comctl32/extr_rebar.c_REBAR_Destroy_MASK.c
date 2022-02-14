
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {scalar_t__ uNumBands; int hwndSelf; scalar_t__ hDefaultFont; int hcurDrag; int hcurVert; int hcurHorz; int hcurArrow; int * bands; int hwndChild; struct TYPE_7__* lpText; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef TYPE_1__ REBAR_BAND ;
typedef int LRESULT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static LRESULT
FUNC_10 (REBAR_INFO *VAR_0)
{
    REBAR_BAND *VAR_1;
    UINT VAR_2;


    for (VAR_2 = 0; VAR_2 < VAR_0->uNumBands; VAR_2++) {
 VAR_1 = FUNC_7(VAR_0, VAR_2);


        FUNC_5 (VAR_1->lpText);
 VAR_1->lpText = ((void*)0);

 FUNC_4 (VAR_1->hwndChild);
 FUNC_5 (VAR_1);
    }


    FUNC_1 (VAR_0->bands);
    VAR_0->bands = ((void*)0);

    FUNC_3 (VAR_0->hcurArrow);
    FUNC_3 (VAR_0->hcurHorz);
    FUNC_3 (VAR_0->hcurVert);
    FUNC_3 (VAR_0->hcurDrag);
    if (VAR_0->hDefaultFont) FUNC_2 (VAR_0->hDefaultFont);
    FUNC_8 (VAR_0->hwndSelf, 0, 0);

    FUNC_0 (FUNC_6 (VAR_0->hwndSelf));


    FUNC_5 (VAR_0);
    FUNC_9("destroyed!\n");
    return 0;
}
