
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ QuadPart; } ;
struct TYPE_4__ {scalar_t__ QuadPart; } ;
struct TYPE_6__ {int NumberOfLinks; void* Directory; void* DeletePending; TYPE_2__ EndOfFile; TYPE_1__ AllocationSize; } ;
typedef scalar_t__ PVOID ;
typedef int* PSIZE_T ;
typedef TYPE_3__* PFILE_STANDARD_INFORMATION ;
typedef int NTSTATUS ;
typedef int FILE_STANDARD_INFORMATION ;
typedef scalar_t__ FILE_INFORMATION_CLASS ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static
NTSTATUS
FUNC_0(
    PVOID VAR_5,
    FILE_INFORMATION_CLASS VAR_6,
    PSIZE_T VAR_7)
{
    PFILE_STANDARD_INFORMATION VAR_8;


    if (VAR_6 != VAR_1)
    {
        return VAR_3;
    }


    if (*VAR_7 < sizeof(FILE_STANDARD_INFORMATION))
    {
        *VAR_7 = sizeof(FILE_STANDARD_INFORMATION);
        return VAR_2;
    }


    VAR_8 = (PFILE_STANDARD_INFORMATION)VAR_5;
    VAR_8->AllocationSize.QuadPart = 0;
    VAR_8->EndOfFile.QuadPart = 0;
    VAR_8->NumberOfLinks = 1;
    VAR_8->DeletePending = VAR_0;
    VAR_8->Directory = VAR_0;
    *VAR_7 = sizeof(FILE_STANDARD_INFORMATION);

    return VAR_4;
}
