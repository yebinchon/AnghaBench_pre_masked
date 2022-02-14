
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_7__ {int LowPart; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
struct TYPE_10__ {TYPE_2__ EndOfFile; } ;
struct TYPE_9__ {unsigned long long QuadPart; } ;
typedef int * PINICACHE ;
typedef scalar_t__* PCHAR ;
typedef int NTSTATUS ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef TYPE_4__ FILE_STANDARD_INFORMATION ;
typedef scalar_t__ CHAR ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int **,scalar_t__*,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *,TYPE_4__*,int,int ) ;
 int FUNC_5 (int ,int *,int *,int *,int *,scalar_t__*,int,TYPE_3__*,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,scalar_t__*) ;
 int VAR_2 ;

NTSTATUS
FUNC_8(
    PINICACHE *VAR_3,
    HANDLE VAR_4,
    BOOLEAN VAR_5)
{
    NTSTATUS VAR_6;
    IO_STATUS_BLOCK VAR_7;
    FILE_STANDARD_INFORMATION VAR_8;
    PCHAR VAR_9;
    ULONG VAR_10;
    LARGE_INTEGER VAR_11;

    *VAR_3 = ((void*)0);


    VAR_6 = FUNC_4(VAR_4,
                                    &VAR_7,
                                    &VAR_8,
                                    sizeof(FILE_STANDARD_INFORMATION),
                                    VAR_0);
    if (!FUNC_3(VAR_6))
    {
        FUNC_0("NtQueryInformationFile() failed (Status %lx)\n", VAR_6);
        return VAR_6;
    }

    VAR_10 = VAR_8.EndOfFile.u.LowPart;

    FUNC_0("File size: %lu\n", VAR_10);


    VAR_9 = (CHAR*)FUNC_6(VAR_1,
                                        0,
                                        VAR_10 + 1);
    if (VAR_9 == ((void*)0))
    {
        FUNC_1("RtlAllocateHeap() failed\n");
        return VAR_2;
    }


    VAR_11.QuadPart = 0ULL;
    VAR_6 = FUNC_5(VAR_4,
                        ((void*)0),
                        ((void*)0),
                        ((void*)0),
                        &VAR_7,
                        VAR_9,
                        VAR_10,
                        &VAR_11,
                        ((void*)0));


    VAR_9[VAR_10] = 0;

    if (!FUNC_3(VAR_6))
    {
        FUNC_0("NtReadFile() failed (Status %lx)\n", VAR_6);
        goto Quit;
    }

    VAR_6 = FUNC_2(VAR_3, VAR_9, VAR_10, VAR_5);
    if (!FUNC_3(VAR_6))
    {
        FUNC_1("IniCacheLoadFromMemory() failed (Status %lx)\n", VAR_6);
    }

Quit:

    FUNC_7(VAR_1, 0, VAR_9);
    return VAR_6;
}
