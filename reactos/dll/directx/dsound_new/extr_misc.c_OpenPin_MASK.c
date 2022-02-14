
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WAVEFORMATEX ;
typedef int ULONG ;
struct TYPE_20__ {int wBitsPerSample; int nAvgBytesPerSec; int nBlockAlign; int nSamplesPerSec; int nChannels; int wFormatTag; } ;
struct TYPE_17__ {int FormatSize; int SampleSize; int Specifier; int SubFormat; int MajorFormat; scalar_t__ Reserved; scalar_t__ Flags; } ;
struct TYPE_16__ {scalar_t__ cbSize; int wBitsPerSample; int nAvgBytesPerSec; int nBlockAlign; int nSamplesPerSec; int nChannels; int wFormatTag; } ;
struct TYPE_19__ {TYPE_5__ DataFormat; TYPE_4__ WaveFormatEx; } ;
struct TYPE_15__ {int PrioritySubClass; int PriorityClass; } ;
struct TYPE_14__ {scalar_t__ Flags; int Id; int Set; } ;
struct TYPE_13__ {scalar_t__ Flags; int Id; int Set; } ;
struct TYPE_18__ {TYPE_3__ Priority; int PinId; int * PinToHandle; TYPE_2__ Medium; TYPE_1__ Interface; } ;
typedef TYPE_6__* PKSPIN_CONNECT ;
typedef TYPE_7__* PKSDATAFORMAT_WAVEFORMATEX ;
typedef int PHANDLE ;
typedef TYPE_8__* LPWAVEFORMATEX ;
typedef int KSPIN_CONNECT ;
typedef int KSDATAFORMAT_WAVEFORMATEX ;
typedef int KSDATAFORMAT ;
typedef int HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 TYPE_6__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_6__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,TYPE_6__*,int,int ) ;

DWORD
FUNC_4(
    HANDLE VAR_13,
    ULONG VAR_14,
    LPWAVEFORMATEX VAR_15,
    PHANDLE VAR_16,
    BOOL VAR_17)
{
    DWORD VAR_18, VAR_19;
    PKSPIN_CONNECT VAR_20;
    PKSDATAFORMAT_WAVEFORMATEX VAR_21;


    VAR_18 = sizeof(KSPIN_CONNECT) + sizeof(KSDATAFORMAT_WAVEFORMATEX);

    VAR_20 = FUNC_1(FUNC_0(), VAR_3, VAR_18);
    if (!VAR_20)
    {

        return VAR_0;
    }

    VAR_20->Interface.Set = VAR_7;

    if (VAR_17)
        VAR_20->Interface.Id = VAR_8;
    else
        VAR_20->Interface.Id = VAR_9;

    VAR_20->Interface.Flags = 0;
    VAR_20->Medium.Set = VAR_10;
    VAR_20->Medium.Id = VAR_11;
    VAR_20->Medium.Flags = 0;
    VAR_20->PinToHandle = ((void*)0);
    VAR_20->PinId = VAR_14;
    VAR_20->Priority.PriorityClass = VAR_12;
    VAR_20->Priority.PrioritySubClass = 1;

    VAR_21 = (PKSDATAFORMAT_WAVEFORMATEX) (VAR_20 + 1);


    VAR_21->WaveFormatEx.wFormatTag = VAR_15->wFormatTag;
    VAR_21->WaveFormatEx.nChannels = VAR_15->nChannels;
    VAR_21->WaveFormatEx.nSamplesPerSec = VAR_15->nSamplesPerSec;
    VAR_21->WaveFormatEx.nBlockAlign = VAR_15->nBlockAlign;
    VAR_21->WaveFormatEx.nAvgBytesPerSec = VAR_15->nAvgBytesPerSec;
    VAR_21->WaveFormatEx.wBitsPerSample = VAR_15->wBitsPerSample;
    VAR_21->WaveFormatEx.cbSize = 0;
    VAR_21->DataFormat.FormatSize = sizeof(KSDATAFORMAT) + sizeof(WAVEFORMATEX);
    VAR_21->DataFormat.Flags = 0;
    VAR_21->DataFormat.Reserved = 0;
    VAR_21->DataFormat.MajorFormat = VAR_6;

    VAR_21->DataFormat.SubFormat = VAR_5;
    VAR_21->DataFormat.Specifier = VAR_4;
    VAR_21->DataFormat.SampleSize = 4;

    VAR_19 = FUNC_3(VAR_13, VAR_20, VAR_1 | VAR_2, VAR_16);

    FUNC_2(FUNC_0(), 0, VAR_20);

    return VAR_19;
}
