
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NET_API_STATUS ;
typedef int NETSETUP_JOIN_STATUS ;
typedef int * LPWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int **,int*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void)
{
    NET_API_STATUS VAR_3;
    LPWSTR VAR_4 = ((void*)0);
    NETSETUP_JOIN_STATUS VAR_5 = 0xdada;

    if (!&FUNC_2) {
        FUNC_4("NetGetJoinInformation not available\n");
        return;
    }

    VAR_3 = FUNC_2(((void*)0), ((void*)0), ((void*)0));
    FUNC_0(VAR_3 == VAR_0, "NetJoinGetInformation returned unexpected 0x%08x\n", VAR_3);
    FUNC_0(VAR_5 == 0xdada, "buffertype set to unexpected value %d\n", VAR_5);

    VAR_3 = FUNC_2(((void*)0), &VAR_4, &VAR_5);
    FUNC_0(VAR_3 == VAR_1, "NetJoinGetInformation returned unexpected 0x%08x\n", VAR_3);
    FUNC_0(VAR_5 != 0xdada && VAR_5 != VAR_2, "buffertype set to unexpected value %d\n", VAR_5);
    FUNC_3("workstation joined to %s with status %d\n", FUNC_5(VAR_4), VAR_5);
    FUNC_1(VAR_4);
}
