
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int PCHAR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;




 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*) ;

VOID FUNC_2(PCHAR VAR_4)
{
    switch (VAR_1)
    {
        case 130:
            FUNC_1(VAR_4, " /SAFEBOOT:MINIMAL /SOS /NOGUIBOOT");
            break;

        case 128:
            FUNC_1(VAR_4, " /SAFEBOOT:NETWORK /SOS /NOGUIBOOT");
            break;

        case 129:
            FUNC_1(VAR_4, " /SAFEBOOT:MINIMAL(ALTERNATESHELL) /SOS /NOGUIBOOT");
            break;

        case 131:
            FUNC_0("Last known good configuration is not supported yet!\n");
            break;

        case 132:
            FUNC_1(VAR_4, " /SAFEBOOT:DSREPAIR /SOS");
            break;

        default:
            break;
    }

    if (VAR_0)
        FUNC_1(VAR_4, " /BOOTLOG");

    if (VAR_3)
        FUNC_1(VAR_4, " /BASEVIDEO");

    if (VAR_2)
        FUNC_1(VAR_4, " /DEBUG");
}
