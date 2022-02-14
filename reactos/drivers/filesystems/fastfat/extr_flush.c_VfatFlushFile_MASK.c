
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ Status; } ;
struct TYPE_12__ {int DirResource; } ;
struct TYPE_11__ {int Flags; int SectionObjectPointers; int PathNameU; } ;
typedef TYPE_1__* PVFATFCB ;
typedef TYPE_2__* PDEVICE_EXTENSION ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_3__ IO_STATUS_BLOCK ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *,int ,TYPE_3__*) ;
 int FUNC_2 (char*,TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static
NTSTATUS
FUNC_7(
    PDEVICE_EXTENSION VAR_4,
    PVFATFCB VAR_5)
{
    IO_STATUS_BLOCK VAR_6;
    NTSTATUS VAR_7;

    FUNC_2("VfatFlushFile(DeviceExt %p, Fcb %p) for '%wZ'\n", VAR_4, VAR_5, &VAR_5->PathNameU);

    FUNC_1(&VAR_5->SectionObjectPointers, ((void*)0), 0, &VAR_6);
    if (VAR_6.Status == VAR_1)
    {

        VAR_6.Status = VAR_2;
    }

    FUNC_3(&VAR_4->DirResource, VAR_3);
    if (FUNC_0(VAR_5->Flags, VAR_0))
    {
        VAR_7 = FUNC_6(VAR_4, VAR_5);
        if (!FUNC_5(VAR_7))
        {
            VAR_6.Status = VAR_7;
        }
    }
    FUNC_4(&VAR_4->DirResource);

    return VAR_6.Status;
}
