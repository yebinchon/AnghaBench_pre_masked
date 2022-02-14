
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int devobj; } ;
typedef TYPE_1__ device ;
struct TYPE_6__ {int Size; int Flags; scalar_t__ DataSetRangesLength; scalar_t__ DataSetRangesOffset; scalar_t__ ParameterBlockLength; scalar_t__ ParameterBlockOffset; int Action; } ;
typedef int NTSTATUS ;
typedef TYPE_2__ DEVICE_MANAGE_DATA_SET_ATTRIBUTES ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ,TYPE_2__*,int,int *,int ,int,int *) ;

void FUNC_3(device* VAR_4) {
    DEVICE_MANAGE_DATA_SET_ATTRIBUTES VAR_5;
    NTSTATUS VAR_6;



    VAR_5.Size = sizeof(DEVICE_MANAGE_DATA_SET_ATTRIBUTES);
    VAR_5.Action = VAR_2;
    VAR_5.Flags = VAR_0 | VAR_1;
    VAR_5.ParameterBlockOffset = 0;
    VAR_5.ParameterBlockLength = 0;
    VAR_5.DataSetRangesOffset = 0;
    VAR_5.DataSetRangesLength = 0;

    VAR_6 = FUNC_2(VAR_4->devobj, VAR_3, &VAR_5, sizeof(DEVICE_MANAGE_DATA_SET_ATTRIBUTES), ((void*)0), 0, 1, ((void*)0));
    if (!FUNC_0(VAR_6))
        FUNC_1("IOCTL_STORAGE_MANAGE_DATA_SET_ATTRIBUTES returned %08x\n", VAR_6);
}
