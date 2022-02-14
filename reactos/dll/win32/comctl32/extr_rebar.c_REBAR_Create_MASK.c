
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cy; int cx; int y; int x; } ;
struct TYPE_5__ {int dwStyle; int hwndSelf; } ;
typedef int RECT ;
typedef TYPE_1__ REBAR_INFO ;
typedef int LRESULT ;
typedef TYPE_2__* LPCREATESTRUCTW ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static LRESULT
FUNC_6 (REBAR_INFO *VAR_3, LPCREATESTRUCTW VAR_4)
{
    RECT VAR_5, VAR_6;

    if (FUNC_4(VAR_1)) {
 FUNC_1(VAR_3->hwndSelf, &VAR_5);
 FUNC_0(VAR_3->hwndSelf, &VAR_6);
        FUNC_3("window=(%s) client=(%s) cs=(%d,%d %dx%d)\n",
              FUNC_5(&VAR_5), FUNC_5(&VAR_6),
       VAR_4->x, VAR_4->y, VAR_4->cx, VAR_4->cy);
    }

    FUNC_3("created!\n");

    if (FUNC_2 (VAR_3->hwndSelf, VAR_2))
    {

        VAR_3->dwStyle &= ~VAR_0;
    }

    return 0;
}
