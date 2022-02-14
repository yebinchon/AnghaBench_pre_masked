
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_6__ {int dsp_version; } ;
typedef TYPE_1__* PSOUND_BLASTER_PARAMETERS ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;

ULONG
FUNC_4(
    PSOUND_BLASTER_PARAMETERS VAR_6)
{
    UCHAR VAR_7, VAR_8;

    FUNC_0("Querying DSP version\n");

    if ( ! FUNC_2(VAR_6, VAR_1) )
        return VAR_0;

    if ( ! FUNC_3(VAR_6) )
        return VAR_0;

    if ( FUNC_1(VAR_6, &VAR_7) )
    {
        if ( FUNC_1(VAR_6, &VAR_8) )
        {
            FUNC_0("Version %d.%d\n", VAR_7, VAR_8);

            VAR_6->dsp_version = (VAR_7 * 256) + VAR_8;

            if ( VAR_6->dsp_version < 0x0200 )
                return VAR_2;
            else if ( ( VAR_6->dsp_version & 0xFF00 ) == 0x0200 )
                return VAR_4;
            else if ( ( VAR_6->dsp_version & 0xFF00 ) == 0x0300 )
                return VAR_5;
            else if ( VAR_6->dsp_version >= 0x0400 )
                return VAR_3;

            return VAR_0;
        }
    }

    return VAR_0;
}
