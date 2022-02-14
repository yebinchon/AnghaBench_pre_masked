
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef size_t ULONG ;
typedef int UCHAR ;
struct TYPE_3__ {int Right; int Left; char** MenuItemList; size_t SelectedMenuItem; scalar_t__ Top; } ;
typedef TYPE_1__* PUI_MENU_INFO ;
typedef char CHAR ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,scalar_t__,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

VOID
FUNC_5(PUI_MENU_INFO VAR_6,
                ULONG VAR_7)
{
    ULONG VAR_8;
    CHAR VAR_9[80];
    ULONG VAR_10;
    ULONG VAR_11;
    ULONG VAR_12 = 0;
    UCHAR VAR_13 = FUNC_0(VAR_5, VAR_1);




    if (VAR_0)
    {




        VAR_10 = (VAR_6->Right - VAR_6->Left - 2) -
                     (ULONG)(VAR_6->MenuItemList[VAR_7] ?
                             FUNC_4(VAR_6->MenuItemList[VAR_7]) : 0);
        VAR_11 = (VAR_10 / 2) + 1;
        VAR_12 = (VAR_10 - VAR_11) + 1;




        for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) VAR_9[VAR_8] = ' ';
        VAR_9[VAR_8] = '\0';
    }
    else
    {



        VAR_9[0] = '\0';
        FUNC_3(VAR_9, "    ");
    }




    if (VAR_6->MenuItemList[VAR_7])
        FUNC_3(VAR_9, VAR_6->MenuItemList[VAR_7]);




    if (VAR_0) for (VAR_8=0; VAR_8 < VAR_12; VAR_8++) FUNC_3(VAR_9, " ");




    if (VAR_6->MenuItemList[VAR_7] == ((void*)0))
    {



        FUNC_2(VAR_9, 0, 80);
        FUNC_2(VAR_9, 0xC4, (VAR_6->Right - VAR_6->Left - 1));
        VAR_13 = FUNC_0(VAR_2, VAR_1);
    }
    else if (VAR_7 == VAR_6->SelectedMenuItem)
    {



        VAR_13 = FUNC_0(VAR_4, VAR_3);
    }




    FUNC_1(VAR_6->Left + 1,
               VAR_6->Top + 1 + VAR_7,
               VAR_9,
               VAR_13);
}
