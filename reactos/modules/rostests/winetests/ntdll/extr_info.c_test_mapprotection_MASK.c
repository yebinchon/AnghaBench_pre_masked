
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int oldflags ;
typedef int info ;
typedef int flags ;
typedef int ULONG ;
struct TYPE_7__ {int LowPart; scalar_t__ HighPart; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
struct TYPE_8__ {int Protect; } ;
typedef int SIZE_T ;
typedef int NTSTATUS ;
typedef TYPE_2__ MEMORY_BASIC_INFORMATION ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef int HANDLE ;


 int FUNC_0 () ;
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
 int VAR_15 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int *,TYPE_3__*,int,int,int ) ;
 int FUNC_4 (int ,int ,void**,int ,int ,TYPE_3__*,int*,int ,int ,int) ;
 int FUNC_5 (int ,int ,int *,int,int *) ;
 int FUNC_6 (int ,void*,int ,TYPE_2__*,int,int*) ;
 int FUNC_7 (int ,int ,int *,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    HANDLE VAR_16;
    void* VAR_17;
    MEMORY_BASIC_INFORMATION VAR_18;
    ULONG VAR_19, VAR_20, VAR_21 = VAR_0;
    LARGE_INTEGER VAR_22, VAR_23;
    NTSTATUS VAR_24;
    SIZE_T VAR_25, VAR_26;
    void (*VAR_27)(void);

    if (!&FUNC_2) {
        FUNC_9("No NtClose ... Win98\n");
        return;
    }

    VAR_24 = FUNC_5( FUNC_0(), VAR_4, &VAR_19, sizeof (VAR_19), &VAR_20);
    if (VAR_24 == VAR_13) {
        FUNC_9("Invalid Parameter on ProcessExecuteFlags query?\n");
        return;
    }
    FUNC_1( (VAR_24 == VAR_14) || (VAR_24 == VAR_12), "Expected STATUS_SUCCESS, got %08x\n", VAR_24);
    VAR_24 = FUNC_7( FUNC_0(), VAR_4, &VAR_21, sizeof(VAR_21) );
    FUNC_1( (VAR_24 == VAR_14) || (VAR_24 == VAR_12), "Expected STATUS_SUCCESS, got %08x\n", VAR_24);

    VAR_22.u.LowPart = 0x2000;
    VAR_22.u.HighPart = 0;
    VAR_24 = FUNC_3 ( &VAR_16,
        VAR_11 | VAR_8 | VAR_6 | VAR_7 | VAR_5,
        ((void*)0),
        &VAR_22,
        VAR_3,
        VAR_9 | VAR_10,
        0
    );
    FUNC_1( VAR_24 == VAR_14, "Expected STATUS_SUCCESS, got %08x\n", VAR_24);

    VAR_23.u.LowPart = 0;
    VAR_23.u.HighPart = 0;
    VAR_26 = 0x2000;
    VAR_17 = ((void*)0);
    VAR_24 = FUNC_4 ( VAR_16, FUNC_0(), &VAR_17, 0, 0, &VAR_23, &VAR_26, VAR_15, 0, VAR_3);
    FUNC_1( VAR_24 == VAR_14, "Expected STATUS_SUCCESS, got %08x\n", VAR_24);


    *(unsigned char*)VAR_17 = 0xc3;







    FUNC_10("trying to execute code in the readwrite only mapped anon file...\n");
    VAR_27 = VAR_17;VAR_27();
    FUNC_10("...done.\n");

    VAR_24 = FUNC_6( FUNC_0(), VAR_17, VAR_1, &VAR_18, sizeof(VAR_18), &VAR_25 );
    FUNC_1( VAR_24 == VAR_14, "Expected STATUS_SUCCESS, got %08x\n", VAR_24);
    FUNC_1( VAR_25 == sizeof(VAR_18), "Expected STATUS_SUCCESS, got %08x\n", VAR_24);
    FUNC_1((VAR_18.Protect & ~VAR_2) == VAR_3, "addr.Protect is not PAGE_READWRITE, but 0x%x\n", VAR_18.Protect);

    VAR_24 = FUNC_8( FUNC_0(), (char *)VAR_17 + 0x1050 );
    FUNC_1( VAR_24 == VAR_14, "Expected STATUS_SUCCESS, got %08x\n", VAR_24);
    FUNC_2 (VAR_16);


    FUNC_7( FUNC_0(), VAR_4, &VAR_19, sizeof(VAR_19) );
}
