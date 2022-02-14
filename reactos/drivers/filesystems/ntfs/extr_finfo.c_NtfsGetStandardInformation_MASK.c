
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int Directory; int DeletePending; int NumberOfLinks; int EndOfFile; int AllocationSize; } ;
struct TYPE_10__ {int FileSize; int AllocationSize; } ;
struct TYPE_11__ {int LinkCount; TYPE_1__ RFCB; } ;
typedef int* PULONG ;
typedef TYPE_2__* PNTFS_FCB ;
typedef TYPE_3__* PFILE_STANDARD_INFORMATION ;
typedef int PDEVICE_OBJECT ;
typedef int NTSTATUS ;
typedef int FILE_STANDARD_INFORMATION ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,TYPE_2__*,int ,TYPE_3__*,int*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static
NTSTATUS
FUNC_5(PNTFS_FCB VAR_3,
                           PDEVICE_OBJECT VAR_4,
                           PFILE_STANDARD_INFORMATION VAR_5,
                           PULONG VAR_6)
{
    FUNC_4(VAR_4);

    FUNC_1("NtfsGetStandardInformation(%p, %p, %p, %p)\n", VAR_3, VAR_4, VAR_5, VAR_6);

    if (*VAR_6 < sizeof(FILE_STANDARD_INFORMATION))
        return VAR_1;


    FUNC_0(VAR_5 != ((void*)0));
    FUNC_0(VAR_3 != ((void*)0));

    FUNC_3(VAR_5,
                  sizeof(FILE_STANDARD_INFORMATION));

    VAR_5->AllocationSize = VAR_3->RFCB.AllocationSize;
    VAR_5->EndOfFile = VAR_3->RFCB.FileSize;
    VAR_5->NumberOfLinks = VAR_3->LinkCount;
    VAR_5->DeletePending = VAR_0;
    VAR_5->Directory = FUNC_2(VAR_3);

    *VAR_6 -= sizeof(FILE_STANDARD_INFORMATION);

    return VAR_2;
}
