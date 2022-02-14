
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_6__ {int member_0; int member_1; int member_2; TYPE_1__ member_3; } ;
typedef void* HCATADMIN ;
typedef TYPE_2__ GUID ;
typedef scalar_t__ DWORD ;
typedef int CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int * VAR_4 ;
 int * VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (void**,TYPE_2__*,int) ;
 int FUNC_8 (void*,int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    BOOL VAR_7;
    HCATADMIN VAR_8;
    static GUID VAR_9 = { 0xC689AABA, 0x8E78, 0x11D0, { 0x8C,0x47,0x00,0xC0,0x4F,0xC2,0x95,0xEE }};
    CHAR VAR_10[VAR_3];
    DWORD VAR_11;
    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_7(((void*)0), ((void*)0), 0);
    FUNC_6(!VAR_7, "Expected failure\n");
    FUNC_6(FUNC_1() == VAR_1,
       "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());


    if (0) {
    VAR_7 = FUNC_7(&VAR_8, ((void*)0), 0);
    FUNC_6(VAR_7, "Expected success, got FALSE with %d\n", FUNC_1());
    FUNC_6(VAR_8 != ((void*)0), "Expected a context handle, got NULL\n");


    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_8(VAR_8, 0);
    FUNC_6(VAR_7, "Expected success, got FALSE with %d\n", FUNC_1());


    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_8(VAR_8, 0);
    FUNC_6(!VAR_7, "Expected failure\n");
    FUNC_6(FUNC_1() == VAR_1,
       "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());
    }


    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_8(((void*)0), 0);
    FUNC_6(!VAR_7, "Expected failure\n");
    FUNC_6(FUNC_1() == VAR_1,
       "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());


    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_7(((void*)0), &VAR_6, 0);
    FUNC_6(!VAR_7, "Expected failure\n");
    FUNC_6(FUNC_1() == VAR_1,
       "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());
    VAR_7 = FUNC_7(&VAR_8, &VAR_6, 0);
    FUNC_6(VAR_7 || FUNC_1() == VAR_0, "CryptCATAdminAcquireContext failed %u\n", FUNC_1());
    if (!VAR_7 && FUNC_1() == VAR_0)
    {
        FUNC_9("Not running as administrator\n");
        return;
    }
    FUNC_6(VAR_8 != ((void*)0), "Expected a context handle, got NULL\n");

    VAR_11 = FUNC_0(VAR_4);
    FUNC_6(VAR_11 != VAR_2, "Expected the CatRoot directory to exist\n");


    FUNC_5(VAR_10, VAR_4);
    FUNC_4(VAR_10, "\\{DEADBEEF-DEAD-BEEF-DEAD-BEEFDEADBEEF}");
    VAR_11 = FUNC_0(VAR_10);
    FUNC_6(VAR_11 != VAR_2,
       "Expected CatRoot\\{DEADBEEF-DEAD-BEEF-DEAD-BEEFDEADBEEF} directory to exist\n");


    VAR_11 = FUNC_0(VAR_5);
    if (VAR_11 != VAR_2)
    {
        FUNC_5(VAR_10, VAR_5);
        FUNC_4(VAR_10, "\\{DEADBEEF-DEAD-BEEF-DEAD-BEEFDEADBEEF}");
        VAR_11 = FUNC_0(VAR_10);
        FUNC_6(VAR_11 != VAR_2,
            "Expected CatRoot2\\{DEADBEEF-DEAD-BEEF-DEAD-BEEFDEADBEEF} directory to exist\n");
    }

    VAR_7 = FUNC_8(VAR_8, 0);
    FUNC_6(VAR_7, "Expected success, got FALSE with %d\n", FUNC_1());


    VAR_7 = FUNC_7(&VAR_8, &VAR_9, 0);
    FUNC_6(VAR_7, "Expected success, got FALSE with %d\n", FUNC_1());
    FUNC_6(VAR_8 != ((void*)0), "Expected a context handle, got NULL\n");

    VAR_7 = FUNC_8(VAR_8, 0);
    FUNC_6(VAR_7, "Expected success, got FALSE with %d\n", FUNC_1());

    VAR_8 = (void *) 0xdeadbeef;
    FUNC_2(0xdeadbeef);

    VAR_7 = FUNC_7(&VAR_8, &VAR_9, 1);
    FUNC_6((!VAR_7 && (FUNC_1() == VAR_1) && (VAR_8 == (void *) 0xdeadbeef)) ||
        FUNC_3(VAR_7 && VAR_8 != ((void*)0) && VAR_8 != (void *) 0xdeadbeef),
        "Expected FALSE and ERROR_INVALID_PARAMETER with untouched handle, got %d and %u with %p\n",
        VAR_7, FUNC_1(), VAR_8);

    if (VAR_7 && VAR_8)
    {
        FUNC_2(0xdeadbeef);
        VAR_7 = FUNC_8(VAR_8, 0);
        FUNC_6(VAR_7, "Expected success, got FALSE with %d\n", FUNC_1());
    }
}
