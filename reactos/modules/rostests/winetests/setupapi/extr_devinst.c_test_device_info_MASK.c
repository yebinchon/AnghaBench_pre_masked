
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int ret_device ;
typedef int id ;
typedef int device ;
struct TYPE_15__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_17__ {int member_0; int member_1; int member_2; TYPE_1__ member_3; } ;
struct TYPE_16__ {int member_0; int cbSize; int DevInst; int ClassGuid; } ;
typedef TYPE_2__ SP_DEVINFO_DATA ;
typedef int * HDEVINFO ;
typedef TYPE_3__ GUID ;
typedef int BOOL ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 TYPE_3__ const VAR_7 ;
 char* FUNC_0 () ;
 int * VAR_8 ;
 int FUNC_1 (int *,TYPE_3__ const*) ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,TYPE_3__ const*,int *,int *,int ,TYPE_2__*) ;
 int * FUNC_4 (TYPE_3__ const*,int *) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,TYPE_2__*) ;
 int FUNC_8 (int *,TYPE_2__*,char*,int,int *) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 int FUNC_10 (int *,int,TYPE_3__ const*,char*) ;
 TYPE_3__ const VAR_10 ;
 int FUNC_11 (char*,char*,int ) ;
 int FUNC_12 (char*,char,int) ;
 int FUNC_13 (int,char*,...) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(void)
{
    static const GUID VAR_11 = {0xdeadbeef,0xdead,0xbeef,{0xde,0xad,0xbe,0xef,0xde,0xad,0xbe,0xef}};
    SP_DEVINFO_DATA VAR_12 = {0}, VAR_13 = {sizeof(VAR_13)};
    char VAR_14[VAR_9 + 2];
    HDEVINFO VAR_15;
    BOOL VAR_16;

    FUNC_2(0xdeadbeef);
    VAR_16 = FUNC_3(((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_13(!VAR_16, "Expected failure.\n");
    FUNC_13(FUNC_0() == VAR_2, "Got unexpected error %#x.\n", FUNC_0());

    FUNC_2(0xdeadbeef);
    VAR_16 = FUNC_3(((void*)0), "Root\\LEGACY_BOGUS\\0000", ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_13(!VAR_16, "Expected failure.\n");
    FUNC_13(FUNC_0() == VAR_3, "Got unexpected error %#x.\n", FUNC_0());

    VAR_15 = FUNC_4(&VAR_10, ((void*)0));
    FUNC_13(VAR_15 != VAR_8, "Failed to create device info, error %#x.\n", FUNC_0());

    FUNC_2(0xdeadbeef);
    VAR_16 = FUNC_3(VAR_15, "Root\\LEGACY_BOGUS\\0000", ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_13(!VAR_16, "Expected failure.\n");
    FUNC_13(FUNC_0() == VAR_4, "Got unexpected error %#x.\n", FUNC_0());

    FUNC_2(0xdeadbeef);
    VAR_16 = FUNC_3(VAR_15, "Root\\LEGACY_BOGUS\\0000", &VAR_11, ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_13(!VAR_16, "Expected failure.\n");
    FUNC_13(FUNC_0() == VAR_0, "Got unexpected error %#x.\n", FUNC_0());

    FUNC_2(0xdeadbeef);
    VAR_16 = FUNC_3(VAR_15, "Root\\LEGACY_BOGUS\\0000", &VAR_7, ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_13(!VAR_16, "Expected failure.\n");
    FUNC_13(FUNC_0() == VAR_0, "Got unexpected error %#x.\n", FUNC_0());

    VAR_16 = FUNC_3(VAR_15, "Root\\LEGACY_BOGUS\\0000", &VAR_10, ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_13(VAR_16, "Failed to create device, error %#x.\n", FUNC_0());

    FUNC_10(VAR_15, 0, &VAR_10, "ROOT\\LEGACY_BOGUS\\0000");
    FUNC_10(VAR_15, 1, &VAR_10, ((void*)0));

    FUNC_2(0xdeadbeef);
    VAR_16 = FUNC_3(VAR_15, "Root\\LEGACY_BOGUS\\0000", &VAR_10, ((void*)0), ((void*)0), 0, &VAR_12);
    FUNC_13(!VAR_16, "Expected failure.\n");
    FUNC_13(FUNC_0() == VAR_1, "Got unexpected error %#x.\n", FUNC_0());

    FUNC_2(0xdeadbeef);
    VAR_16 = FUNC_3(VAR_15, "Root\\LEGACY_BOGUS\\0001", &VAR_10, ((void*)0), ((void*)0), 0, &VAR_12);
    FUNC_13(!VAR_16, "Expected failure.\n");
    FUNC_13(FUNC_0() == VAR_5, "Got unexpected error %#x.\n", FUNC_0());

    FUNC_10(VAR_15, 0, &VAR_10, "ROOT\\LEGACY_BOGUS\\0000");
    FUNC_10(VAR_15, 1, &VAR_10, "ROOT\\LEGACY_BOGUS\\0001");
    FUNC_10(VAR_15, 2, &VAR_10, ((void*)0));

    VAR_12.cbSize = sizeof(VAR_12);
    VAR_16 = FUNC_3(VAR_15, "Root\\LEGACY_BOGUS\\0002", &VAR_10, ((void*)0), ((void*)0), 0, &VAR_12);
    FUNC_13(VAR_16, "Got unexpected error %#x.\n", FUNC_0());
    FUNC_13(FUNC_1(&VAR_12.ClassGuid, &VAR_10), "Got unexpected class %s.\n",
            FUNC_16(&VAR_12.ClassGuid));
    VAR_16 = FUNC_8(VAR_15, &VAR_12, VAR_14, sizeof(VAR_14), ((void*)0));
    FUNC_13(VAR_16, "Got unexpected error %#x.\n", FUNC_0());
    FUNC_13(!FUNC_14(VAR_14, "ROOT\\LEGACY_BOGUS\\0002"), "Got unexpected id %s.\n", VAR_14);

    FUNC_10(VAR_15, 0, &VAR_10, "ROOT\\LEGACY_BOGUS\\0000");
    FUNC_10(VAR_15, 1, &VAR_10, "ROOT\\LEGACY_BOGUS\\0001");
    FUNC_10(VAR_15, 2, &VAR_10, "ROOT\\LEGACY_BOGUS\\0002");
    FUNC_10(VAR_15, 3, &VAR_10, ((void*)0));

    VAR_16 = FUNC_7(VAR_15, 0, &VAR_13);
    FUNC_13(VAR_16, "Failed to enumerate devices, error %#x.\n", FUNC_0());
    VAR_16 = FUNC_5(VAR_15, &VAR_13);
    FUNC_13(VAR_16, "Failed to delete device, error %#x.\n", FUNC_0());

    FUNC_10(VAR_15, 0, &VAR_10, "ROOT\\LEGACY_BOGUS\\0001");
    FUNC_10(VAR_15, 1, &VAR_10, "ROOT\\LEGACY_BOGUS\\0002");
    FUNC_10(VAR_15, 2, &VAR_10, ((void*)0));

    VAR_16 = FUNC_9(VAR_15, &VAR_12);
    FUNC_13(VAR_16, "Got unexpected error %#x.\n", FUNC_0());

    FUNC_10(VAR_15, 0, &VAR_10, "ROOT\\LEGACY_BOGUS\\0001");

    VAR_16 = FUNC_7(VAR_15, 1, &VAR_13);
    FUNC_13(VAR_16, "Got unexpected error %#x.\n", FUNC_0());
    FUNC_13(FUNC_1(&VAR_13.ClassGuid, &VAR_10), "Got unexpected class %s.\n",
            FUNC_16(&VAR_13.ClassGuid));
    VAR_16 = FUNC_8(VAR_15, &VAR_13, VAR_14, sizeof(VAR_14), ((void*)0));
    FUNC_13(!VAR_16, "Expected failure.\n");
    FUNC_13(FUNC_0() == VAR_6, "Got unexpected error %#x.\n", FUNC_0());
    FUNC_13(VAR_13.DevInst == VAR_12.DevInst, "Expected device node %#x, got %#x.\n",
            VAR_12.DevInst, VAR_13.DevInst);

    FUNC_10(VAR_15, 2, &VAR_10, ((void*)0));

    FUNC_6(VAR_15);

    VAR_15 = FUNC_4(((void*)0), ((void*)0));
    FUNC_13(VAR_15 != VAR_8, "Failed to create device info, error %#x.\n", FUNC_0());

    FUNC_2(0xdeadbeef);
    VAR_16 = FUNC_3(VAR_15, "Root\\LEGACY_BOGUS\\0000", ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_13(!VAR_16, "Expected failure.\n");
    FUNC_13(FUNC_0() == VAR_4, "Got unexpected error %#x.\n", FUNC_0());

    VAR_16 = FUNC_3(VAR_15, "Root\\LEGACY_BOGUS\\deadbeef", &VAR_11, ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_13(VAR_16, "Failed to create device, error %#x.\n", FUNC_0());

    VAR_16 = FUNC_3(VAR_15, "Root\\LEGACY_BOGUS\\null", &VAR_7, ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_13(VAR_16, "Failed to create device, error %#x.\n", FUNC_0());

    VAR_16 = FUNC_3(VAR_15, "Root\\LEGACY_BOGUS\\testguid", &VAR_10, ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_13(VAR_16, "Failed to create device, error %#x.\n", FUNC_0());

    FUNC_10(VAR_15, 0, &VAR_11, "ROOT\\LEGACY_BOGUS\\deadbeef");
    FUNC_10(VAR_15, 1, &VAR_7, "ROOT\\LEGACY_BOGUS\\null");
    FUNC_10(VAR_15, 2, &VAR_10, "ROOT\\LEGACY_BOGUS\\testguid");
    FUNC_10(VAR_15, 3, ((void*)0), ((void*)0));

    FUNC_12(VAR_14, 'x', sizeof(VAR_14));
    FUNC_11(VAR_14, "Root\\LEGACY_BOGUS\\", FUNC_15("Root\\LEGACY_BOGUS\\"));
    VAR_14[VAR_9 + 1] = 0;
    FUNC_2(0xdeadbeef);
    VAR_16 = FUNC_3(VAR_15, VAR_14, &VAR_10, ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_13(!VAR_16, "Expected failure.\n");
    FUNC_13(FUNC_0() == VAR_2, "Got unexpected error %#x.\n", FUNC_0());

    VAR_14[VAR_9] = 0;
    FUNC_2(0xdeadbeef);
    VAR_16 = FUNC_3(VAR_15, VAR_14, &VAR_10, ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_13(!VAR_16, "Expected failure.\n");
    FUNC_13(FUNC_0() == VAR_2, "Got unexpected error %#x.\n", FUNC_0());

    VAR_14[VAR_9 - 1] = 0;
    VAR_16 = FUNC_3(VAR_15, VAR_14, &VAR_10, ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_13(VAR_16, "Failed to create device, error %#x.\n", FUNC_0());

    FUNC_6(VAR_15);
}
