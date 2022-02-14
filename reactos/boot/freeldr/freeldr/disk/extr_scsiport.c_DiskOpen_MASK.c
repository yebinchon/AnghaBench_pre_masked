
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* ULONGLONG ;
typedef scalar_t__ ULONG ;
typedef void* UCHAR ;
struct TYPE_17__ {scalar_t__ SectorNumber; void* SectorCount; void* SectorOffset; scalar_t__ SectorSize; void* Lun; void* TargetId; void* PathId; TYPE_4__* DeviceExtension; } ;
struct TYPE_12__ {int OperationCode; } ;
struct TYPE_16__ {TYPE_1__ CDB10; } ;
struct TYPE_15__ {scalar_t__ BusNum; } ;
struct TYPE_14__ {int Length; int CdbLength; int DataTransferLength; int TimeOutValue; scalar_t__ Cdb; TYPE_2__* DataBuffer; int SrbFlags; void* Lun; void* TargetId; void* PathId; int Function; } ;
struct TYPE_13__ {int BytesPerBlock; int LogicalBlockAddress; } ;
typedef int SCSI_REQUEST_BLOCK ;
typedef TYPE_2__ READ_CAPACITY_DATA ;
typedef TYPE_3__* PSCSI_REQUEST_BLOCK ;
typedef TYPE_4__* PSCSI_PORT_DEVICE_EXTENSION ;
typedef TYPE_5__* PCDB ;
typedef int OPENMODE ;
typedef TYPE_6__ DISKCONTEXT ;
typedef int CHAR ;
typedef int ARC_STATUS ;


 int FUNC_0 (int *,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__,TYPE_6__*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_3__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__** VAR_8 ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 int VAR_9 ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static ARC_STATUS FUNC_6(CHAR* VAR_10, OPENMODE VAR_11, ULONG* VAR_12)
{
    PSCSI_REQUEST_BLOCK VAR_13;
    PCDB VAR_14;
    READ_CAPACITY_DATA VAR_15;

    DISKCONTEXT* VAR_16;
    PSCSI_PORT_DEVICE_EXTENSION VAR_17;
    ULONG VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
    ULONG VAR_24;
    ULONGLONG VAR_25 = 0;
    ULONGLONG VAR_26;


    if (!FUNC_0(VAR_10, &VAR_18, &VAR_20, &VAR_21, &VAR_22, &VAR_23))
        return VAR_0;
    if (VAR_23 != 0)
        return VAR_0;
    VAR_17 = VAR_8[VAR_18];
    VAR_19 = VAR_18 - VAR_17->BusNum;


    VAR_13 = FUNC_1(VAR_4, sizeof(SCSI_REQUEST_BLOCK));
    if (!VAR_13)
        return VAR_2;
    FUNC_3(VAR_13, sizeof(SCSI_REQUEST_BLOCK));
    VAR_13->Length = sizeof(SCSI_REQUEST_BLOCK);
    VAR_13->Function = VAR_7;
    VAR_13->PathId = (UCHAR)VAR_19;
    VAR_13->TargetId = (UCHAR)VAR_20;
    VAR_13->Lun = (UCHAR)VAR_21;
    VAR_13->CdbLength = 10;
    VAR_13->SrbFlags = VAR_6;
    VAR_13->DataTransferLength = sizeof(READ_CAPACITY_DATA);
    VAR_13->TimeOutValue = 5;
    VAR_13->DataBuffer = &VAR_15;
    VAR_14 = (PCDB)VAR_13->Cdb;
    VAR_14->CDB10.OperationCode = VAR_5;
    if (!FUNC_4(VAR_17, VAR_13))
    {
        return VAR_1;
    }


    VAR_26 = FUNC_5(VAR_15.LogicalBlockAddress);
    VAR_24 = FUNC_5(VAR_15.BytesPerBlock);

    if (VAR_22 != 0)
    {

        VAR_9;
        return VAR_1;
    }

    VAR_16 = FUNC_1(VAR_4, sizeof(DISKCONTEXT));
    if (!VAR_16)
        return VAR_2;
    VAR_16->DeviceExtension = VAR_17;
    VAR_16->PathId = (UCHAR)VAR_19;
    VAR_16->TargetId = (UCHAR)VAR_20;
    VAR_16->Lun = (UCHAR)VAR_21;
    VAR_16->SectorSize = VAR_24;
    VAR_16->SectorOffset = VAR_25;
    VAR_16->SectorCount = VAR_26;
    VAR_16->SectorNumber = 0;
    FUNC_2(*VAR_12, VAR_16);

    return VAR_3;
}
