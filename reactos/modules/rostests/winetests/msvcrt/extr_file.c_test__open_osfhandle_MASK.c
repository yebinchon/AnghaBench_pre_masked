
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int handle; int wxflag; } ;
typedef TYPE_1__ ioinfo ;
typedef int HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int FUNC_2 (int*,int*,int *,int ) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__** VAR_5 ;
 int FUNC_4 (intptr_t,int ) ;
 int FUNC_5 (int) ;
 int VAR_6 ;
 int FUNC_6 (int,char*,...) ;

__attribute__((used)) static void FUNC_7(void)
{
    ioinfo *VAR_7;
    HANDLE VAR_8, VAR_9;
    int VAR_10;

    VAR_6 = 0xdeadbeef;
    VAR_10 = FUNC_4((intptr_t)VAR_3, 0);
    FUNC_6(VAR_10 == -1, "_open_osfhandle returned %d\n", VAR_10);
    FUNC_6(VAR_6 == VAR_1, "errno = %d\n", VAR_6);

    VAR_8 = FUNC_1("open_osfhandle.tst", VAR_2, 0, ((void*)0), VAR_0, 0, ((void*)0));
    VAR_10 = FUNC_4((intptr_t)VAR_8, 0);
    FUNC_6(VAR_10 > 0, "_open_osfhandle returned %d (%d)\n", VAR_10, VAR_6);
    VAR_7 = &VAR_5[VAR_10/VAR_4][VAR_10%VAR_4];
    FUNC_6(VAR_7->handle == VAR_8, "info->handle = %p, expected %p\n", VAR_7->handle, VAR_8);
    FUNC_6(VAR_7->wxflag == 1, "info->wxflag = %x, expected 1\n", VAR_7->wxflag);
    FUNC_5(VAR_10);
    FUNC_6(VAR_7->handle == VAR_3, "info->handle = %p, expected INVALID_HANDLE_VALUE\n", VAR_7->handle);
    FUNC_6(VAR_7->wxflag == 0, "info->wxflag = %x, expected 0\n", VAR_7->wxflag);
    FUNC_3("open_osfhandle.tst");

    VAR_6 = 0xdeadbeef;
    VAR_10 = FUNC_4((intptr_t)VAR_8, 0);
    FUNC_6(VAR_10 == -1, "_open_osfhandle returned %d\n", VAR_10);
    FUNC_6(VAR_6 == VAR_1, "errno = %d\n", VAR_6);

    FUNC_6(FUNC_2(&VAR_8, &VAR_9, ((void*)0), 0), "CreatePipe failed\n");
    VAR_10 = FUNC_4((intptr_t)VAR_8, 0);
    FUNC_6(VAR_10 > 0, "_open_osfhandle returned %d (%d)\n", VAR_10, VAR_6);
    VAR_7 = &VAR_5[VAR_10/VAR_4][VAR_10%VAR_4];
    FUNC_6(VAR_7->handle == VAR_8, "info->handle = %p, expected %p\n", VAR_7->handle, VAR_8);
    FUNC_6(VAR_7->wxflag == 9, "info->wxflag = %x, expected 9\n", VAR_7->wxflag);
    FUNC_5(VAR_10);
    FUNC_0(VAR_9);
}
