
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_3__ {int cbSize; } ;
typedef TYPE_1__ ZONEATTRIBUTES ;
typedef int IInternetZoneManager ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int,char*,int,...) ;
 int FUNC_5 (int *,int **,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    IInternetZoneManager *VAR_4 = ((void*)0);
    CHAR VAR_5 [sizeof(ZONEATTRIBUTES) + 32];
    ZONEATTRIBUTES* VAR_6 = (ZONEATTRIBUTES*) VAR_5;
    HRESULT VAR_7;
    DWORD VAR_8;

    FUNC_6("testing GetZoneAttributes...\n");

    VAR_7 = FUNC_5(((void*)0), &VAR_4, 0);
    FUNC_4(VAR_7 == VAR_3, "CoInternetCreateZoneManager result: 0x%x\n", VAR_7);
    if (FUNC_0(VAR_7))
        return;


    for (VAR_8 = 0; VAR_8 < 5; VAR_8++) {
        FUNC_3(VAR_5, -1, sizeof(VAR_5));
        VAR_7 = FUNC_1(VAR_4, VAR_8, VAR_6);
        FUNC_4(VAR_7 == VAR_3, "#%d: got 0x%x (expected S_OK)\n", VAR_8, VAR_7);
    }


    FUNC_3(VAR_5, -1, sizeof(VAR_5));
    VAR_6->cbSize = 0;
    VAR_7 = FUNC_1(VAR_4, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_3, "got 0x%x (expected S_OK)\n", VAR_7);
    FUNC_4((VAR_6->cbSize == 0) || (VAR_6->cbSize == sizeof(ZONEATTRIBUTES)),
        "got cbSize = %d (expected 0)\n", VAR_6->cbSize);

    FUNC_3(VAR_5, -1, sizeof(VAR_5));
    VAR_6->cbSize = 64;
    VAR_7 = FUNC_1(VAR_4, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_3, "got 0x%x (expected S_OK)\n", VAR_7);
    FUNC_4((VAR_6->cbSize == 64) || (VAR_6->cbSize == sizeof(ZONEATTRIBUTES)),
        "got cbSize = %d (expected 64)\n", VAR_6->cbSize);

    FUNC_3(VAR_5, -1, sizeof(VAR_5));
    VAR_7 = FUNC_1(VAR_4, 0, VAR_6);
    FUNC_4(VAR_7 == VAR_3, "got 0x%x (expected S_OK)\n", VAR_7);
    FUNC_4((VAR_6->cbSize == 0xffffffff) || (VAR_6->cbSize == sizeof(ZONEATTRIBUTES)),
        "got cbSize = 0x%x (expected 0xffffffff)\n", VAR_6->cbSize);


    FUNC_3(VAR_5, -1, sizeof(VAR_5));
    VAR_7 = FUNC_1(VAR_4, 0xdeadbeef, VAR_6);
    FUNC_4(VAR_7 == VAR_3 || VAR_7 == VAR_0 || VAR_7 == VAR_2,
        "got 0x%x (expected S_OK or E_FAIL)\n", VAR_7);

    VAR_7 = FUNC_1(VAR_4, 0, ((void*)0));
    FUNC_4(VAR_7 == VAR_1, "got 0x%x (expected E_INVALIDARG)\n", VAR_7);

    VAR_7 = FUNC_2(VAR_4);
    FUNC_4(VAR_7 == VAR_3, "got 0x%x (expected S_OK)\n", VAR_7);
}
