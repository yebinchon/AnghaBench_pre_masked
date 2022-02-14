
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int WCHAR ;
typedef int WAVEFORMATEX ;
typedef int VOID ;
typedef int UINT ;
struct TYPE_36__ {int cbSize; int * DevicePath; } ;
struct TYPE_35__ {int cbSize; scalar_t__ Reserved; } ;
struct TYPE_34__ {int cbSize; scalar_t__ Reserved; } ;
struct TYPE_33__ {int FormatSize; int SampleSize; int Specifier; int SubFormat; int MajorFormat; scalar_t__ Reserved; int Flags; } ;
struct TYPE_32__ {int nChannels; int nSamplesPerSec; int nBlockAlign; int nAvgBytesPerSec; int wBitsPerSample; scalar_t__ cbSize; int wFormatTag; } ;
struct TYPE_31__ {int PrioritySubClass; int PriorityClass; } ;
struct TYPE_30__ {scalar_t__ Flags; int Id; int Set; } ;
struct TYPE_29__ {scalar_t__ Flags; int Id; int Set; } ;
struct TYPE_28__ {int Numerator; int Denominator; } ;
struct TYPE_27__ {TYPE_6__ DataFormat; TYPE_5__ WaveFormatEx; } ;
struct TYPE_26__ {TYPE_4__ Priority; int * PinToHandle; scalar_t__ PinId; TYPE_3__ Medium; TYPE_2__ Interface; } ;
struct TYPE_25__ {int Flags; int Id; int Set; } ;
struct TYPE_24__ {int* Data; int FrameExtent; int DataUsed; int Size; TYPE_1__ PresentationTime; } ;
typedef int State ;
typedef TYPE_7__ SP_DEVINFO_DATA ;
typedef int SP_DEVICE_INTERFACE_DETAIL_DATA ;
typedef TYPE_8__ SP_DEVICE_INTERFACE_DATA ;
typedef TYPE_9__* PSP_DEVICE_INTERFACE_DETAIL_DATA ;
typedef int* PSHORT ;
typedef TYPE_10__* PKSSTREAM_HEADER ;
typedef TYPE_11__* PKSPROPERTY ;
typedef TYPE_12__* PKSPIN_CONNECT ;
typedef TYPE_13__* PKSDATAFORMAT_WAVEFORMATEX ;
typedef int NTSTATUS ;
typedef char* LPWSTR ;
typedef int KSSTREAM_HEADER ;
typedef TYPE_10__ KSSTATE ;
typedef int KSPROPERTY ;
typedef int KSPIN_CONNECT ;
typedef int KSDATAFORMAT_WAVEFORMATEX ;
typedef int KSDATAFORMAT ;
typedef int InterfaceData ;
typedef int HDEVINFO ;
typedef int HANDLE ;
typedef int DeviceData ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int,int ,TYPE_11__*,int,TYPE_10__*,int,int*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_10__ VAR_20 ;
 TYPE_10__ VAR_21 ;
 int FUNC_6 (int,TYPE_12__*,int,int*) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *,int *,int,TYPE_8__*) ;
 int FUNC_9 (int *,int *,int *,int ) ;
 int FUNC_10 (int ,TYPE_8__*,TYPE_9__*,int,int *,TYPE_7__*) ;
 int VAR_24 ;
 double VAR_25 ;
 int FUNC_11 (char*,int,...) ;
 int FUNC_12 (double) ;
 int FUNC_13 (char*,int,char*) ;

