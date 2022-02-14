
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* first_button; } ;
typedef TYPE_1__ WINHELP_WINDOW ;
struct TYPE_6__ {struct TYPE_6__* next; int hWnd; } ;
typedef TYPE_2__ WINHELP_BUTTON ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(WINHELP_WINDOW* VAR_0)
{
    WINHELP_BUTTON* VAR_1;
    WINHELP_BUTTON* VAR_2;

    for (VAR_1 = VAR_0->first_button; VAR_1; VAR_1 = VAR_2)
    {
        FUNC_0(VAR_1->hWnd);
        VAR_2 = VAR_1->next;
        FUNC_2(FUNC_1(), 0, VAR_1);
    }
    VAR_0->first_button = ((void*)0);
}
