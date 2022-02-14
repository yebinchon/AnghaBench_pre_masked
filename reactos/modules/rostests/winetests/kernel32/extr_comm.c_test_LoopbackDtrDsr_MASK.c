
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fDtrControl; } ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef TYPE_1__ DCB ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int*) ;
 int FUNC_3 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    HANDLE VAR_10;
    DWORD VAR_11 = 0, VAR_12 = 0;
    DCB VAR_13;

    if (!VAR_9) return;

    VAR_10 = FUNC_5(VAR_2);
    if (VAR_10 == VAR_3) return;

    FUNC_4(FUNC_3(VAR_10, &VAR_13), "GetCommState failed\n");
    if (VAR_13.fDtrControl == VAR_1)
    {
 FUNC_6("DTR_CONTROL_HANDSHAKE is set, so don't manipulate DTR\n");
        FUNC_0(VAR_10);
 return;
    }
    FUNC_4(FUNC_2(VAR_10, &VAR_12), "GetCommModemStatus failed\n");

    VAR_12 &= VAR_4|VAR_5|VAR_6|VAR_7;
    if(VAR_12 & VAR_5)
    {
 FUNC_4(FUNC_1(VAR_10, VAR_0), "EscapeCommFunction failed to clear DTR\n");
 FUNC_4(FUNC_2(VAR_10, &VAR_11), "GetCommModemStatus failed\n");
 FUNC_4 ((VAR_11 & VAR_5) == 0, "CTS didn't react: 0x%04x,  expected 0x%04x\n",
     VAR_11, (VAR_12 & ~VAR_5));
 FUNC_4(FUNC_1(VAR_10, VAR_8), "EscapeCommFunction failed to clear DTR\n");
 FUNC_4(FUNC_2(VAR_10, &VAR_11), "GetCommModemStatus failed\n");
 FUNC_4 (VAR_11 == VAR_12, "Failed to restore DSR: 0x%04x, expected 0x%04x\n",
     VAR_11, VAR_12);
    }
    else
    {
 FUNC_4(FUNC_1(VAR_10, VAR_8), "EscapeCommFunction failed to set DTR\n");
 FUNC_4(FUNC_2(VAR_10, &VAR_11), "GetCommModemStatus failed\n");
 FUNC_4 ((VAR_11 & VAR_5) == VAR_5,
            "CTS didn't react: 0x%04x,expected 0x%04x\n",
     VAR_11, (VAR_12 | VAR_5));
 FUNC_4(FUNC_1(VAR_10, VAR_0), "EscapeCommFunction failed to clear DTR\n");
 FUNC_4(FUNC_2(VAR_10, &VAR_11), "GetCommModemStatus failed\n");
 FUNC_4 (VAR_11 == VAR_12, "Failed to restore DSR: 0x%04x, expected 0x%04x\n",
     VAR_11, VAR_12);
    }

    FUNC_0(VAR_10);
}
