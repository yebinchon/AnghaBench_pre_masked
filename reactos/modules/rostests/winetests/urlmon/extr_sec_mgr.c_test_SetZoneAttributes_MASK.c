
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_4__ {int cbSize; } ;
typedef TYPE_1__ ZONEATTRIBUTES ;
typedef int IInternetZoneManager ;
typedef scalar_t__ HRESULT ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;
typedef int CHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *,int **) ;
 scalar_t__ FUNC_6 (int ,int *,int **) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_11 (int *,int **,int ) ;
 int FUNC_12 (int *,char*,char*,int) ;
 char* VAR_9 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void FUNC_15(void)
{
    IInternetZoneManager *VAR_10 = ((void*)0);
    CHAR VAR_11 [sizeof(ZONEATTRIBUTES) + 16];
    ZONEATTRIBUTES* VAR_12 = (ZONEATTRIBUTES*) VAR_11;
    CHAR VAR_13[VAR_5];
    HKEY VAR_14;
    HRESULT VAR_15;
    DWORD VAR_16;

    FUNC_13("testing SetZoneAttributes...\n");
    VAR_15 = FUNC_11(((void*)0), &VAR_10, 0);
    FUNC_10(VAR_15 == VAR_6, "CoInternetCreateZoneManager result: 0x%x\n", VAR_15);
    if (FUNC_0(VAR_15))
        return;

    FUNC_8(VAR_11, -1, sizeof(VAR_11));
    VAR_15 = FUNC_1(VAR_10, VAR_8, VAR_12);
    FUNC_10(VAR_15 == VAR_6, "got 0x%x (expected S_OK)\n", VAR_15);

    FUNC_12(VAR_13, "%s\\Zones\\%d", VAR_9, VAR_7);
    VAR_16 = FUNC_5(VAR_4, VAR_13, &VAR_14);
    FUNC_4(VAR_14);

    FUNC_10(VAR_16 == VAR_1, "got %d (expected ERROR_SUCCESS)\n", VAR_16);
    if (VAR_16 != VAR_1)
        goto cleanup;

    VAR_12->cbSize = sizeof(ZONEATTRIBUTES);
    VAR_15 = FUNC_3(VAR_10, VAR_7, ((void*)0));
    FUNC_10(VAR_15 == VAR_3, "got 0x%x (expected E_INVALIDARG)\n", VAR_15);


    VAR_15 = FUNC_3(VAR_10, VAR_7, VAR_12);
    if (VAR_15 == VAR_2) {
        FUNC_14("SetZoneAttributes not supported: IE too old\n");
        goto cleanup;
    }
    FUNC_10(VAR_15 == VAR_6, "got 0x%x (expected S_OK)\n", VAR_15);


    VAR_12->cbSize = sizeof(ZONEATTRIBUTES) + sizeof(DWORD);
    VAR_15 = FUNC_3(VAR_10, VAR_7, VAR_12);
    FUNC_10(VAR_15 == VAR_6, "got 0x%x for sizeof(ZONEATTRIBUTES) + sizeof(DWORD) (expected S_OK)\n", VAR_15);

    VAR_12->cbSize = sizeof(ZONEATTRIBUTES) - sizeof(DWORD);
    VAR_15 = FUNC_3(VAR_10, VAR_7, VAR_12);
    FUNC_10(VAR_15 == VAR_6, "got 0x%x for sizeof(ZONEATTRIBUTES) - sizeof(DWORD) (expected S_OK)\n", VAR_15);

    VAR_12->cbSize = 0;
    VAR_15 = FUNC_3(VAR_10, VAR_7, VAR_12);
    FUNC_10(VAR_15 == VAR_6, "got 0x%x for size 0 (expected S_OK)\n", VAR_15);


    FUNC_9(VAR_4, VAR_13);



    VAR_15 = FUNC_3(VAR_10, VAR_7, VAR_12);
    FUNC_10((VAR_15 == VAR_6) || FUNC_7(VAR_15 == VAR_2), "got 0x%x (expected S_OK)\n", VAR_15);


    VAR_16 = FUNC_6(VAR_4, VAR_13, &VAR_14);
    FUNC_10((VAR_16 == VAR_0) && (VAR_14 == ((void*)0)),
        "got %u with %p (expected ERROR_FILE_NOT_FOUND with NULL)\n", VAR_16, VAR_14);

    if (VAR_14) FUNC_4(VAR_14);

cleanup:

    FUNC_9(VAR_4, VAR_13);

    VAR_15 = FUNC_2(VAR_10);
    FUNC_10(VAR_15 == VAR_6, "got 0x%x (expected S_OK)\n", VAR_15);
}
