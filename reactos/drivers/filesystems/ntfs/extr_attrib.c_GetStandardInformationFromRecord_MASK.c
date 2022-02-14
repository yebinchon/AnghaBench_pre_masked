
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_5__ {scalar_t__ ValueOffset; } ;
struct TYPE_6__ {scalar_t__ Type; TYPE_1__ Resident; } ;
typedef int * PSTANDARD_INFORMATION ;
typedef TYPE_2__* PNTFS_ATTR_RECORD ;
typedef int PFILE_RECORD_HEADER ;
typedef int PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int FIND_ATTR_CONTXT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ,TYPE_2__**) ;
 int FUNC_2 (int *,TYPE_2__**) ;
 scalar_t__ FUNC_3 (int ) ;

PSTANDARD_INFORMATION
FUNC_4(PDEVICE_EXTENSION VAR_2,
                                 PFILE_RECORD_HEADER VAR_3)
{
    NTSTATUS VAR_4;
    FIND_ATTR_CONTXT VAR_5;
    PNTFS_ATTR_RECORD VAR_6;
    PSTANDARD_INFORMATION VAR_7;

    VAR_4 = FUNC_1(&VAR_5, VAR_2, VAR_3, VAR_1, &VAR_6);
    while (FUNC_3(VAR_4))
    {
        if (VAR_6->Type == VAR_0)
        {
            VAR_7 = (PSTANDARD_INFORMATION)((ULONG_PTR)VAR_6 + VAR_6->Resident.ValueOffset);
            FUNC_0(&VAR_5);
            return VAR_7;
        }

        VAR_4 = FUNC_2(&VAR_5, &VAR_6);
    }

    FUNC_0(&VAR_5);
    return ((void*)0);
}
