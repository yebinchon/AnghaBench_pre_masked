
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int id ;
typedef int device ;
struct TYPE_4__ {int cbSize; int member_0; } ;
typedef TYPE_1__ SP_DEVINFO_DATA ;
typedef int * HDEVINFO ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* FUNC_0 () ;
 int * VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int *,int *,int *,int ,TYPE_1__*) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*,char*,int,int *) ;
 int VAR_5 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    BOOL VAR_6;
    HDEVINFO VAR_7;
    SP_DEVINFO_DATA VAR_8 = {0};
    char VAR_9[200];
    DWORD VAR_10;

    FUNC_1(0xdeadbeef);
    VAR_6 = FUNC_5(((void*)0), ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_6(!VAR_6, "Expected failure.\n");
    FUNC_6(FUNC_0() == VAR_2, "Got unexpected error %#x.\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_6 = FUNC_5(((void*)0), &VAR_8, ((void*)0), 0, ((void*)0));
    FUNC_6(!VAR_6, "Expected failure.\n");
    FUNC_6(FUNC_0() == VAR_2, "Got unexpected error %#x.\n", FUNC_0());

    VAR_7 = FUNC_3(&VAR_5, ((void*)0));
    FUNC_6(VAR_7 != VAR_4, "Failed to create device list, error %#x.\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_6 = FUNC_5(VAR_7, ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_6(!VAR_6, "Expected failure.\n");
    FUNC_6(FUNC_0() == VAR_3, "Got unexpected error %#x.\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_6 = FUNC_5(VAR_7, &VAR_8, ((void*)0), 0, ((void*)0));
    FUNC_6(!VAR_6, "Expected failure.\n");
    FUNC_6(FUNC_0() == VAR_3, "Got unexpected error %#x.\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_6 = FUNC_5(VAR_7, &VAR_8, ((void*)0), 0, &VAR_10);
    FUNC_6(!VAR_6, "Expected failure.\n");
    FUNC_6(FUNC_0() == VAR_3, "Got unexpected error %#x.\n", FUNC_0());

    VAR_8.cbSize = sizeof(VAR_8);
    FUNC_1(0xdeadbeef);
    VAR_6 = FUNC_5(VAR_7, &VAR_8, ((void*)0), 0, &VAR_10);
    FUNC_6(!VAR_6, "Expected failure.\n");
    FUNC_6(FUNC_0() == VAR_3, "Got unexpected error %#x.\n", FUNC_0());

    VAR_6 = FUNC_2(VAR_7, "Root\\LEGACY_BOGUS\\0000", &VAR_5, ((void*)0), ((void*)0), 0, &VAR_8);
    FUNC_6(VAR_6, "Failed to create device, error %#x.\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_6 = FUNC_5(VAR_7, &VAR_8, ((void*)0), 0, &VAR_10);
    FUNC_6(!VAR_6, "Expected failure.\n");
    FUNC_6(FUNC_0() == VAR_1, "Got unexpected error %#x.\n", FUNC_0());

    VAR_6 = FUNC_5(VAR_7, &VAR_8, VAR_9, sizeof(VAR_9), ((void*)0));
    FUNC_6(VAR_6, "Failed to get device id, error %#x.\n", FUNC_0());
    FUNC_6(!FUNC_7(VAR_9, "ROOT\\LEGACY_BOGUS\\0000"), "Got unexpected id %s.\n", VAR_9);

    VAR_6 = FUNC_2(VAR_7, "LEGACY_BOGUS", &VAR_5, ((void*)0), ((void*)0), VAR_0, &VAR_8);
    FUNC_6(VAR_6, "SetupDiCreateDeviceInfoA failed: %08x\n", FUNC_0());

    VAR_6 = FUNC_5(VAR_7, &VAR_8, VAR_9, sizeof(VAR_9), ((void*)0));
    FUNC_6(VAR_6, "Failed to get device id, error %#x.\n", FUNC_0());
    FUNC_6(!FUNC_7(VAR_9, "ROOT\\LEGACY_BOGUS\\0001"), "Got unexpected id %s.\n", VAR_9);

    FUNC_4(VAR_7);
}
