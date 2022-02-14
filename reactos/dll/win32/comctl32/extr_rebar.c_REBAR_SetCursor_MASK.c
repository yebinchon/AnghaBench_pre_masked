
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int dwStyle; int hcurArrow; int hcurHorz; int hcurVert; int hwndSelf; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef int POINT ;
typedef int LRESULT ;
typedef int LPARAM ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__ const*,int *,scalar_t__*,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int ) ;

__attribute__((used)) static LRESULT
FUNC_7 (const REBAR_INFO *VAR_4, LPARAM VAR_5)
{
    POINT VAR_6;
    UINT VAR_7;

    FUNC_6("code=0x%X  id=0x%X\n", FUNC_2(VAR_5), FUNC_1(VAR_5));

    FUNC_0 (&VAR_6);
    FUNC_4 (VAR_4->hwndSelf, &VAR_6);

    FUNC_3 (VAR_4, &VAR_6, &VAR_7, ((void*)0));

    if (VAR_7 == VAR_2) {
 if ((VAR_4->dwStyle & VAR_0) &&
     !(VAR_4->dwStyle & VAR_3))
     FUNC_5 (VAR_4->hcurVert);
 else
     FUNC_5 (VAR_4->hcurHorz);
    }
    else if (VAR_7 != VAR_1)
 FUNC_5 (VAR_4->hcurArrow);

    return 0;
}
