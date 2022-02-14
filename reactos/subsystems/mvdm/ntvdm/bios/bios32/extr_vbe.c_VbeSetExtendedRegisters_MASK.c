
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
typedef size_t UINT ;
struct TYPE_5__ {int VGAOptions; int CrtModeControl; int CrtBasePort; } ;
struct TYPE_4__ {int Misc; int* Attribute; int* Sequencer; int* CRT; int* Graphics; int Hidden; } ;
typedef TYPE_1__* PSVGA_REGISTERS ;
typedef int BOOLEAN ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 size_t VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static VOID FUNC_4(PSVGA_REGISTERS VAR_36)
{
    UINT VAR_37;


    BOOLEAN VAR_38 = FUNC_2();
    FUNC_3(0);







    VAR_0->CrtBasePort = (VAR_36->Misc & 0x01) ? VAR_21
                                                : VAR_22;

    VAR_0->VGAOptions = (VAR_0->VGAOptions & 0xFD) | (!(VAR_36->Misc & 0x01) << 1);
    VAR_0->CrtModeControl = (VAR_0->CrtModeControl & 0xFB) | (!(VAR_36->Misc & 0x01) << 1);


    if (VAR_36->Attribute[VAR_13] & VAR_12)
        VAR_0->CrtModeControl |= (1 << 5);
    else
        VAR_0->CrtModeControl &= ~(1 << 5);


    FUNC_1(VAR_31, VAR_28);
    FUNC_1(VAR_30 , FUNC_0(VAR_30) | VAR_29);


    FUNC_1(VAR_27, VAR_36->Misc);


    FUNC_1(VAR_31, VAR_34);
    FUNC_1(VAR_30 , VAR_33 );


    for (VAR_37 = 1; VAR_37 < VAR_10; VAR_37++)
    {
        if (VAR_37 != VAR_32 && VAR_37 != VAR_11)
        {
            FUNC_1(VAR_31, VAR_37);
            FUNC_1(VAR_30 , VAR_36->Sequencer[VAR_37]);
        }
    }


    FUNC_1(VAR_31, VAR_34);
    FUNC_1(VAR_30 , VAR_35 | VAR_33);


    FUNC_1(VAR_20, VAR_18);
    FUNC_1(VAR_17 , FUNC_0(VAR_17) | 0x80);
    FUNC_1(VAR_20, VAR_19);
    FUNC_1(VAR_17 , FUNC_0(VAR_17) & ~0x80);

    VAR_36->CRT[VAR_18] |= 0x80;
    VAR_36->CRT[VAR_19] &= ~0x80;


    for (VAR_37 = 0; VAR_37 < VAR_1; VAR_37++)
    {
        if ((VAR_37 < VAR_2 || VAR_37 > VAR_3) && VAR_37 != VAR_4)
        {
            FUNC_1(VAR_20, VAR_37);
            FUNC_1(VAR_17 , VAR_36->CRT[VAR_37]);
        }
    }


    for (VAR_37 = 0; VAR_37 < VAR_5; VAR_37++)
    {
        if (VAR_37 != VAR_6 && VAR_37 != VAR_8
            && (VAR_37 < VAR_9 || VAR_37 > VAR_7))
        {
            FUNC_1(VAR_25, VAR_37);
            FUNC_1(VAR_24 , VAR_36->Graphics[VAR_37]);
        }
    }


    for (VAR_37 = 0; VAR_37 < VAR_15; VAR_37++)
    {

        FUNC_0(VAR_26);
        FUNC_1(VAR_14, VAR_37);


        FUNC_1(VAR_16, VAR_36->Attribute[VAR_37]);
    }


    for (VAR_37 = 0; VAR_37 < 4; VAR_37++) FUNC_0(VAR_23);


    FUNC_1(VAR_23, VAR_36->Hidden);


    FUNC_1(VAR_23, 0xFF);


    FUNC_0(VAR_26);
    FUNC_1(VAR_14, 0x20);


    FUNC_1(VAR_31, VAR_28);
    FUNC_1(VAR_30 , FUNC_0(VAR_30) & ~VAR_29);


    FUNC_3(VAR_38);
}
