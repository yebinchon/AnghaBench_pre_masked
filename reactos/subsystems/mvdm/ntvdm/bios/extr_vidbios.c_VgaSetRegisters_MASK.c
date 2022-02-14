
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {int VGAOptions; int CrtModeControl; int CrtBasePort; } ;
struct TYPE_4__ {int Misc; int* Attribute; int* Sequencer; int* CRT; int* Graphics; } ;
typedef TYPE_1__* PVGA_REGISTERS ;
typedef int BOOLEAN ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 size_t VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (size_t,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static BOOLEAN FUNC_4(PVGA_REGISTERS VAR_28)
{
    UINT VAR_29;

    if (VAR_28 == ((void*)0)) return VAR_1;


    FUNC_3(0);







    VAR_0->CrtBasePort = (VAR_28->Misc & 0x01) ? VAR_11
                                                : VAR_12;

    VAR_0->VGAOptions = (VAR_0->VGAOptions & 0xFD) | (!(VAR_28->Misc & 0x01) << 1);
    VAR_0->CrtModeControl = (VAR_0->CrtModeControl & 0xFB) | (!(VAR_28->Misc & 0x01) << 1);


    if (VAR_28->Attribute[VAR_4] & VAR_3)
        VAR_0->CrtModeControl |= (1 << 5);
    else
        VAR_0->CrtModeControl &= ~(1 << 5);


    FUNC_1(VAR_23, VAR_20);
    FUNC_1(VAR_22 , FUNC_0(VAR_22) | VAR_21);


    FUNC_1(VAR_19, VAR_28->Misc);


    FUNC_1(VAR_23, VAR_26);
    FUNC_1(VAR_22 , VAR_25 );


    for (VAR_29 = 1; VAR_29 < VAR_24; VAR_29++)
    {
        FUNC_1(VAR_23, VAR_29);
        FUNC_1(VAR_22 , VAR_28->Sequencer[VAR_29]);
    }


    FUNC_1(VAR_23, VAR_26);
    FUNC_1(VAR_22 , VAR_27 | VAR_25);


    FUNC_1(VAR_10, VAR_8);
    FUNC_1(VAR_7 , FUNC_0(VAR_7) | 0x80);
    FUNC_1(VAR_10, VAR_9);
    FUNC_1(VAR_7 , FUNC_0(VAR_7) & ~0x80);

    VAR_28->CRT[VAR_8] |= 0x80;
    VAR_28->CRT[VAR_9] &= ~0x80;


    for (VAR_29 = 0; VAR_29 < VAR_13; VAR_29++)
    {
        FUNC_1(VAR_10, VAR_29);
        FUNC_1(VAR_7 , VAR_28->CRT[VAR_29]);
    }


    for (VAR_29 = 0; VAR_29 < VAR_17; VAR_29++)
    {
        FUNC_1(VAR_16, VAR_29);
        FUNC_1(VAR_15 , VAR_28->Graphics[VAR_29]);
    }


    for (VAR_29 = 0; VAR_29 < VAR_6; VAR_29++)
    {
        FUNC_2(VAR_29, VAR_28->Attribute[VAR_29]);
    }


    FUNC_1(VAR_14, 0xFF);


    FUNC_0(VAR_18);
    FUNC_1(VAR_5, 0x20);


    FUNC_1(VAR_23, VAR_20);
    FUNC_1(VAR_22 , FUNC_0(VAR_22) & ~VAR_21);


    FUNC_3(1);

    return VAR_2;
}
