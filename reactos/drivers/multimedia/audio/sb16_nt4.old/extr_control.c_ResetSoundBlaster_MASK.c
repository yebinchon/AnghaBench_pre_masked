
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int PSOUND_BLASTER_PARAMETERS ;
typedef int BOOLEAN ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;

BOOLEAN
FUNC_4(
    PSOUND_BLASTER_PARAMETERS VAR_4)
{
    BOOLEAN VAR_5 = VAR_0;
    ULONG VAR_6;

    FUNC_2(VAR_4, 0x01);
    for (VAR_6 = 0; VAR_6 < 30000; VAR_6 ++ );
    FUNC_2(VAR_4, 0x00);

    FUNC_0("Waiting for SB to acknowledge our reset request\n");

    if ( ! FUNC_3(VAR_4) )
    {
        FUNC_0("Didn't get an ACK :(\n");
        return VAR_0;
    }

    VAR_6 = 0;

    while ( ( ! VAR_5 ) && ( VAR_6 < VAR_2 ) )
    {
        VAR_5 = ( FUNC_1(VAR_4) == VAR_1 );
        VAR_6 ++;
    }

    if ( ! VAR_5 )
    {
        FUNC_0("Didn't get an ACK :(\n");
        return VAR_0;
    }

    return VAR_3;
}
