
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int device ;
struct TYPE_7__ {int cbSize; int member_0; } ;
typedef TYPE_1__ SP_DEVINFO_DATA ;
typedef int * HDEVINFO ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int * VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int *,int *,int *,int ,TYPE_1__*) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,TYPE_1__*) ;
 int * FUNC_7 (int *,int *,int *,int ) ;
 int FUNC_8 (int *,TYPE_1__*,int ,int *,int *,int *) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (int *,int,int *,char*) ;
 int VAR_3 ;
 int FUNC_11 (int,char*,...) ;

__attribute__((used)) static void FUNC_12(void)
{
    SP_DEVINFO_DATA VAR_4 = {0};
    BOOL VAR_5;
    HDEVINFO VAR_6;
    int VAR_7 = 0;

    FUNC_1(0xdeadbeef);
    VAR_5 = FUNC_8(((void*)0), ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_11(!VAR_5, "Expected failure.\n");
    FUNC_11(FUNC_0() == VAR_0, "Got unexpected error %#x.\n", FUNC_0());

    VAR_6 = FUNC_3(&VAR_3, ((void*)0));
    FUNC_11(VAR_6 != VAR_2, "Failed to create device list, error %#x.\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_5 = FUNC_8(VAR_6, ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_11(!VAR_5, "Expected failure.\n");
    FUNC_11(FUNC_0() == VAR_1, "Got unexpected error %#x.\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_5 = FUNC_8(VAR_6, &VAR_4, 0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_11(!VAR_5, "Expected failure.\n");
    FUNC_11(FUNC_0() == VAR_1, "Got unexpected error %#x.\n", FUNC_0());

    VAR_4.cbSize = sizeof(VAR_4);
    FUNC_1(0xdeadbeef);
    VAR_5 = FUNC_8(VAR_6, &VAR_4, 0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_11(!VAR_5, "Expected failure.\n");
    FUNC_11(FUNC_0() == VAR_1, "Got unexpected error %#x.\n", FUNC_0());

    VAR_5 = FUNC_2(VAR_6, "Root\\LEGACY_BOGUS\\0000", &VAR_3, ((void*)0), ((void*)0), 0, &VAR_4);
    FUNC_11(VAR_5, "Failed to create device, error %#x.\n", FUNC_0());
    VAR_5 = FUNC_8(VAR_6, &VAR_4, 0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_11(VAR_5, "Failed to register device, error %#x.\n", FUNC_0());

    VAR_5 = FUNC_2(VAR_6, "Root\\LEGACY_BOGUS\\0001", &VAR_3, ((void*)0), ((void*)0), 0, &VAR_4);
    FUNC_11(VAR_5, "Failed to create device, error %#x.\n", FUNC_0());
    VAR_5 = FUNC_8(VAR_6, &VAR_4, 0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_11(VAR_5, "Failed to register device, error %#x.\n", FUNC_0());
    VAR_5 = FUNC_9(VAR_6, &VAR_4);
    FUNC_11(VAR_5, "Failed to remove device, error %#x.\n", FUNC_0());

    VAR_5 = FUNC_2(VAR_6, "Root\\LEGACY_BOGUS\\0002", &VAR_3, ((void*)0), ((void*)0), 0, &VAR_4);
    FUNC_11(VAR_5, "Failed to create device, error %#x.\n", FUNC_0());
    VAR_5 = FUNC_8(VAR_6, &VAR_4, 0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_11(VAR_5, "Failed to register device, error %#x.\n", FUNC_0());
    VAR_5 = FUNC_4(VAR_6, &VAR_4);
    FUNC_11(VAR_5, "Failed to remove device, error %#x.\n", FUNC_0());

    VAR_5 = FUNC_2(VAR_6, "Root\\LEGACY_BOGUS\\0003", &VAR_3, ((void*)0), ((void*)0), 0, &VAR_4);
    FUNC_11(VAR_5, "Failed to create device, error %#x.\n", FUNC_0());

    FUNC_5(VAR_6);

    VAR_6 = FUNC_7(&VAR_3, ((void*)0), ((void*)0), 0);
    FUNC_11(VAR_6 != VAR_2, "Failed to create device list, error %#x.\n", FUNC_0());

    FUNC_10(VAR_6, 0, &VAR_3, "Root\\LEGACY_BOGUS\\0000");
    FUNC_10(VAR_6, 1, &VAR_3, "Root\\LEGACY_BOGUS\\0002");
    FUNC_10(VAR_6, 2, &VAR_3, ((void*)0));

    while (FUNC_6(VAR_6, VAR_7++, &VAR_4))
    {
        VAR_5 = FUNC_9(VAR_6, &VAR_4);
        FUNC_11(VAR_5, "Failed to remove device, error %#x.\n", FUNC_0());
    }

    FUNC_5(VAR_6);
}
