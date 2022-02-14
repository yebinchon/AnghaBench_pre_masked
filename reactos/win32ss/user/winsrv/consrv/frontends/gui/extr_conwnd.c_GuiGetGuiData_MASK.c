
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hWindow; int * Console; } ;
typedef TYPE_1__* PGUI_CONSOLE_DATA ;
typedef scalar_t__ HWND ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static PGUI_CONSOLE_DATA
FUNC_1(HWND VAR_1)
{

    PGUI_CONSOLE_DATA VAR_2 = (PGUI_CONSOLE_DATA)FUNC_0(VAR_1, VAR_0);
    return ( ((VAR_2 == ((void*)0)) || (VAR_2->hWindow == VAR_1 && VAR_2->Console != ((void*)0))) ? VAR_2 : ((void*)0) );
}
