
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ Y; scalar_t__ X; } ;
struct TYPE_14__ {scalar_t__ X; } ;
struct TYPE_17__ {TYPE_1__ ScreenBufferSize; } ;
struct TYPE_16__ {TYPE_5__* ActiveBuffer; } ;
struct TYPE_15__ {scalar_t__ Left; scalar_t__ Top; scalar_t__ Right; scalar_t__ Bottom; } ;
typedef TYPE_2__ SMALL_RECT ;
typedef int RECT ;
typedef TYPE_2__* PSMALL_RECT ;
typedef TYPE_4__* PGUI_CONSOLE_DATA ;
typedef int PCOORD ;
typedef TYPE_5__* PCONSOLE_SCREEN_BUFFER ;
typedef int HRGN ;
typedef TYPE_6__ COORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__*,TYPE_6__*,int ,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_4__*,int *,TYPE_2__*) ;

__attribute__((used)) static HRGN
FUNC_6(PGUI_CONSOLE_DATA VAR_1,
                   BOOL VAR_2,
                   PCOORD VAR_3,
                   PSMALL_RECT VAR_4)
{
    if (!VAR_2)
    {
        RECT VAR_5;
        FUNC_5(VAR_1, &VAR_5, VAR_4);
        return FUNC_1(&VAR_5);
    }
    else
    {
        HRGN VAR_6;
        COORD VAR_7, VAR_8;

        FUNC_4(&VAR_7, &VAR_8, VAR_3, VAR_4);

        if (VAR_7.Y == VAR_8.Y)
        {
            SMALL_RECT VAR_9;
            RECT VAR_10 ;

            VAR_9.Left = VAR_7.X;
            VAR_9.Top = VAR_7.Y;
            VAR_9.Right = VAR_8.X;
            VAR_9.Bottom = VAR_8.Y;



            if (VAR_4->Left != VAR_9.Left ||
                VAR_4->Top != VAR_9.Top ||
                VAR_4->Right != VAR_9.Right ||
                VAR_4->Bottom != VAR_9.Bottom)
            {
                FUNC_2("\n"
                        "SmallRect = (%d, %d, %d, %d)\n"
                        "sr = (%d, %d, %d, %d)\n"
                        "\n",
                        VAR_4->Left, VAR_4->Top, VAR_4->Right, VAR_4->Bottom,
                        VAR_9.Left, VAR_9.Top, VAR_9.Right, VAR_9.Bottom);
            }

            FUNC_5(VAR_1, &VAR_10, &VAR_9);
            VAR_6 = FUNC_1(&VAR_10);
        }
        else
        {
            PCONSOLE_SCREEN_BUFFER VAR_11 = VAR_1->ActiveBuffer;

            HRGN VAR_12, VAR_13, VAR_14;
            SMALL_RECT VAR_15, VAR_16, VAR_17;
            RECT VAR_18 , VAR_19 , VAR_20 ;

            VAR_15 = VAR_7.X;
            VAR_15 = VAR_7.Y;
            VAR_15 = VAR_11->ScreenBufferSize.X - 1;
            VAR_15 = VAR_7.Y;

            VAR_16 = 0;
            VAR_16 = VAR_7.Y + 1;
            VAR_16 = VAR_11->ScreenBufferSize.X - 1;
            VAR_16 = VAR_8.Y - 1;

            VAR_17 = 0;
            VAR_17 = VAR_8.Y;
            VAR_17 = VAR_8.X;
            VAR_17 = VAR_8.Y;

            FUNC_5(VAR_1, &VAR_18, &VAR_15);
            FUNC_5(VAR_1, &VAR_19, &VAR_16);
            FUNC_5(VAR_1, &VAR_20, &VAR_17);

            VAR_12 = FUNC_1(&VAR_18);
            VAR_13 = FUNC_1(&VAR_19);
            VAR_14 = FUNC_1(&VAR_20);

            FUNC_0(VAR_12, VAR_12, VAR_13, VAR_0);
            FUNC_0(VAR_12, VAR_12, VAR_14, VAR_0);
            FUNC_3(VAR_14);
            FUNC_3(VAR_13);

            VAR_6 = VAR_12;
        }

        return VAR_6;
    }
}
