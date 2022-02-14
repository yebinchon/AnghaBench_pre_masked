
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ ULONG ;
struct TYPE_7__ {int (* DrawStatusText ) (char*) ;} ;
struct TYPE_6__ {scalar_t__ MenuItemCount; scalar_t__ ShowBootOptions; } ;
typedef TYPE_1__* PUI_MENU_INFO ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;

VOID
FUNC_6(PUI_MENU_INFO VAR_1)
{
    ULONG VAR_2;




    FUNC_3();




    VAR_0.DrawStatusText("Use \x18 and \x19 to select, then press ENTER.");




    FUNC_1(VAR_1);




    for (VAR_2 = 0; VAR_2 < VAR_1->MenuItemCount; VAR_2++)
    {
        FUNC_2(VAR_1, VAR_2);
    }


    if (VAR_1->ShowBootOptions)
    {
        FUNC_0();
    }

    FUNC_4();
}
