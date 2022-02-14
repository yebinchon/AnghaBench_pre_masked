
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_10__ {long long QuadPart; } ;
struct TYPE_9__ {TYPE_1__* FirstSection; } ;
struct TYPE_8__ {struct TYPE_8__* Next; scalar_t__ Data; scalar_t__ Name; } ;
struct TYPE_7__ {struct TYPE_7__* Next; TYPE_2__* FirstKey; scalar_t__ Name; } ;
typedef TYPE_1__* PINICACHESECTION ;
typedef TYPE_2__* PINICACHEKEY ;
typedef TYPE_3__* PINICACHE ;
typedef int * PCHAR ;
typedef int NTSTATUS ;
typedef TYPE_4__ LARGE_INTEGER ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef int CHAR ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int *,int *,int *,int *,int,TYPE_4__*,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (scalar_t__) ;

NTSTATUS
FUNC_8(
    PINICACHE VAR_4,
    HANDLE VAR_5)
{
    NTSTATUS VAR_6;
    PINICACHESECTION VAR_7;
    PINICACHEKEY VAR_8;
    ULONG VAR_9;
    PCHAR VAR_10;
    PCHAR VAR_11;
    ULONG VAR_12;
    IO_STATUS_BLOCK VAR_13;
    LARGE_INTEGER VAR_14;


    VAR_9 = 0;
    VAR_7 = VAR_4->FirstSection;
    while (VAR_7 != ((void*)0))
    {
        VAR_9 += (VAR_7->Name ? FUNC_7(VAR_7->Name) : 0)
                       + 4;

        VAR_8 = VAR_7->FirstKey;
        while (VAR_8 != ((void*)0))
        {
            VAR_9 += FUNC_7(VAR_8->Name)
                          + (VAR_8->Data ? FUNC_7(VAR_8->Data) : 0)
                          + 3;
            VAR_8 = VAR_8->Next;
        }

        VAR_7 = VAR_7->Next;
        if (VAR_7 != ((void*)0))
            VAR_9 += 2;
    }

    FUNC_0("BufferSize: %lu\n", VAR_9);


    VAR_10 = (CHAR*)FUNC_4(VAR_1,
                                    VAR_0,
                                    VAR_9 + 1);
    if (VAR_10 == ((void*)0))
    {
        FUNC_1("RtlAllocateHeap() failed\n");
        return VAR_2;
    }


    VAR_11 = VAR_10;
    VAR_7 = VAR_4->FirstSection;
    while (VAR_7 != ((void*)0))
    {
        VAR_12 = FUNC_6(VAR_11, "[%S]\r\n", VAR_7->Name);
        VAR_11 += VAR_12;

        VAR_8 = VAR_7->FirstKey;
        while (VAR_8 != ((void*)0))
        {
            VAR_12 = FUNC_6(VAR_11, "%S=%S\r\n", VAR_8->Name, VAR_8->Data);
            VAR_11 += VAR_12;
            VAR_8 = VAR_8->Next;
        }

        VAR_7 = VAR_7->Next;
        if (VAR_7 != ((void*)0))
        {
            VAR_12 = FUNC_6(VAR_11, "\r\n");
            VAR_11 += VAR_12;
        }
    }


    VAR_14.QuadPart = 0LL;
    VAR_6 = FUNC_3(VAR_5,
                         ((void*)0),
                         ((void*)0),
                         ((void*)0),
                         &VAR_13,
                         VAR_10,
                         VAR_9,
                         &VAR_14,
                         ((void*)0));
    if (!FUNC_2(VAR_6))
    {
        FUNC_0("NtWriteFile() failed (Status %lx)\n", VAR_6);
        FUNC_5(VAR_1, 0, VAR_10);
        return VAR_6;
    }

    FUNC_5(VAR_1, 0, VAR_10);
    return VAR_3;
}
