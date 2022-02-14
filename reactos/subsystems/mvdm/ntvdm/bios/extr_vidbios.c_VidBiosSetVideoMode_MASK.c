
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int VideoMode; int VideoPageSize; int VideoPage; int VideoPageOffset; int VGAOptions; int VGASwitches; int ScreenRows; int CharacterHeight; int ScreenColumns; } ;
struct TYPE_6__ {int PageSize; int CharacterHeight; int CharacterWidth; int VgaRegisters; } ;
struct TYPE_5__ {int Y; int X; } ;
typedef int * PULONG ;
typedef TYPE_1__ COORD ;
typedef int BYTE ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_1 (char*,int,int,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 TYPE_1__ FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int ,int) ;
 int FUNC_18 (int ) ;
 TYPE_2__* VAR_19 ;
 int FUNC_19 () ;
 int FUNC_20 () ;

__attribute__((used)) static BOOLEAN FUNC_21(BYTE VAR_20)
{
    BYTE VAR_21;
    COORD VAR_22;
    BYTE VAR_23 = VAR_20;







    BOOLEAN VAR_24 = !!(VAR_20 & 0x80);


    VAR_20 &= 0x7F;


    FUNC_1("Switching to mode %02Xh (%02Xh) %s clearing the screen; VgaRegisters = 0x%p\n",
            VAR_20, VAR_23, (VAR_24 ? "without" : "and"), VAR_19[VAR_20].VgaRegisters);

    if (VAR_20 > VAR_1)
    {

        return FUNC_9(VAR_20);
    }

    if (!FUNC_14(VAR_19[VAR_20].VgaRegisters)) return VAR_4;
    if (VAR_18 && VAR_3->VideoMode > VAR_1)
    {




        FUNC_8();
    }

    FUNC_10(VAR_20);


    if (!VAR_24) FUNC_11();


    VAR_3->VideoMode = VAR_20;
    VAR_3->VideoPageSize = VAR_19[VAR_20].PageSize;
    VAR_3->VideoPage = 0;
    VAR_3->VideoPageOffset = VAR_3->VideoPage * VAR_3->VideoPageSize;


    VAR_3->VGAOptions = 0x60 | (VAR_3->VGAOptions & 0x7F) | (VAR_24 ? 0x80 : 0x00);
    VAR_3->VGASwitches = 0xF9;






    FUNC_3(VAR_13, VAR_15);
    FUNC_3(VAR_12 , FUNC_5(VAR_3->VideoPageOffset));
    FUNC_3(VAR_13, VAR_14);
    FUNC_3(VAR_12 , FUNC_2(VAR_3->VideoPageOffset));


    VAR_22 = FUNC_12();


    if (!FUNC_4(VAR_20))
    {
        VAR_22.X /= VAR_19[VAR_20].CharacterWidth ;
        VAR_22.Y /= VAR_19[VAR_20].CharacterHeight;
    }
    VAR_3->ScreenColumns = VAR_22.X;
    VAR_3->ScreenRows = VAR_22.Y - 1;


    VAR_3->CharacterHeight = VAR_19[VAR_20].CharacterHeight;
    switch (VAR_3->CharacterHeight)
    {




        case 8:
        {
            if (FUNC_4(VAR_20))
                FUNC_15(0, VAR_10, FUNC_0(VAR_10) / VAR_16);

            ((PULONG)VAR_2)[0x43] = FUNC_6(VAR_7, VAR_17);
            break;
        }
        case 14:
        {
            if (FUNC_4(VAR_20))
                FUNC_15(0, VAR_8, FUNC_0(VAR_8) / VAR_16);

            ((PULONG)VAR_2)[0x43] = FUNC_6(VAR_5, VAR_17);
            break;
        }
        case 16:
        {
            if (FUNC_4(VAR_20))
                FUNC_15(0, VAR_9, FUNC_0(VAR_9) / VAR_16);

            ((PULONG)VAR_2)[0x43] = FUNC_6(VAR_6, VAR_17);
            break;
        }
    }
    if (FUNC_4(VAR_20))

        FUNC_18(FUNC_7(0x07, 0x06));


    for (VAR_21 = 0; VAR_21 < VAR_0; ++VAR_21)
        FUNC_17(0, 0, VAR_21);

    if (!VAR_24) FUNC_16();


    FUNC_13();

    return VAR_11;
}
