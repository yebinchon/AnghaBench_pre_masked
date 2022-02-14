
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_9__ {TYPE_3__* Srb; } ;
struct TYPE_10__ {TYPE_1__ Scsi; } ;
struct TYPE_13__ {TYPE_2__ Parameters; } ;
struct TYPE_12__ {int * MdlAddress; } ;
struct TYPE_11__ {int SrbFlags; scalar_t__ DataTransferLength; scalar_t__ DataBuffer; } ;
typedef TYPE_3__* PSCSI_REQUEST_BLOCK ;
typedef TYPE_4__* PIRP ;
typedef TYPE_5__* PIO_STACK_LOCATION ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 TYPE_5__* FUNC_1 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static
BOOLEAN
FUNC_2(PIRP VAR_6)
{
    ULONG VAR_7;
    PIO_STACK_LOCATION VAR_8;
    PSCSI_REQUEST_BLOCK VAR_9;

    VAR_8 = FUNC_1(VAR_6);
    VAR_9 = VAR_8->Parameters.Scsi.Srb;

    if (VAR_9->SrbFlags & (VAR_1 | VAR_2))
    {
        if ((VAR_9->SrbFlags & VAR_3) == VAR_3)
        {
            FUNC_0("IsRequestValid: Invalid Srb. Srb->SrbFlags - %X\n", VAR_9->SrbFlags);
            return VAR_0;
        }

        VAR_7 = VAR_9->DataTransferLength;

        if (VAR_6->MdlAddress == ((void*)0))
        {
            FUNC_0("IsRequestValid: Invalid Srb. Irp->MdlAddress == NULL\n");
            return VAR_0;
        }

        if (VAR_7 == 0)
        {
            FUNC_0("IsRequestValid: Invalid Srb. TransferLength == 0\n");
            return VAR_0;
        }

        if (VAR_7 > VAR_5)
        {
            FUNC_0("IsRequestValid: Invalid Srb. TransferLength > 0x10000\n");
            return VAR_0;
        }
    }
    else
    {
        if (VAR_9->DataTransferLength)
        {
            FUNC_0("IsRequestValid: Invalid Srb. Srb->DataTransferLength != 0\n");
            return VAR_0;
        }

        if (VAR_9->DataBuffer)
        {
            FUNC_0("IsRequestValid: Invalid Srb. Srb->DataBuffer != NULL\n");
            return VAR_0;
        }

        if (VAR_6->MdlAddress)
        {
            FUNC_0("IsRequestValid: Invalid Srb. Irp->MdlAddress != NULL\n");
            return VAR_0;
        }
    }

    return VAR_4;
}
