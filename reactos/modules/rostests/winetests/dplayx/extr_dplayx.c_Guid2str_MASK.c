
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCSTR ;
typedef int GUID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int const*,int *) ;
 char* FUNC_1 (int const*) ;

__attribute__((used)) static LPCSTR FUNC_2(const GUID *VAR_15)
{
    if (!VAR_15) return "(null)";


    if (FUNC_0(VAR_15, &VAR_11))
        return "DPSPGUID_IPX";
    if (FUNC_0(VAR_15, &VAR_14))
        return "DPSPGUID_TCPIP";
    if (FUNC_0(VAR_15, &VAR_13))
        return "DPSPGUID_SERIAL";
    if (FUNC_0(VAR_15, &VAR_12))
        return "DPSPGUID_MODEM";

    if (FUNC_0(VAR_15, &VAR_10))
        return "DPAID_TotalSize";
    if (FUNC_0(VAR_15, &VAR_9))
        return "DPAID_ServiceProvider";
    if (FUNC_0(VAR_15, &VAR_4))
        return "DPAID_LobbyProvider";
    if (FUNC_0(VAR_15, &VAR_7))
        return "DPAID_Phone";
    if (FUNC_0(VAR_15, &VAR_8))
        return "DPAID_PhoneW";
    if (FUNC_0(VAR_15, &VAR_5))
        return "DPAID_Modem";
    if (FUNC_0(VAR_15, &VAR_6))
        return "DPAID_ModemW";
    if (FUNC_0(VAR_15, &VAR_1))
        return "DPAID_INet";
    if (FUNC_0(VAR_15, &VAR_3))
        return "DPAID_INetW";
    if (FUNC_0(VAR_15, &VAR_2))
        return "DPAID_INetPort";
    if (FUNC_0(VAR_15, &VAR_0))
        return "DPAID_ComPort";

    return FUNC_1(VAR_15);
}
