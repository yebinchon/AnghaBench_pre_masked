
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IInternetZoneManager ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int,scalar_t__,int *,int,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_6 (int *,int **,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    IInternetZoneManager *VAR_10 = ((void*)0);
    BYTE VAR_11[32];
    HRESULT VAR_12;
    DWORD VAR_13 = VAR_4;

    FUNC_7("testing GetZoneActionPolixy...\n");

    VAR_12 = FUNC_6(((void*)0), &VAR_10, 0);
    FUNC_5(VAR_12 == VAR_3, "CoInternetCreateZoneManager failed: %08x\n", VAR_12);
    if(FUNC_0(VAR_12))
        return;

    VAR_12 = FUNC_2(VAR_10, 3, VAR_13, VAR_11,
            sizeof(DWORD), VAR_9);
    FUNC_5(VAR_12 == VAR_3, "GetZoneActionPolicy failed: %08x\n", VAR_12);
    FUNC_5(*(DWORD*)VAR_11 == VAR_8 ||
            *(DWORD*)VAR_11 == VAR_7 ||
            *(DWORD*)VAR_11 == VAR_6 ||
            *(DWORD*)VAR_11 == VAR_5,
            "unexpected policy=%d\n", *(DWORD*)VAR_11);

    VAR_12 = FUNC_2(VAR_10, 3, VAR_13, ((void*)0),
            sizeof(DWORD), VAR_9);
    FUNC_5(VAR_12 == VAR_2, "GetZoneActionPolicy failed: %08x, expected E_INVALIDARG\n", VAR_12);

    VAR_12 = FUNC_2(VAR_10, 3, VAR_13, VAR_11,
            2, VAR_9);
    FUNC_5(VAR_12 == VAR_2, "GetZoneActionPolicy failed: %08x, expected E_INVALIDARG\n", VAR_12);

    VAR_12 = FUNC_2(VAR_10, 3, 0x1fff, VAR_11,
            sizeof(DWORD), VAR_9);
    FUNC_5(VAR_12 == VAR_1 || FUNC_4(VAR_12 == FUNC_1(VAR_0)),
            "(0x%x) got 0x%x (expected E_FAIL)\n", VAR_13, VAR_12);

    VAR_12 = FUNC_2(VAR_10, 13, VAR_13, VAR_11,
            sizeof(DWORD), VAR_9);
    FUNC_5(VAR_12 == VAR_2, "GetZoneActionPolicy failed: %08x, expected E_INVALIDARG\n", VAR_12);

    FUNC_3(VAR_10);
}
