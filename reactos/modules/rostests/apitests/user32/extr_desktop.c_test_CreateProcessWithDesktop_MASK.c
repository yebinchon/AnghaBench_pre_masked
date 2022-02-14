
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int startup ;
struct TYPE_7__ {int hProcess; } ;
struct TYPE_6__ {int cb; char* lpDesktop; int wShowWindow; int dwFlags; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int*) ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int,char*,int,...) ;
 int FUNC_7 (char*,char*,char*,int) ;

void FUNC_8(int VAR_6, char *VAR_7, char* VAR_8, DWORD VAR_9)
{
    STARTUPINFOA VAR_10;
    char VAR_11[VAR_1];
    BOOL VAR_12;
    DWORD VAR_13;
    PROCESS_INFORMATION VAR_14;

    FUNC_5( &VAR_10, 0, sizeof(VAR_10) );
    VAR_10.cb = sizeof(VAR_10);
    VAR_10.dwFlags = VAR_2;
    VAR_10.wShowWindow = VAR_4;
    VAR_10.lpDesktop = VAR_8;

    FUNC_7( VAR_11, "%s desktop %u", VAR_7, VAR_6 );
    VAR_12 = FUNC_1( ((void*)0), VAR_11, ((void*)0), ((void*)0), VAR_5, 0, ((void*)0), ((void*)0), &VAR_10, &VAR_14 );
    FUNC_6( VAR_12, "%d: CreateProcess '%s' failed err %d.\n", VAR_6, VAR_11, (int)FUNC_3() );
    FUNC_4 (VAR_14.hProcess, VAR_0);
    VAR_12 = FUNC_2(VAR_14.hProcess, &VAR_13);
    FUNC_6(VAR_12 > 0 , "%d: GetExitCodeProcess failed\n", VAR_6);



    if (VAR_13 == 128) VAR_13 = VAR_3;

    FUNC_6(VAR_13 == VAR_9, "%d: expected error 0x%x in child process got 0x%x\n", VAR_6, (int)VAR_9, (int)VAR_13);

    FUNC_0(VAR_14.hProcess);
}
