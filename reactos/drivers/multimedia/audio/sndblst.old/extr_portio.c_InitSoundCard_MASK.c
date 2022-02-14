
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int ULONG ;
typedef int UCHAR ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;

USHORT FUNC_6(ULONG VAR_4)
{
    ULONG VAR_5;
    BOOLEAN VAR_6;
    UCHAR VAR_7, VAR_8;

    FUNC_0("InitSoundCard() called\n");

    FUNC_0("Resetting sound card\n");



    FUNC_3(VAR_4, 0x01);
    for (VAR_5 = 0; VAR_5 < 30000; VAR_5 ++);
    FUNC_3(VAR_4, 0x00);



    FUNC_0("Waiting for an ACK\n");
    if (FUNC_4(VAR_4))
    {

        for (VAR_5 = VAR_3;
             (VAR_6 = (FUNC_1(VAR_4) != VAR_1) && (VAR_5 > 0));
             VAR_5 --);
    }

    FUNC_0("Querying DSP version\n");
    if (! FUNC_5(VAR_4))
        return VAR_0;

    FUNC_2(VAR_4, VAR_2);

    if (! FUNC_4(VAR_4))
        return VAR_0;

    VAR_7 = FUNC_1(VAR_4);
    VAR_8 = FUNC_1(VAR_4);

    FUNC_0("DSP v%d.%d\n", VAR_7, VAR_8);



    if (VAR_7 == 0xFF && VAR_8 == 0xFF)
        return VAR_0;

    FUNC_0("Sound card initialized!\n");

    return (VAR_7 * 256) + VAR_8;
}
