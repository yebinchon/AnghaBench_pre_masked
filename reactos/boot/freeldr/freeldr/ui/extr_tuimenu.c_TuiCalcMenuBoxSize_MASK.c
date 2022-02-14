
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef size_t ULONG ;
struct TYPE_3__ {size_t MenuItemCount; size_t Left; size_t Top; size_t Right; size_t Bottom; scalar_t__* MenuItemList; } ;
typedef TYPE_1__* PUI_MENU_INFO ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

VOID
FUNC_1(PUI_MENU_INFO VAR_4)
{
    ULONG VAR_5;
    ULONG VAR_6 = 0;
    ULONG VAR_7;
    ULONG VAR_8;




    VAR_7 = VAR_4->MenuItemCount + 2;
    VAR_7 -= 1;




    for(VAR_5 = 0; VAR_5 < VAR_4->MenuItemCount; VAR_5++)
    {



        if (VAR_4->MenuItemList[VAR_5])
        {
            VAR_8 = (ULONG)FUNC_0(VAR_4->MenuItemList[VAR_5]);
            if (VAR_8 > VAR_6) VAR_6 = VAR_8;
        }
    }




    VAR_6 += 18;




    if (VAR_1)
    {



        VAR_4->Left = (VAR_3 - VAR_6) / 2;
        VAR_4->Top = (((VAR_2 - VAR_0) -
                          VAR_7) / 2) + VAR_0;
    }
    else
    {



        VAR_4->Left = -1;
        VAR_4->Top = 4;
    }




    VAR_4->Right = (VAR_4->Left) + VAR_6;
    VAR_4->Bottom = (VAR_4->Top) + VAR_7;
}
