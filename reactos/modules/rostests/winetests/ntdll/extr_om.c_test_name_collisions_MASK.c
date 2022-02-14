
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UNICODE_STRING ;
struct TYPE_4__ {int LowPart; scalar_t__ HighPart; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;


 int * FUNC_0 (int *,int ,int ,char*) ;
 int * FUNC_1 (int ,int *,int ,int ,int,char*) ;
 int * FUNC_2 (int *,int ,char*) ;
 int * FUNC_3 (int *,int,int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (int *,int *,int ,int *,int *) ;
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
 int * FUNC_6 () ;
 int FUNC_7 (int,char*,int *,...) ;
 int * FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int *) ;
 int FUNC_11 (int **,int ,int *,int ,int ) ;
 int FUNC_12 (int **,int ,int *,int ) ;
 int FUNC_13 (int **,int ,int *,TYPE_2__*,int ,int ,int ) ;
 int FUNC_14 (int **,int ,int *,int,int) ;
 int FUNC_15 (int **,int ,int *,int ) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static void FUNC_19(void)
{
    NTSTATUS VAR_15;
    UNICODE_STRING VAR_16;
    OBJECT_ATTRIBUTES VAR_17;
    HANDLE VAR_18, VAR_19, VAR_20, VAR_21;
    DWORD VAR_22;
    LARGE_INTEGER VAR_23;

    FUNC_5(&VAR_17, &VAR_16, 0, 0, ((void*)0));
    FUNC_16(&VAR_16, "\\");
    VAR_15 = FUNC_10( &VAR_19, VAR_0, &VAR_17 );
    FUNC_7( VAR_15 == VAR_10, "NtCreateDirectoryObject got %08x\n", &VAR_15 );
    FUNC_5(&VAR_17, &VAR_16, VAR_6, 0, ((void*)0));

    VAR_15 = FUNC_10( &VAR_19, VAR_0, &VAR_17 );
    FUNC_7( VAR_15 == VAR_11, "NtCreateDirectoryObject got %08x\n", &VAR_15 );
    FUNC_9(VAR_19);
    VAR_15 = FUNC_12(&VAR_19, VAR_3, &VAR_17, VAR_2);
    FUNC_7(VAR_15 == VAR_13,
        "NtCreateMutant should have failed with STATUS_OBJECT_TYPE_MISMATCH got(%08x)\n", &VAR_15);
    FUNC_17(&VAR_16);

    FUNC_16(&VAR_16, "\\??\\PIPE\\om.c-mutant");
    VAR_15 = FUNC_12(&VAR_19, VAR_3, &VAR_17, VAR_2);
    FUNC_7(VAR_15 == VAR_13 || VAR_15 == VAR_12,
        "NtCreateMutant should have failed with STATUS_OBJECT_TYPE_MISMATCH got(%08x)\n", &VAR_15);
    FUNC_17(&VAR_16);

    if (!(VAR_18 = FUNC_6()))
    {
        FUNC_18( "couldn't find the BaseNamedObjects dir\n" );
        return;
    }
    FUNC_16(&VAR_16, "om.c-test");
    FUNC_5(&VAR_17, &VAR_16, VAR_6, VAR_18, ((void*)0));
    VAR_19 = FUNC_2(((void*)0), VAR_2, "om.c-test");
    FUNC_7(VAR_19 != 0, "CreateMutexA failed got ret=%p (%d)\n", VAR_19, FUNC_4());
    VAR_15 = FUNC_12(&VAR_20, VAR_3, &VAR_17, VAR_2);
    FUNC_7(VAR_15 == VAR_11 && VAR_20 != ((void*)0),
        "NtCreateMutant should have succeeded with STATUS_OBJECT_NAME_EXISTS got(%08x)\n", &VAR_15);
    VAR_21 = FUNC_2(((void*)0), VAR_2, "om.c-test");
    VAR_22 = FUNC_4();
    FUNC_7(VAR_21 != 0 && VAR_22 == VAR_1,
        "CreateMutexA should have succeeded with ERROR_ALREADY_EXISTS got ret=%p (%d)\n", VAR_21, VAR_22);
    FUNC_9(VAR_19);
    FUNC_9(VAR_20);
    FUNC_9(VAR_21);

    VAR_19 = FUNC_0(((void*)0), VAR_2, VAR_2, "om.c-test");
    FUNC_7(VAR_19 != 0, "CreateEventA failed got ret=%p (%d)\n", VAR_19, FUNC_4());
    VAR_15 = FUNC_11(&VAR_20, VAR_3, &VAR_17, VAR_2, VAR_2);
    FUNC_7(VAR_15 == VAR_11 && VAR_20 != ((void*)0),
        "NtCreateEvent should have succeeded with STATUS_OBJECT_NAME_EXISTS got(%08x)\n", &VAR_15);
    VAR_21 = FUNC_0(((void*)0), VAR_2, VAR_2, "om.c-test");
    VAR_22 = FUNC_4();
    FUNC_7(VAR_21 != 0 && VAR_22 == VAR_1,
        "CreateEventA should have succeeded with ERROR_ALREADY_EXISTS got ret=%p (%d)\n", VAR_21, VAR_22);
    FUNC_9(VAR_19);
    FUNC_9(VAR_20);
    FUNC_9(VAR_21);

    VAR_19 = FUNC_3(((void*)0), 1, 2, "om.c-test");
    FUNC_7(VAR_19 != 0, "CreateSemaphoreA failed got ret=%p (%d)\n", VAR_19, FUNC_4());
    VAR_15 = FUNC_14(&VAR_20, VAR_3, &VAR_17, 1, 2);
    FUNC_7(VAR_15 == VAR_11 && VAR_20 != ((void*)0),
        "NtCreateSemaphore should have succeeded with STATUS_OBJECT_NAME_EXISTS got(%08x)\n", &VAR_15);
    VAR_21 = FUNC_3(((void*)0), 1, 2, "om.c-test");
    VAR_22 = FUNC_4();
    FUNC_7(VAR_21 != 0 && VAR_22 == VAR_1,
        "CreateSemaphoreA should have succeeded with ERROR_ALREADY_EXISTS got ret=%p (%d)\n", VAR_21, VAR_22);
    FUNC_9(VAR_19);
    FUNC_9(VAR_20);
    FUNC_9(VAR_21);

    VAR_19 = FUNC_8(((void*)0), VAR_14, "om.c-test");
    FUNC_7(VAR_19 != 0, "CreateWaitableTimerA failed got ret=%p (%d)\n", VAR_19, FUNC_4());
    VAR_15 = FUNC_15(&VAR_20, VAR_3, &VAR_17, VAR_5);
    FUNC_7(VAR_15 == VAR_11 && VAR_20 != ((void*)0),
        "NtCreateTimer should have succeeded with STATUS_OBJECT_NAME_EXISTS got(%08x)\n", &VAR_15);
    VAR_21 = FUNC_8(((void*)0), VAR_14, "om.c-test");
    VAR_22 = FUNC_4();
    FUNC_7(VAR_21 != 0 && VAR_22 == VAR_1,
        "CreateWaitableTimerA should have succeeded with ERROR_ALREADY_EXISTS got ret=%p (%d)\n", VAR_21, VAR_22);
    FUNC_9(VAR_19);
    FUNC_9(VAR_20);
    FUNC_9(VAR_21);

    VAR_19 = FUNC_1(VAR_4, ((void*)0), VAR_7, 0, 256, "om.c-test");
    FUNC_7(VAR_19 != 0, "CreateFileMappingA failed got ret=%p (%d)\n", VAR_19, FUNC_4());
    VAR_23.u.LowPart = 256;
    VAR_23.u.HighPart = 0;
    VAR_15 = FUNC_13(&VAR_20, VAR_8, &VAR_17, &VAR_23, VAR_7, VAR_9, 0);
    FUNC_7(VAR_15 == VAR_11 && VAR_20 != ((void*)0),
        "NtCreateSection should have succeeded with STATUS_OBJECT_NAME_EXISTS got(%08x)\n", &VAR_15);
    VAR_21 = FUNC_1(VAR_4, ((void*)0), VAR_7, 0, 256, "om.c-test");
    VAR_22 = FUNC_4();
    FUNC_7(VAR_21 != 0 && VAR_22 == VAR_1,
        "CreateFileMappingA should have succeeded with ERROR_ALREADY_EXISTS got ret=%p (%d)\n", VAR_21, VAR_22);
    FUNC_9(VAR_19);
    FUNC_9(VAR_20);
    FUNC_9(VAR_21);

    FUNC_17(&VAR_16);
    FUNC_9(VAR_18);
}
