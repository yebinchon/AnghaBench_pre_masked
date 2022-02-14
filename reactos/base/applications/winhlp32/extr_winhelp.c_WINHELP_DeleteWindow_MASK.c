
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* page; int hBrush; scalar_t__ hHistoryWnd; scalar_t__ origRicheditWndProc; int hMainWnd; TYPE_1__* info; struct TYPE_10__* next; } ;
typedef TYPE_2__ WINHELP_WINDOW ;
struct TYPE_12__ {int wVersion; TYPE_2__* win_list; TYPE_2__* active_popup; TYPE_2__* active_win; } ;
struct TYPE_11__ {int file; } ;
struct TYPE_9__ {int name; } ;
typedef int LONG_PTR ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 TYPE_8__ VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,TYPE_2__*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (int ,char*) ;

__attribute__((used)) static void FUNC_14(WINHELP_WINDOW* VAR_3)
{
    WINHELP_WINDOW** VAR_4;
    BOOL VAR_5;
    HWND VAR_6;

    for (VAR_4 = &VAR_2.win_list; *VAR_4; VAR_4 = &(*VAR_4)->next)
    {
        if (*VAR_4 == VAR_3)
        {
            *VAR_4 = VAR_3->next;
            break;
        }
    }
    VAR_5 = (VAR_2.wVersion >= 4 && !FUNC_13(VAR_3->info->name, "main"));

    if (VAR_2.active_win == VAR_3)
    {
        VAR_2.active_win = VAR_2.win_list;
        if (VAR_2.win_list)
            FUNC_8(VAR_2.win_list->hMainWnd);
    }

    if (VAR_3 == VAR_2.active_popup)
        VAR_2.active_popup = ((void*)0);

    VAR_6 = FUNC_2(VAR_3->hMainWnd, VAR_0);
    FUNC_9(VAR_6, VAR_1, (LONG_PTR)VAR_3->origRicheditWndProc);

    FUNC_11(VAR_3);

    if (VAR_3->page) FUNC_12(VAR_3->page);
    if (VAR_3->hHistoryWnd) FUNC_1(VAR_3->hHistoryWnd);

    FUNC_0(VAR_3->hBrush);

    FUNC_10(VAR_3);

    if (VAR_3->page) FUNC_4(VAR_3->page->file);
    FUNC_5(FUNC_3(), 0, VAR_3);

    if (VAR_5) FUNC_6();
    if (!VAR_2.win_list)
        FUNC_7(0);
}
