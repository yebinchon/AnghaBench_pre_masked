
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int UCHAR ;
typedef int PSOUND_BLASTER_PARAMETERS ;
typedef int BOOLEAN ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;

BOOLEAN
FUNC_1(
    PSOUND_BLASTER_PARAMETERS VAR_3,
    UCHAR VAR_4)
{
    ULONG VAR_5 = VAR_1;
    BOOL VAR_6 = VAR_0;

    while ( ( ! VAR_6 ) && ( VAR_5 > 0 ) )
    {
        if ( FUNC_0(VAR_3, VAR_4) & 0x80 )
            return VAR_2;

        VAR_5 --;
    }

    return VAR_0;
}
