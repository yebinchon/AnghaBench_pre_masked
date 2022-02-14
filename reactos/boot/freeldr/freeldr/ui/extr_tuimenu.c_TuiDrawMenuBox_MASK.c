
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_3__ {int Left; int Right; scalar_t__ MenuTimeRemaining; int MenuItemCount; scalar_t__ Top; int ** MenuItemList; scalar_t__ Bottom; } ;
typedef TYPE_1__* PUI_MENU_INFO ;
typedef int MenuLineText ;
typedef char CHAR ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,scalar_t__,int,scalar_t__,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int,scalar_t__,char*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_3 (scalar_t__,char*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*) ;

VOID
FUNC_7(PUI_MENU_INFO VAR_9)
{
    CHAR VAR_10[80], VAR_11[80];
    ULONG VAR_12;




    if (VAR_6)
    {
        FUNC_1(VAR_9->Left,
                  VAR_9->Top,
                  VAR_9->Right,
                  VAR_9->Bottom,
                  VAR_1,
                  VAR_0,
                  VAR_2,
                  VAR_3,
                  FUNC_0(VAR_7, VAR_5));
    }




    if (VAR_9->MenuTimeRemaining >= 0)
    {



        FUNC_5(VAR_11, VAR_8);
        VAR_12 = (ULONG)FUNC_6(VAR_11);
        VAR_11[VAR_12 - 2] = 0;




        FUNC_5(VAR_10, VAR_11);
        FUNC_3(VAR_9->MenuTimeRemaining, VAR_11, 10);
        FUNC_4(VAR_10, VAR_11);




        FUNC_4(VAR_10, &VAR_8[VAR_12 - 2]);




        if (VAR_4)
        {



            FUNC_2(VAR_9->Right - (ULONG)FUNC_6(VAR_10) - 1,
                       VAR_9->Bottom,
                       VAR_10,
                       FUNC_0(VAR_7, VAR_5));
        }
        else
        {



            FUNC_2(0,
                       VAR_9->Bottom + 4,
                       VAR_10,
                       FUNC_0(VAR_7, VAR_5));
        }
    }
    else
    {



        for (VAR_12=0; VAR_12<sizeof(VAR_10)-1; VAR_12++)
        {
            VAR_10[VAR_12] = ' ';
        }
        VAR_10[sizeof(VAR_10)-1] = 0;




        if (VAR_4)
        {
            FUNC_2(VAR_9->Right - (ULONG)FUNC_6(VAR_10) - 1,
                       VAR_9->Bottom,
                       VAR_10,
                       FUNC_0(VAR_7, VAR_5));
        }
        else
        {
            FUNC_2(0,
                       VAR_9->Bottom + 4,
                       VAR_10,
                       FUNC_0(VAR_7, VAR_5));
        }
    }




    for (VAR_12 = 0; VAR_12 < VAR_9->MenuItemCount; VAR_12++)
    {



        if (VAR_9->MenuItemList[VAR_12] == ((void*)0))
        {



            FUNC_2(VAR_9->Left,
                       VAR_9->Top + VAR_12 + 1,
                       "\xC7",
                       FUNC_0(VAR_7, VAR_5));
            FUNC_2(VAR_9->Right,
                       VAR_9->Top + VAR_12 + 1,
                       "\xB6",
                       FUNC_0(VAR_7, VAR_5));
        }
    }
}
