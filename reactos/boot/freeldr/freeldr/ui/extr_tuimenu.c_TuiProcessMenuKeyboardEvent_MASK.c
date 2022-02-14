
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ (* UiMenuKeyPressFilterCallback ) (scalar_t__,scalar_t__,int ) ;
typedef scalar_t__ ULONG ;
struct TYPE_8__ {int (* DrawMenu ) (TYPE_1__*) ;} ;
struct TYPE_7__ {int MenuTimeRemaining; scalar_t__ SelectedMenuItem; scalar_t__ MenuItemCount; int ** MenuItemList; int Context; } ;
typedef TYPE_1__* PUI_MENU_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 TYPE_3__ VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;

ULONG
FUNC_6(PUI_MENU_INFO VAR_6,
                            UiMenuKeyPressFilterCallback VAR_7)
{
    ULONG VAR_8 = 0;
    ULONG VAR_9, VAR_10;




    if (!FUNC_1())
        return 0;




    if (VAR_6->MenuTimeRemaining != -1)
    {



        VAR_6->MenuTimeRemaining = -1;
        FUNC_2(VAR_6);
    }




    VAR_8 = FUNC_0();
    if (VAR_8 == VAR_2)
        VAR_8 = FUNC_0();





    if (VAR_7 &&
        VAR_7(VAR_8, VAR_6->SelectedMenuItem, VAR_6->Context))
    {



        VAR_5.DrawMenu(VAR_6);
        return 0;
    }




    if ((VAR_8 == VAR_4 ) || (VAR_8 == VAR_0) ||
        (VAR_8 == VAR_3) || (VAR_8 == VAR_1 ))
    {



        VAR_9 = VAR_6->SelectedMenuItem;
        VAR_10 = VAR_6->MenuItemCount - 1;




        if ((VAR_8 == VAR_4) && (VAR_9 > 0))
        {



            VAR_6->SelectedMenuItem--;
            FUNC_3(VAR_6, VAR_9);
            VAR_9--;


            if ((VAR_9 > 0) &&
                (VAR_6->MenuItemList[VAR_9] == ((void*)0)))
            {
                VAR_6->SelectedMenuItem--;
            }
        }
        else if ( ((VAR_8 == VAR_4) && (VAR_9 == 0)) ||
                   (VAR_8 == VAR_1) )
        {



            VAR_6->SelectedMenuItem = VAR_10;
            FUNC_3(VAR_6, VAR_9);
        }
        else if ((VAR_8 == VAR_0) && (VAR_9 < VAR_10))
        {



            VAR_6->SelectedMenuItem++;
            FUNC_3(VAR_6, VAR_9);
            VAR_9++;


            if ((VAR_9 < VAR_10) &&
                (VAR_6->MenuItemList[VAR_9] == ((void*)0)))
            {
                VAR_6->SelectedMenuItem++;
            }
        }
        else if ( ((VAR_8 == VAR_0) && (VAR_9 == VAR_10)) ||
                   (VAR_8 == VAR_3) )
        {



            VAR_6->SelectedMenuItem = 0;
            FUNC_3(VAR_6, VAR_9);
        }




        FUNC_3(VAR_6, VAR_6->SelectedMenuItem);
        FUNC_4();
    }




    return VAR_8;
}