VOID
FUNC_14()
{
    SP_DEVICE_INTERFACE_DATA VAR_26;
    SP_DEVINFO_DATA VAR_27;
    PSP_DEVICE_INTERFACE_DETAIL_DATA VAR_28;
    HDEVINFO VAR_29;
    PKSDATAFORMAT_WAVEFORMATEX VAR_30;
    PKSPIN_CONNECT VAR_31;
    PKSSTREAM_HEADER VAR_32;
    PKSPROPERTY VAR_33;
    KSSTATE VAR_34;
    DWORD VAR_35;
    HANDLE VAR_36;
    HANDLE VAR_37;
    PSHORT VAR_38;
    UINT VAR_39 = 0;
    BOOL VAR_40;
    NTSTATUS VAR_41;




    VAR_29 = FUNC_9(&VAR_0,
                                       ((void*)0),
                                       ((void*)0),
                                       VAR_1);

   FUNC_11("DeviceHandle %p\n", VAR_29);




    VAR_26.cbSize = sizeof(VAR_26);
    VAR_26.Reserved = 0;
    VAR_40 = FUNC_8(VAR_29,
                                ((void*)0),
                                &VAR_0,
                                1,
                                &VAR_26);

   FUNC_11("SetupDiEnumDeviceInterfaces %u Error %ld\n", VAR_40, FUNC_3());




    VAR_35 = sizeof(SP_DEVICE_INTERFACE_DETAIL_DATA) + VAR_22 * sizeof(WCHAR);
    VAR_28 = (PSP_DEVICE_INTERFACE_DETAIL_DATA)FUNC_5(FUNC_4(),
                                                             0,
                                                             VAR_35);
    VAR_28->cbSize = sizeof(SP_DEVICE_INTERFACE_DETAIL_DATA);
    VAR_27.cbSize = sizeof(VAR_27);
    VAR_27.Reserved = 0;
    VAR_40 = FUNC_10(VAR_29,
                                    &VAR_26,
                                    VAR_28,
                                    VAR_35,
                                    ((void*)0),
                                    &VAR_27);

    FUNC_13(L"SetupDiGetDeviceInterfaceDetail %u Path DetailData %s\n", VAR_40, (LPWSTR)&VAR_28->DevicePath[0]);




    VAR_36 = FUNC_1(VAR_28->DevicePath,
                              VAR_3 | VAR_4,
                              0,
                              ((void*)0),
                              VAR_23,
                              VAR_2,
                              ((void*)0));

    FUNC_11("Handle %p\n", VAR_36);




    FUNC_7(VAR_29);




    VAR_35 = sizeof(KSPIN_CONNECT) + sizeof(KSDATAFORMAT_WAVEFORMATEX);
 FUNC_11("Length %ld KSPIN %Iu DATAFORMAT %Iu\n", VAR_35, sizeof(KSPIN_CONNECT), sizeof(KSDATAFORMAT_WAVEFORMATEX));
    VAR_31 = (PKSPIN_CONNECT)FUNC_5(FUNC_4(), 0, VAR_35);
    VAR_30 = (PKSDATAFORMAT_WAVEFORMATEX)(VAR_31 + 1);




    VAR_31->Interface.Set = VAR_12;
    VAR_31->Interface.Id = VAR_13;
    VAR_31->Interface.Flags = 0;
    VAR_31->Medium.Set = VAR_14;
    VAR_31->Medium.Id = VAR_15;
    VAR_31->Medium.Flags = 0;
    VAR_31->PinId = 0;
    VAR_31->PinToHandle = ((void*)0);
    VAR_31->Priority.PriorityClass = VAR_16;
    VAR_31->Priority.PrioritySubClass = 1;




    VAR_30->WaveFormatEx.wFormatTag = VAR_24;
    VAR_30->WaveFormatEx.nChannels = 2;
    VAR_30->WaveFormatEx.nSamplesPerSec = 48000;
    VAR_30->WaveFormatEx.nBlockAlign = 4;
    VAR_30->WaveFormatEx.nAvgBytesPerSec = 48000 * 4;
    VAR_30->WaveFormatEx.wBitsPerSample = 16;
    VAR_30->WaveFormatEx.cbSize = 0;
    VAR_30->DataFormat.FormatSize = sizeof(KSDATAFORMAT) +
                                        sizeof(WAVEFORMATEX);
    VAR_30->DataFormat.Flags = VAR_8;
    VAR_30->DataFormat.Reserved = 0;
    VAR_30->DataFormat.MajorFormat = VAR_11;
    VAR_30->DataFormat.SubFormat = VAR_10;
    VAR_30->DataFormat.Specifier = VAR_9;
    VAR_30->DataFormat.SampleSize = 4;




    VAR_41 = FUNC_6(VAR_36, VAR_31, VAR_4, &VAR_37);

    FUNC_11("PinHandle %p Status %lx\n", VAR_37, VAR_41);




    VAR_35 = 48000 * 4;
    VAR_38 = (PSHORT)FUNC_5(FUNC_4(), 0, VAR_35);




    while (VAR_39 < VAR_35 / 2)
    {




        VAR_38[VAR_39] = 0x7FFF * FUNC_12(0.5 * (VAR_39 - 1) * 500 * VAR_25 / 48000);
        VAR_39++;
        VAR_38[VAR_39] = 0x7FFF * FUNC_12((0.5 * VAR_39 - 2) * 500 * VAR_25 / 48000);
        VAR_39++;
    }




    VAR_32 = (PKSSTREAM_HEADER)FUNC_5(FUNC_4(),
                                         VAR_5,
                                         sizeof(KSSTREAM_HEADER));
    VAR_32->Data = VAR_38;
    VAR_32->FrameExtent = VAR_35;
    VAR_32->DataUsed = VAR_35;
    VAR_32->Size = sizeof(KSSTREAM_HEADER);
    VAR_32->PresentationTime.Numerator = 1;
    VAR_32->PresentationTime.Denominator = 1;




    VAR_33 = (PKSPROPERTY)FUNC_5(FUNC_4(), 0, sizeof(KSPROPERTY));
    VAR_33->Set = VAR_19;
    VAR_33->Id = VAR_17;
    VAR_33->Flags = VAR_18;




    VAR_34 = VAR_20;
    FUNC_2(VAR_37,
                    VAR_6,
                    VAR_33,
                    sizeof(KSPROPERTY),
                    &VAR_34,
                    sizeof(VAR_34),
                    &VAR_35,
                    ((void*)0));




    FUNC_2(VAR_37,
                    VAR_7,
                    ((void*)0),
                    0,
                    VAR_32,
                    VAR_32->Size,
                    &VAR_35,
                    ((void*)0));




    VAR_34 = VAR_21;
    FUNC_2(VAR_37,
                    VAR_6,
                    VAR_33,
                    sizeof(KSPROPERTY),
                    &VAR_34,
                    sizeof(VAR_34),
                    &VAR_35,
                    ((void*)0));

    FUNC_0(VAR_37);
    FUNC_0(VAR_36);
}
