
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ ULONG ;
struct TYPE_7__ {int (* DrawText ) (int ,scalar_t__,char*,int ) ;} ;
struct TYPE_6__ {char* MenuHeader; char* MenuFooter; scalar_t__ MenuItemCount; scalar_t__ ShowBootOptions; scalar_t__ Bottom; scalar_t__ Top; } ;
typedef TYPE_1__* PUI_MENU_INFO ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,scalar_t__,char*,int ) ;
 int FUNC_7 (int ,scalar_t__,char*,int ) ;
 int FUNC_8 (int ,scalar_t__,char*,int ) ;
 int FUNC_9 (int ,scalar_t__,char*,int ) ;

VOID
FUNC_10(PUI_MENU_INFO VAR_4)
{
    ULONG VAR_5;




    FUNC_4();




    if (VAR_4->MenuHeader)
    {
        VAR_3.DrawText(0,
                        VAR_4->Top - 2,
                        VAR_4->MenuHeader,
                        FUNC_0(VAR_1, VAR_0));
    }




    VAR_3.DrawText(0,
                    VAR_4->Bottom + 1,
                    "Use \x18 and \x19 to move the highlight to your choice.",
                    FUNC_0(VAR_1, VAR_0));
    VAR_3.DrawText(0,
                    VAR_4->Bottom + 2,
                    "Press ENTER to choose.",
                    FUNC_0(VAR_1, VAR_0));




    if (VAR_4->MenuFooter)
    {
        VAR_3.DrawText(0,
                        VAR_2 - 4,
                        VAR_4->MenuFooter,
                        FUNC_0(VAR_1, VAR_0));
    }




    FUNC_2(VAR_4);




    for (VAR_5 = 0; VAR_5 < VAR_4->MenuItemCount; VAR_5++)
    {
        FUNC_3(VAR_4, VAR_5);
    }




    if (VAR_4->ShowBootOptions)
    {
        FUNC_1();
    }

    FUNC_5();
}
