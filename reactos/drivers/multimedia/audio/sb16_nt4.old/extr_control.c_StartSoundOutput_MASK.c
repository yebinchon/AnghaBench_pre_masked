
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_4__ {int dsp_version; } ;
typedef TYPE_1__* PSOUND_BLASTER_PARAMETERS ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

BOOLEAN
FUNC_2(
    PSOUND_BLASTER_PARAMETERS VAR_4,
    ULONG VAR_5,
    ULONG VAR_6,
    ULONG VAR_7)
{
    FUNC_0("Initializing output with %d channels at %d bits/sample\n", VAR_6, VAR_5);

    UCHAR VAR_8 = 0xc6, VAR_9 = 0x00;

    if ( ( VAR_6 < 1 ) || ( VAR_6 > 2 ) )
        return VAR_0;

    if ( ( VAR_5 != 8 ) && ( VAR_5 != 16 ) )
        return VAR_0;

    switch ( VAR_5 )
    {
        case 8 : VAR_8 = 0xc6; break;
        case 16 : VAR_8 = 0xb6; break;
    };

    switch ( VAR_6 )
    {
        case 1 : VAR_9 = 0x00; break;
        case 2 : VAR_9 = 0x20; break;
    }





    if ( VAR_4->dsp_version < 0x0400 )
    {

    }


    FUNC_1(VAR_4, VAR_8);
    FUNC_1(VAR_4, VAR_9);
    FUNC_1(VAR_4, VAR_7 % 256);
    FUNC_1(VAR_4, VAR_7 / 256);

    FUNC_0("Finished programming the DSP\n");

    return VAR_1;
}
