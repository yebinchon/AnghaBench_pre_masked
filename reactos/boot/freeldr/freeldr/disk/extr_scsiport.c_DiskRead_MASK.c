
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_11__ {int SectorSize; int SectorNumber; int SectorCount; int DeviceExtension; int Lun; int TargetId; int PathId; scalar_t__ SectorOffset; } ;
struct TYPE_8__ {int LogicalBlockByte0; int LogicalBlockByte1; int LogicalBlockByte2; int LogicalBlockByte3; int TransferBlocksMsb; int TransferBlocksLsb; int LogicalUnitNumber; void* OperationCode; } ;
struct TYPE_10__ {TYPE_1__ CDB10; } ;
struct TYPE_9__ {int Length; int CdbLength; int DataTransferLength; int TimeOutValue; int Lun; scalar_t__ Cdb; int * DataBuffer; void* SrbFlags; int TargetId; int PathId; void* Function; } ;
typedef int SCSI_REQUEST_BLOCK ;
typedef void* PUCHAR ;
typedef TYPE_2__* PSCSI_REQUEST_BLOCK ;
typedef TYPE_3__* PCDB ;
typedef TYPE_4__ DISKCONTEXT ;
typedef int ARC_STATUS ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (void*) ;
 TYPE_4__* FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int *,void*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_6 (int ,TYPE_2__*) ;

__attribute__((used)) static ARC_STATUS FUNC_7(ULONG VAR_8, VOID* VAR_9, ULONG VAR_10, ULONG* VAR_11)
{
    DISKCONTEXT* VAR_12 = FUNC_3(VAR_8);
    PSCSI_REQUEST_BLOCK VAR_13;
    PCDB VAR_14;
    ULONG VAR_15, VAR_16;
    ULONG VAR_17;

    *VAR_11 = 0;

    if (VAR_10 == 0)
        return VAR_3;

    VAR_15 = VAR_10 / VAR_12->SectorSize;
    VAR_16 = (VAR_10 + VAR_12->SectorSize - 1) / VAR_12->SectorSize;
    if (VAR_12->SectorNumber + VAR_16 >= VAR_12->SectorCount)
        return VAR_0;
    if (VAR_15 > 0xffff)
        return VAR_0;


    FUNC_0(VAR_12->SectorNumber < 0xFFFFFFFF);
    VAR_17 = (ULONG)(VAR_12->SectorOffset + VAR_12->SectorNumber);
    if (VAR_15 > 0)
    {
        VAR_13 = FUNC_1(VAR_4, sizeof(SCSI_REQUEST_BLOCK));
        if (!VAR_13)
            return VAR_2;

        FUNC_5(VAR_13, sizeof(SCSI_REQUEST_BLOCK));
        VAR_13->Length = sizeof(SCSI_REQUEST_BLOCK);
        VAR_13->Function = VAR_7;
        VAR_13->PathId = VAR_12->PathId;
        VAR_13->TargetId = VAR_12->TargetId;
        VAR_13->Lun = VAR_12->Lun;
        VAR_13->CdbLength = 10;
        VAR_13->SrbFlags = VAR_6;
        VAR_13->DataTransferLength = VAR_15 * VAR_12->SectorSize;
        VAR_13->TimeOutValue = 5;
        VAR_13->DataBuffer = VAR_9;
        VAR_14 = (PCDB)VAR_13->Cdb;
        VAR_14->CDB10.OperationCode = VAR_5;
        VAR_14->CDB10.LogicalUnitNumber = VAR_13->Lun;
        VAR_14->CDB10.LogicalBlockByte0 = (VAR_17 >> 24) & 0xff;
        VAR_14->CDB10.LogicalBlockByte1 = (VAR_17 >> 16) & 0xff;
        VAR_14->CDB10.LogicalBlockByte2 = (VAR_17 >> 8) & 0xff;
        VAR_14->CDB10.LogicalBlockByte3 = VAR_17 & 0xff;
        VAR_14->CDB10.TransferBlocksMsb = (VAR_15 >> 8) & 0xff;
        VAR_14->CDB10.TransferBlocksLsb = VAR_15 & 0xff;
        if (!FUNC_6(VAR_12->DeviceExtension, VAR_13))
        {
            return VAR_1;
        }
        VAR_9 = (PUCHAR)VAR_9 + VAR_15 * VAR_12->SectorSize;
        VAR_10 -= VAR_15 * VAR_12->SectorSize;
        *VAR_11 += VAR_15 * VAR_12->SectorSize;
        VAR_12->SectorNumber += VAR_15;
        VAR_17 += VAR_15;
    }


    if (VAR_10 > 0)
    {
        PUCHAR VAR_18;

        VAR_18 = FUNC_1(VAR_4, VAR_12->SectorSize);
        if (!VAR_18)
            return VAR_2;

        VAR_13 = FUNC_1(VAR_4, sizeof(SCSI_REQUEST_BLOCK));
        if (!VAR_13)
        {
            FUNC_2(VAR_18);
            return VAR_2;
        }

        FUNC_5(VAR_13, sizeof(SCSI_REQUEST_BLOCK));
        VAR_13->Length = sizeof(SCSI_REQUEST_BLOCK);
        VAR_13->Function = VAR_7;
        VAR_13->PathId = VAR_12->PathId;
        VAR_13->TargetId = VAR_12->TargetId;
        VAR_13->Lun = VAR_12->Lun;
        VAR_13->CdbLength = 10;
        VAR_13->SrbFlags = VAR_6;
        VAR_13->DataTransferLength = VAR_12->SectorSize;
        VAR_13->TimeOutValue = 5;
        VAR_13->DataBuffer = VAR_18;
        VAR_14 = (PCDB)VAR_13->Cdb;
        VAR_14->CDB10.OperationCode = VAR_5;
        VAR_14->CDB10.LogicalUnitNumber = VAR_13->Lun;
        VAR_14->CDB10.LogicalBlockByte0 = (VAR_17 >> 24) & 0xff;
        VAR_14->CDB10.LogicalBlockByte1 = (VAR_17 >> 16) & 0xff;
        VAR_14->CDB10.LogicalBlockByte2 = (VAR_17 >> 8) & 0xff;
        VAR_14->CDB10.LogicalBlockByte3 = VAR_17 & 0xff;
        VAR_14->CDB10.TransferBlocksMsb = 0;
        VAR_14->CDB10.TransferBlocksLsb = 1;
        if (!FUNC_6(VAR_12->DeviceExtension, VAR_13))
        {
            FUNC_2(VAR_18);
            return VAR_1;
        }
        FUNC_4(VAR_9, VAR_18, VAR_10);
        *VAR_11 += VAR_10;

        FUNC_2(VAR_18);
    }

    return VAR_3;
}
