
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int UCHAR ;
typedef int BOOLEAN ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

BOOLEAN FUNC_5(ULONG VAR_3)
{
    ULONG VAR_4;
    UCHAR VAR_5 = 0;

    FUNC_0("InitUARTMode() called\n");


    if (! FUNC_4(VAR_3))
        return VAR_0;

    FUNC_0("Resetting MPU401\n");


    FUNC_2(VAR_3, 0xff);



    FUNC_0("Waiting for an ACK\n");
    if (FUNC_3(VAR_3))
    {

        for (VAR_4 = VAR_1;
             (VAR_5 = (FUNC_1(VAR_3) & 0xfe) && VAR_4 > 0);
             VAR_4 --);
    }

    FUNC_0("Entering UART mode\n");

    FUNC_2(VAR_3, 0x3f);

    return VAR_2;
}
