
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {int Top; int Bottom; int Left; int Right; } ;
typedef int PTEXTMODE_SCREEN_BUFFER ;
typedef TYPE_1__* PSMALL_RECT ;
typedef int * PCHAR_INFO ;
typedef int CHAR_INFO ;


 int * FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static VOID
FUNC_3(PTEXTMODE_SCREEN_BUFFER VAR_0,
                PSMALL_RECT VAR_1,
                PSMALL_RECT VAR_2,
                PSMALL_RECT VAR_3,
                CHAR_INFO VAR_4)
{
    int VAR_5 = FUNC_2(VAR_1);
    int VAR_6 = FUNC_1(VAR_1);
    int VAR_7, VAR_8;
    int VAR_9, VAR_10;
    int VAR_11, VAR_12;
    int VAR_13, VAR_14;

    VAR_8 = VAR_1->Top;
    VAR_10 = VAR_2->Top;
    VAR_12 = 1;
    if (VAR_8 < VAR_10)
    {

        VAR_8 = VAR_1->Bottom;
        VAR_10 = VAR_2->Bottom;
        VAR_12 = -1;
    }
    for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
    {
        PCHAR_INFO VAR_15 = FUNC_0(VAR_0, 0, VAR_8);
        PCHAR_INFO VAR_16 = FUNC_0(VAR_0, 0, VAR_10);

        VAR_7 = VAR_1->Left;
        VAR_9 = VAR_2->Left;
        VAR_11 = 1;
        if (VAR_7 < VAR_9)
        {

            VAR_7 = VAR_1->Right;
            VAR_9 = VAR_2->Right;
            VAR_11 = -1;
        }
        for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++)
        {
            CHAR_INFO VAR_17 = VAR_15[VAR_7];
            if (VAR_7 >= VAR_3->Left && VAR_7 <= VAR_3->Right &&
                VAR_8 >= VAR_3->Top && VAR_8 <= VAR_3->Bottom)
            {
                VAR_15[VAR_7] = VAR_4;
            }
            if (VAR_9 >= VAR_3->Left && VAR_9 <= VAR_3->Right &&
                VAR_10 >= VAR_3->Top && VAR_10 <= VAR_3->Bottom)
            {
                VAR_16[VAR_9] = VAR_17;
            }
            VAR_7 += VAR_11;
            VAR_9 += VAR_11;
        }
        VAR_8 += VAR_12;
        VAR_10 += VAR_12;
    }
}
