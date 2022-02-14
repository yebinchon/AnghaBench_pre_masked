
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* first_button; } ;
typedef TYPE_1__ WINHELP_WINDOW ;
struct TYPE_6__ {int lpszID; struct TYPE_6__* next; } ;
typedef TYPE_2__ WINHELP_BUTTON ;
typedef int LPCSTR ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static WINHELP_BUTTON** FUNC_1(WINHELP_WINDOW* VAR_0, LPCSTR VAR_1)
{
    WINHELP_BUTTON** VAR_2;

    for (VAR_2 = &VAR_0->first_button; *VAR_2; VAR_2 = &(*VAR_2)->next)
        if (!FUNC_0(VAR_1, (*VAR_2)->lpszID)) break;
    return VAR_2;
}
