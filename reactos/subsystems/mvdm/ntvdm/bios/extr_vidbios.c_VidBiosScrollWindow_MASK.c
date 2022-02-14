
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_5__ {int VideoPageSize; int VideoMode; int ScreenColumns; int ScreenRows; } ;
struct TYPE_4__ {scalar_t__ Left; scalar_t__ Right; scalar_t__ Top; scalar_t__ Bottom; } ;
typedef TYPE_1__ SMALL_RECT ;
typedef int SCROLL_DIRECTION ;
typedef int LPVOID ;
typedef int INT ;
typedef int FillCharacter ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOLEAN ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (int *,scalar_t__,int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char,int) ;




 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__,int ) ;
 void* FUNC_6 (int ,int) ;

__attribute__((used)) static BOOLEAN FUNC_7(SCROLL_DIRECTION VAR_5,
                                   DWORD VAR_6,
                                   SMALL_RECT VAR_7,
                                   BYTE VAR_8,
                                   BYTE VAR_9)
{
    INT VAR_10, VAR_11;
    DWORD VAR_12 = FUNC_4(VAR_3, VAR_8 * VAR_0->VideoPageSize);
    WORD VAR_13 = FUNC_3(' ', VAR_9);

    WORD VAR_14, VAR_15;


    if (VAR_0->VideoMode > 3)
    {
        FUNC_0("VidBiosScrollWindow: not implemented for mode 0%Xh\n", VAR_0->VideoMode);
        return VAR_2;
    }


    VAR_7.Left = FUNC_6(FUNC_5(VAR_7.Left , 0), VAR_0->ScreenColumns - 1);
    VAR_7.Right = FUNC_6(FUNC_5(VAR_7.Right , 0), VAR_0->ScreenColumns - 1);
    VAR_7.Top = FUNC_6(FUNC_5(VAR_7.Top , 0), VAR_0->ScreenRows);
    VAR_7.Bottom = FUNC_6(FUNC_5(VAR_7.Bottom, 0), VAR_0->ScreenRows);

    VAR_14 = VAR_7.Right - VAR_7.Left + 1;
    VAR_15 = VAR_7.Bottom - VAR_7.Top + 1;


    if ((VAR_6 == 0) ||
        (((VAR_5 == 128 ) || (VAR_5 == 131 )) && (VAR_6 >= VAR_15)) ||
        (((VAR_5 == 130) || (VAR_5 == 129)) && (VAR_6 >= VAR_14 )))
    {

        for (VAR_10 = VAR_7.Top; VAR_10 <= VAR_7.Bottom; VAR_10++)
        {
            for (VAR_11 = VAR_7.Left; VAR_11 <= VAR_7.Right; VAR_11++)
            {
                FUNC_2(&VAR_1,
                                    VAR_12 + (VAR_10 * VAR_0->ScreenColumns + VAR_11) * sizeof(WORD),
                                    (LPVOID)&VAR_13,
                                    sizeof(VAR_13));
            }
        }

        return VAR_4;
    }

    switch (VAR_5)
    {
        case 128:
        {

            for (VAR_10 = VAR_7.Top + VAR_6; VAR_10 <= VAR_7.Bottom; VAR_10++)
            {
                FUNC_1(&VAR_1,
                                   VAR_12 + ((VAR_10 - VAR_6) * VAR_0->ScreenColumns + VAR_7.Left) * sizeof(WORD),
                                   VAR_12 + ( VAR_10 * VAR_0->ScreenColumns + VAR_7.Left) * sizeof(WORD),
                                   (VAR_7.Right - VAR_7.Left + 1) * sizeof(WORD));
            }


            for (VAR_10 = VAR_7.Bottom - VAR_6 + 1; VAR_10 <= VAR_7.Bottom; VAR_10++)
            {
                for (VAR_11 = VAR_7.Left; VAR_11 <= VAR_7.Right; VAR_11++)
                {
                    FUNC_2(&VAR_1,
                                        VAR_12 + (VAR_10 * VAR_0->ScreenColumns + VAR_11) * sizeof(WORD),
                                        (LPVOID)&VAR_13,
                                        sizeof(VAR_13));
                }
            }

            break;
        }

        case 131:
        {
            INT VAR_16;


            for (VAR_10 = VAR_7.Bottom - VAR_6; VAR_10 >= VAR_7.Top; VAR_10--)
            {
                FUNC_1(&VAR_1,
                                   VAR_12 + ((VAR_10 + VAR_6) * VAR_0->ScreenColumns + VAR_7.Left) * sizeof(WORD),
                                   VAR_12 + ( VAR_10 * VAR_0->ScreenColumns + VAR_7.Left) * sizeof(WORD),
                                   (VAR_7.Right - VAR_7.Left + 1) * sizeof(WORD));
            }


            VAR_16 = VAR_7.Top + VAR_6 - 1;
            for (VAR_10 = VAR_7.Top; VAR_10 <= VAR_16; VAR_10++)
            {
                for (VAR_11 = VAR_7.Left; VAR_11 <= VAR_7.Right; VAR_11++)
                {
                    FUNC_2(&VAR_1,
                                        VAR_12 + (VAR_10 * VAR_0->ScreenColumns + VAR_11) * sizeof(WORD),
                                        (LPVOID)&VAR_13,
                                        sizeof(VAR_13));
                }
            }

            break;
        }

        case 130:
        {

            for (VAR_10 = VAR_7.Top; VAR_10 <= VAR_7.Bottom; VAR_10++)
            {
                FUNC_1(&VAR_1,
                                   VAR_12 + (VAR_10 * VAR_0->ScreenColumns + VAR_7.Left ) * sizeof(WORD),
                                   VAR_12 + (VAR_10 * VAR_0->ScreenColumns + VAR_7.Left + VAR_6) * sizeof(WORD),
                                   (VAR_7.Right - VAR_7.Left - VAR_6 + 1) * sizeof(WORD));
            }


            for (VAR_10 = VAR_7.Top; VAR_10 <= VAR_7.Bottom; VAR_10++)
            {
                for (VAR_11 = VAR_7.Right - VAR_6 + 1; VAR_11 <= VAR_7.Right; VAR_11++)
                {
                    FUNC_2(&VAR_1,
                                        VAR_12 + (VAR_10 * VAR_0->ScreenColumns + VAR_11) * sizeof(WORD),
                                        (LPVOID)&VAR_13,
                                        sizeof(VAR_13));
                }
            }

            break;
        }

        case 129:
        {
            INT VAR_17;


            for (VAR_10 = VAR_7.Top; VAR_10 <= VAR_7.Bottom; VAR_10++)
            {
                FUNC_1(&VAR_1,
                                   VAR_12 + (VAR_10 * VAR_0->ScreenColumns + VAR_7.Left + VAR_6) * sizeof(WORD),
                                   VAR_12 + (VAR_10 * VAR_0->ScreenColumns + VAR_7.Left ) * sizeof(WORD),
                                   (VAR_7.Right - VAR_7.Left - VAR_6 + 1) * sizeof(WORD));
            }


            VAR_17 = VAR_7.Left + VAR_6 - 1;
            for (VAR_10 = VAR_7.Top; VAR_10 <= VAR_7.Bottom; VAR_10++)
            {
                for (VAR_11 = VAR_7.Left; VAR_11 <= VAR_17; VAR_11++)
                {
                    FUNC_2(&VAR_1,
                                        VAR_12 + (VAR_10 * VAR_0->ScreenColumns + VAR_11) * sizeof(WORD),
                                        (LPVOID)&VAR_13,
                                        sizeof(VAR_13));
                }
            }

            break;
        }
    }

    return VAR_4;
}
