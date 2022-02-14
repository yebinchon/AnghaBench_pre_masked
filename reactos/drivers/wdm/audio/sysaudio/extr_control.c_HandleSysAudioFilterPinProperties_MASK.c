
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_20__ {int Reserved; } ;
struct TYPE_14__ {int InputBufferLength; int OutputBufferLength; scalar_t__ Type3InputBuffer; } ;
struct TYPE_15__ {TYPE_1__ DeviceIoControl; } ;
struct TYPE_19__ {TYPE_2__ Parameters; } ;
struct TYPE_18__ {int UserBuffer; } ;
struct TYPE_17__ {int FileObject; } ;
struct TYPE_16__ {int KsAudioDeviceList; } ;
typedef int PVOID ;
typedef TYPE_3__* PSYSAUDIODEVEXT ;
typedef scalar_t__ PKSPROPERTY ;
typedef TYPE_4__* PKSAUDIO_DEVICE_ENTRY ;
typedef TYPE_5__* PIRP ;
typedef TYPE_6__* PIO_STACK_LOCATION ;
typedef int NTSTATUS ;
typedef TYPE_7__ KSP_PIN ;
typedef int KSPROPERTY ;


 TYPE_4__* FUNC_0 (int *,int ) ;
 int VAR_0 ;
 TYPE_6__* FUNC_1 (TYPE_5__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ,int,int ,int ,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_5__*,int ,int) ;

NTSTATUS
FUNC_4(
    PIRP VAR_4,
    PKSPROPERTY VAR_5,
    PSYSAUDIODEVEXT VAR_6)
{
    PIO_STACK_LOCATION VAR_7;
    NTSTATUS VAR_8;
    PKSAUDIO_DEVICE_ENTRY VAR_9;
    ULONG VAR_10;





    VAR_7 = FUNC_1(VAR_4);
    if (VAR_7->Parameters.DeviceIoControl.InputBufferLength < sizeof(KSP_PIN))
    {

        return FUNC_3(VAR_4, VAR_2, sizeof(KSPROPERTY) + sizeof(ULONG));
    }

    VAR_9 = FUNC_0(&VAR_6->KsAudioDeviceList, ((KSP_PIN*)VAR_5)->Reserved);
    if (!VAR_9)
    {

        return FUNC_3(VAR_4, VAR_3, 0);
    }


    VAR_8 = FUNC_2(VAR_9->FileObject, VAR_1, VAR_0,
                                             (PVOID)VAR_7->Parameters.DeviceIoControl.Type3InputBuffer,
                                             VAR_7->Parameters.DeviceIoControl.InputBufferLength,
                                             VAR_4->UserBuffer,
                                             VAR_7->Parameters.DeviceIoControl.OutputBufferLength,
                                             &VAR_10);

    return FUNC_3(VAR_4, VAR_8, VAR_10);
}
