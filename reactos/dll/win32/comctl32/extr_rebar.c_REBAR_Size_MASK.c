
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_5__ {int fStatus; int dwStyle; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef int LRESULT ;
typedef int LPARAM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (char*,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static LRESULT
FUNC_3 (REBAR_INFO *VAR_3, WPARAM VAR_4, LPARAM VAR_5)
{
    FUNC_2("wParam=%lx, lParam=%lx\n", VAR_4, VAR_5);


    if (VAR_3->fStatus & VAR_1) {
 VAR_3->fStatus &= ~VAR_1;
 FUNC_2("SELF_RESIZE was set, reset, fStatus=%08x lparam=%08lx\n",
       VAR_3->fStatus, VAR_5);
 return 0;
    }

    if (VAR_3->dwStyle & VAR_0)
        FUNC_0(VAR_3, VAR_2);
    else
        FUNC_1(VAR_3);

    return 0;
}
