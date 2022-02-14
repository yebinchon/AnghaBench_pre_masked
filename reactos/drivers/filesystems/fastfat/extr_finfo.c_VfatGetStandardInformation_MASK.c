
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ QuadPart; } ;
struct TYPE_9__ {scalar_t__ QuadPart; } ;
struct TYPE_13__ {int NumberOfLinks; int DeletePending; int Directory; TYPE_2__ EndOfFile; TYPE_1__ AllocationSize; } ;
struct TYPE_11__ {TYPE_2__ FileSize; TYPE_1__ AllocationSize; } ;
struct TYPE_12__ {int Flags; TYPE_3__ RFCB; } ;
typedef TYPE_4__* PVFATFCB ;
typedef int* PULONG ;
typedef TYPE_5__* PFILE_STANDARD_INFORMATION ;
typedef int NTSTATUS ;
typedef int FILE_STANDARD_INFORMATION ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;

NTSTATUS
FUNC_3(
    PVFATFCB VAR_5,
    PFILE_STANDARD_INFORMATION VAR_6,
    PULONG VAR_7)
{
    if (*VAR_7 < sizeof(FILE_STANDARD_INFORMATION))
        return VAR_2;


    FUNC_0(VAR_6 != ((void*)0));
    FUNC_0(VAR_5 != ((void*)0));

    if (FUNC_2(VAR_5))
    {
        VAR_6->AllocationSize.QuadPart = 0;
        VAR_6->EndOfFile.QuadPart = 0;
        VAR_6->Directory = VAR_4;
    }
    else
    {
        VAR_6->AllocationSize = VAR_5->RFCB.AllocationSize;
        VAR_6->EndOfFile = VAR_5->RFCB.FileSize;
        VAR_6->Directory = VAR_0;
    }
    VAR_6->NumberOfLinks = 1;
    VAR_6->DeletePending = FUNC_1(VAR_5->Flags, VAR_1);

    *VAR_7 -= sizeof(FILE_STANDARD_INFORMATION);
    return VAR_3;
}
