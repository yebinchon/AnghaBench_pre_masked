
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ handle; } ;
typedef TYPE_1__ ioinfo ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,int,int *,int ,int ,int *) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,scalar_t__) ;
 TYPE_1__** VAR_11 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (intptr_t,int ) ;
 int FUNC_6 (size_t) ;
 int VAR_12 ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(void)
{
    ioinfo *VAR_13, VAR_14, *VAR_15, VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
    DWORD VAR_23;
    HANDLE VAR_24;


    VAR_24 = FUNC_0("fdopen.tst", VAR_3|VAR_4,
            VAR_1 | VAR_2, ((void*)0), VAR_0, 0, ((void*)0));
    FUNC_7(VAR_24 != VAR_5, "error opening fdopen.tst file\n");

    VAR_17 = FUNC_5((intptr_t)VAR_24, 0);
    FUNC_7(VAR_17 != -1, "_open_osfhandle failed (%d)\n", VAR_12);
    VAR_18 = FUNC_5((intptr_t)VAR_24, 0);
    FUNC_7(VAR_18 != -1, "_open_osfhandle failed (%d)\n", VAR_12);
    FUNC_7(VAR_17 != VAR_18, "fd1 == fd2\n");

    FUNC_7((HANDLE)FUNC_4(VAR_17) == VAR_24, "handles mismatch (%p != %p)\n",
            (HANDLE)FUNC_4(VAR_17), VAR_24);
    FUNC_7((HANDLE)FUNC_4(VAR_18) == VAR_24, "handles mismatch (%p != %p)\n",
            (HANDLE)FUNC_4(VAR_18), VAR_24);
    VAR_19 = FUNC_6(VAR_17);
    FUNC_7(!VAR_19, "close(fd1) failed (%d)\n", VAR_12);
    FUNC_7(!FUNC_2(VAR_24, &VAR_23), "GetHandleInformation succeeded\n");
    FUNC_7(FUNC_6(VAR_18), "close(fd2) succeeded\n");


    VAR_12 = 0xdeadbeef;
    VAR_19 = FUNC_6(VAR_17);
    FUNC_7(VAR_19 == -1, "close(fd1) succeeded\n");
    FUNC_7(VAR_12 == 9, "errno = %d\n", VAR_12);


    VAR_24 = FUNC_0("fdopen.tst", VAR_3|VAR_4,
            VAR_1 | VAR_2, ((void*)0), VAR_0, 0, ((void*)0));
    FUNC_7(VAR_24 != VAR_5, "error opening fdopen.tst file\n");


    VAR_13 = &VAR_11[VAR_8/VAR_6][VAR_8%VAR_6];
    VAR_15 = &VAR_11[VAR_7/VAR_6][VAR_7%VAR_6];
    VAR_14 = *VAR_13;
    VAR_16 = *VAR_15;
    VAR_13->handle = VAR_24;
    VAR_15->handle = VAR_24;

    VAR_19 = FUNC_6(VAR_8);
    VAR_20 = FUNC_2(VAR_24, &VAR_23);
    VAR_21 = FUNC_6(VAR_7);
    VAR_22 = FUNC_2(VAR_24, &VAR_23);

    *VAR_13 = VAR_14;
    *VAR_15 = VAR_16;
    FUNC_3(VAR_10, VAR_13->handle);
    FUNC_3(VAR_9, VAR_15->handle);


    FUNC_7(!VAR_19, "close(STDOUT_FILENO) failed\n");
    FUNC_7(VAR_20, "GetHandleInformation failed\n");
    FUNC_7(!VAR_21, "close(STDERR_FILENO) failed\n");
    FUNC_7(!VAR_22, "GetHandleInformation succeeded\n");

    FUNC_1( "fdopen.tst" );
}
