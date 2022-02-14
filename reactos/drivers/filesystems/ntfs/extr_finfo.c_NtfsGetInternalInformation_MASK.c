
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int QuadPart; } ;
struct TYPE_10__ {int MFTIndex; TYPE_1__ IndexNumber; } ;
typedef int* PULONG ;
typedef TYPE_2__* PNTFS_FCB ;
typedef TYPE_2__* PFILE_INTERNAL_INFORMATION ;
typedef int NTSTATUS ;
typedef int FILE_INTERNAL_INFORMATION ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,TYPE_2__*,TYPE_2__*,int*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
NTSTATUS
FUNC_2(PNTFS_FCB VAR_2,
                           PFILE_INTERNAL_INFORMATION VAR_3,
                           PULONG VAR_4)
{
    FUNC_1("NtfsGetInternalInformation(%p, %p, %p)\n", VAR_2, VAR_3, VAR_4);

    FUNC_0(VAR_3);
    FUNC_0(VAR_2);

    if (*VAR_4 < sizeof(FILE_INTERNAL_INFORMATION))
        return VAR_0;

    VAR_3->IndexNumber.QuadPart = VAR_2->MFTIndex;

    *VAR_4 -= sizeof(FILE_INTERNAL_INFORMATION);

    return VAR_1;
}
