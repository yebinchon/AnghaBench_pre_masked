
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ULONG ;
struct TYPE_11__ {int Length; int DataTransferLength; int TimeOutValue; int DataBufferOffset; int * CurrentTaskFile; int AtaFlags; } ;
struct TYPE_10__ {int NominalMediaRotationRate; } ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef TYPE_1__ IDENTIFY_DEVICE_DATA ;
typedef int HANDLE ;
typedef int BOOL ;
typedef TYPE_2__ ATA_PASS_THROUGH_EX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int *,int *,int ,TYPE_2__*,int,TYPE_2__*,int) ;
 TYPE_2__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,int) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int) ;

__attribute__((used)) static BOOL FUNC_8(HANDLE VAR_6) {
    ULONG VAR_7;
    ATA_PASS_THROUGH_EX* VAR_8;
    IO_STATUS_BLOCK VAR_9;
    NTSTATUS VAR_10;
    IDENTIFY_DEVICE_DATA* VAR_11;

    VAR_7 = sizeof(ATA_PASS_THROUGH_EX) + 512;

    VAR_8 = FUNC_7(VAR_7);

    FUNC_5(VAR_8, VAR_7);




    VAR_8->Length = sizeof(ATA_PASS_THROUGH_EX);
    VAR_8->AtaFlags = VAR_0;
    VAR_8->DataTransferLength = VAR_7 - sizeof(ATA_PASS_THROUGH_EX);
    VAR_8->TimeOutValue = 3;
    VAR_8->DataBufferOffset = VAR_8->Length;
    VAR_8->CurrentTaskFile[6] = VAR_3;

    VAR_10 = FUNC_1(VAR_6, ((void*)0), ((void*)0), ((void*)0), &VAR_9, VAR_4, VAR_8, VAR_7, VAR_8, VAR_7);

    if (FUNC_0(VAR_10)) {
        VAR_11 = (IDENTIFY_DEVICE_DATA*)((uint8_t*)VAR_8 + sizeof(ATA_PASS_THROUGH_EX));

        if (VAR_11->NominalMediaRotationRate == 1) {

            FUNC_6(VAR_8);



            return VAR_5;
        }
    }


    FUNC_6(VAR_8);




    return VAR_1;
}
