
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_13__ ;
typedef struct TYPE_29__ TYPE_12__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef int WCHAR ;
struct TYPE_34__ {int Buffer; } ;
typedef TYPE_4__ UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_31__ {int Length; int * Buffer; } ;
struct TYPE_39__ {int FileObject; TYPE_1__ DeviceName; } ;
struct TYPE_38__ {scalar_t__ Id; int Flags; int Set; } ;
struct TYPE_37__ {scalar_t__ Reserved; } ;
struct TYPE_36__ {scalar_t__ NumberOfKsAudioDevices; int KsAudioDeviceList; } ;
struct TYPE_35__ {scalar_t__ DeviceNumber; } ;
struct TYPE_32__ {int InputBufferLength; int OutputBufferLength; scalar_t__ Type3InputBuffer; } ;
struct TYPE_33__ {TYPE_2__ DeviceIoControl; } ;
struct TYPE_30__ {int Flags; int Id; int Set; } ;
struct TYPE_29__ {scalar_t__ DeviceExtension; } ;
struct TYPE_28__ {TYPE_3__ Parameters; } ;
struct TYPE_27__ {int* UserBuffer; } ;
typedef int SYSAUDIO_INSTANCE_INFO ;
typedef int* PVOID ;
typedef scalar_t__* PULONG ;
typedef TYPE_5__* PSYSAUDIO_INSTANCE_INFO ;
typedef TYPE_6__* PSYSAUDIODEVEXT ;
typedef TYPE_7__* PKSP_PIN ;
typedef TYPE_8__* PKSPROPERTY ;
typedef TYPE_9__* PKSAUDIO_DEVICE_ENTRY ;
typedef TYPE_10__* PIRP ;
typedef TYPE_11__* PIO_STACK_LOCATION ;
typedef TYPE_12__* PDEVICE_OBJECT ;
typedef int NTSTATUS ;
typedef int* LPWSTR ;
typedef int KSP_PIN ;
typedef TYPE_13__ KSPROPERTY ;
typedef int KSCOMPONENTID ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,scalar_t__,int) ;
 TYPE_9__* FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (TYPE_10__*,TYPE_8__*,TYPE_6__*) ;
 int VAR_0 ;
 TYPE_11__* FUNC_5 (TYPE_10__*) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int ,int ,int ,int*,int,int*,int,int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int*,int *,int) ;
 int FUNC_11 (int *,TYPE_4__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_12 (TYPE_10__*,int ,int) ;
 int FUNC_13 (TYPE_10__*,scalar_t__,TYPE_6__*) ;

NTSTATUS
FUNC_14(
    PDEVICE_OBJECT VAR_19,
    PIRP VAR_20)
{
    PIO_STACK_LOCATION VAR_21;
    NTSTATUS VAR_22 = VAR_16;
    KSPROPERTY VAR_23;
    KSCOMPONENTID VAR_24;
    PULONG VAR_25;
    PKSPROPERTY VAR_26;
    PSYSAUDIODEVEXT VAR_27;
    PKSAUDIO_DEVICE_ENTRY VAR_28;
    PSYSAUDIO_INSTANCE_INFO VAR_29;
    ULONG VAR_30;
    UNICODE_STRING VAR_31;
    PKSP_PIN VAR_32;
    LPWSTR VAR_33;

    VAR_21 = FUNC_5(VAR_20);

    if (VAR_21->Parameters.DeviceIoControl.InputBufferLength < sizeof(KSPROPERTY))
    {

        return FUNC_12(VAR_20, VAR_14, sizeof(KSPROPERTY));
    }

    VAR_26 = (PKSPROPERTY)VAR_21->Parameters.DeviceIoControl.Type3InputBuffer;
    VAR_27 = (PSYSAUDIODEVEXT)VAR_19->DeviceExtension;

    if (FUNC_6(&VAR_26->Set, &VAR_10))
    {
        return FUNC_4(VAR_20, VAR_26, VAR_27);
    }
    else if(FUNC_6(&VAR_26->Set, &VAR_12))
    {
        if (VAR_21->Parameters.DeviceIoControl.InputBufferLength < sizeof(KSP_PIN))
        {

            return FUNC_12(VAR_20, VAR_14, sizeof(KSP_PIN));
        }
        VAR_32 = (PKSP_PIN)VAR_21->Parameters.DeviceIoControl.Type3InputBuffer;
        VAR_28 = FUNC_3(&VAR_27->KsAudioDeviceList, VAR_32->Reserved);
        FUNC_0(VAR_28 != ((void*)0));


        VAR_22 = FUNC_7(VAR_28->FileObject, VAR_13, VAR_0,
                                             (PVOID)VAR_21->Parameters.DeviceIoControl.Type3InputBuffer,
                                             VAR_21->Parameters.DeviceIoControl.InputBufferLength,
                                             VAR_20->UserBuffer,
                                             VAR_21->Parameters.DeviceIoControl.OutputBufferLength,
                                             &VAR_30);

        return FUNC_12(VAR_20, VAR_22, VAR_30);
    }
    else if (FUNC_6(&VAR_26->Set, &VAR_11))
    {
        if (VAR_26->Id == VAR_5)
        {
            if (VAR_21->Parameters.DeviceIoControl.InputBufferLength < sizeof(KSPROPERTY) + sizeof(ULONG))
            {

                return FUNC_12(VAR_20, VAR_18, sizeof(KSPROPERTY) + sizeof(ULONG));
            }
            VAR_25 = (PULONG)(VAR_26 + 1);

            if (VAR_27->NumberOfKsAudioDevices <= *VAR_25)
            {

                return FUNC_12(VAR_20, VAR_15, 0);
            }

            VAR_28 = FUNC_3(&VAR_27->KsAudioDeviceList, *VAR_25);
            FUNC_0(VAR_28 != ((void*)0));

            VAR_30 = VAR_28->DeviceName.Length + sizeof(WCHAR);
            if (VAR_21->Parameters.DeviceIoControl.OutputBufferLength < VAR_30)
            {

                return FUNC_12(VAR_20, VAR_14, VAR_30);
            }


            VAR_33 = (LPWSTR)VAR_20->UserBuffer;

            FUNC_10(VAR_33, VAR_28->DeviceName.Buffer, VAR_28->DeviceName.Length);
            VAR_33[VAR_28->DeviceName.Length / sizeof(WCHAR)] = L'\0';
            return FUNC_12(VAR_20, VAR_17, VAR_30);
        }

        if (VAR_26->Id == VAR_2)
        {
            if (VAR_21->Parameters.DeviceIoControl.InputBufferLength < sizeof(KSPROPERTY) + sizeof(ULONG))
            {

                return FUNC_12(VAR_20, VAR_14, sizeof(KSPROPERTY) + sizeof(ULONG));
            }

            if (VAR_21->Parameters.DeviceIoControl.OutputBufferLength < sizeof(KSCOMPONENTID))
            {

                return FUNC_12(VAR_20, VAR_14, sizeof(KSCOMPONENTID));
            }

            VAR_25 = (PULONG)(VAR_26 + 1);

            if (VAR_27->NumberOfKsAudioDevices <= *VAR_25)
            {

                return FUNC_12(VAR_20, VAR_15, 0);
            }
            VAR_28 = FUNC_3(&VAR_27->KsAudioDeviceList, *VAR_25);
            FUNC_0(VAR_28 != ((void*)0));

            VAR_23.Set = VAR_9;
            VAR_23.Id = VAR_1;
            VAR_23.Flags = VAR_7;


            VAR_22 = FUNC_7(VAR_28->FileObject, VAR_13, VAR_0, (PVOID)&VAR_23, sizeof(KSPROPERTY), (PVOID)&VAR_24, sizeof(KSCOMPONENTID), &VAR_30);
            if (!FUNC_8(VAR_22))
            {
                FUNC_1("KsSynchronousIoControlDevice failed with %x for KSPROPERTY_GENERAL_COMPONENTID\n", VAR_22);
                return FUNC_12(VAR_20, VAR_22, 0);
            }
            FUNC_10(VAR_20->UserBuffer, &VAR_24, sizeof(KSCOMPONENTID));
            return FUNC_12(VAR_20, VAR_17, sizeof(KSCOMPONENTID));
        }
        else if (VAR_26->Id == VAR_3)
        {
            if (VAR_21->Parameters.DeviceIoControl.OutputBufferLength < sizeof(ULONG))
            {

                return FUNC_12(VAR_20, VAR_14, sizeof(ULONG));
            }

            *((PULONG)VAR_20->UserBuffer) = VAR_27->NumberOfKsAudioDevices;
            return FUNC_12(VAR_20, VAR_17, sizeof(ULONG));
        }
        else if (VAR_26->Id == VAR_4)
        {
            if (VAR_21->Parameters.DeviceIoControl.OutputBufferLength < sizeof(ULONG))
            {

                return FUNC_12(VAR_20, VAR_14, sizeof(ULONG));
            }

            if (VAR_26->Flags & VAR_8)
            {
                VAR_25 = (PULONG)VAR_20->UserBuffer;
                return FUNC_13(VAR_20, *VAR_25, VAR_27);
            }
        }
        else if (VAR_26->Id == VAR_6)
        {
            if (VAR_21->Parameters.DeviceIoControl.InputBufferLength < sizeof(SYSAUDIO_INSTANCE_INFO))
            {

                return FUNC_12(VAR_20, VAR_14, sizeof(SYSAUDIO_INSTANCE_INFO));
            }


            VAR_29 = (PSYSAUDIO_INSTANCE_INFO)VAR_26;

            if (VAR_26->Flags & VAR_8)
            {
                return FUNC_13(VAR_20, VAR_29->DeviceNumber, VAR_27);
            }
        }
    }

    FUNC_11(&VAR_26->Set, &VAR_31);
    FUNC_2("Unhandled property Set |%S| Id %u Flags %x\n", VAR_31.Buffer, VAR_26->Id, VAR_26->Flags);
    FUNC_9(&VAR_31);
    return FUNC_12(VAR_20, VAR_18, 0);
}
