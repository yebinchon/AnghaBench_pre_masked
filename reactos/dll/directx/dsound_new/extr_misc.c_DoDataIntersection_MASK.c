
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WAVEFORMATEX ;
struct TYPE_18__ {int nAvgBytesPerSec; int wBitsPerSample; int nSamplesPerSec; int nChannels; int wFormatTag; int nBlockAlign; scalar_t__ cbSize; } ;
struct TYPE_14__ {int nSamplesPerSec; int nChannels; int nAvgBytesPerSec; int wBitsPerSample; scalar_t__ cbSize; int nBlockAlign; int wFormatTag; } ;
struct TYPE_13__ {int FormatSize; int SampleSize; int Specifier; int SubFormat; int MajorFormat; scalar_t__ Reserved; scalar_t__ Flags; } ;
struct TYPE_17__ {TYPE_3__ WaveFormatEx; TYPE_2__ DataFormat; } ;
struct TYPE_16__ {int Count; int Size; } ;
struct TYPE_12__ {int Id; int Set; int Flags; } ;
struct TYPE_15__ {int PinId; TYPE_1__ Property; } ;
typedef TYPE_4__* PKSP_PIN ;
typedef TYPE_5__* PKSMULTIPLE_ITEM ;
typedef TYPE_6__* PKSDATAFORMAT_WAVEFORMATEX ;
typedef TYPE_7__* LPWAVEFORMATEX ;
typedef int LPVOID ;
typedef int KSP_PIN ;
typedef int KSMULTIPLE_ITEM ;
typedef int KSDATAFORMAT_WAVEFORMATEX ;
typedef int KSDATAFORMAT ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 TYPE_4__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,int ,int ,int,int ,int,int *) ;
 int VAR_10 ;

BOOL
FUNC_6(
    HANDLE VAR_11,
    DWORD VAR_12,
    DWORD VAR_13,
    LPWAVEFORMATEX VAR_14,
    DWORD VAR_15,
    DWORD VAR_16,
    DWORD VAR_17,
    LPWAVEFORMATEX VAR_18)
{
    DWORD VAR_19, VAR_20;
    KSDATAFORMAT_WAVEFORMATEX VAR_21;
    PKSP_PIN VAR_22;
    PKSMULTIPLE_ITEM VAR_23;
    PKSDATAFORMAT_WAVEFORMATEX VAR_24;
    DWORD VAR_25;


    VAR_22 = FUNC_3(FUNC_2(), VAR_2, sizeof(KSP_PIN) + sizeof(KSMULTIPLE_ITEM) + sizeof(KSDATAFORMAT_WAVEFORMATEX));
    if (!VAR_22)
    {

        return VAR_1;
    }

    VAR_23 = (PKSMULTIPLE_ITEM)(VAR_22 + 1);
    VAR_24 = (PKSDATAFORMAT_WAVEFORMATEX)(VAR_23 + 1);


    VAR_22->PinId = VAR_12;
    VAR_22->Property.Flags = VAR_8;
    VAR_22->Property.Set = VAR_9;
    VAR_22->Property.Id = VAR_7;
    VAR_23->Count = 1;
    VAR_23->Size = sizeof(KSDATAFORMAT_WAVEFORMATEX);


    VAR_24->WaveFormatEx.wFormatTag = VAR_14->wFormatTag;
    VAR_24->WaveFormatEx.nSamplesPerSec = VAR_13;
    VAR_24->WaveFormatEx.nBlockAlign = VAR_14->nBlockAlign;
    VAR_24->WaveFormatEx.cbSize = 0;
    VAR_24->DataFormat.FormatSize = sizeof(KSDATAFORMAT) + sizeof(WAVEFORMATEX);
    VAR_24->DataFormat.Flags = 0;
    VAR_24->DataFormat.Reserved = 0;
    VAR_24->DataFormat.MajorFormat = VAR_6;
    VAR_24->DataFormat.SubFormat = VAR_5;
    VAR_24->DataFormat.Specifier = VAR_4;
    VAR_24->DataFormat.SampleSize = 4;

    for(VAR_19 = 1; VAR_19 <= 2; VAR_19++)
    {
        for(VAR_20 = VAR_15; VAR_20 <= VAR_16; VAR_20 += 8)
        {
            VAR_24->WaveFormatEx.nChannels = VAR_19;
            VAR_24->WaveFormatEx.nAvgBytesPerSec = (VAR_20 / 8) * VAR_19 * VAR_13;
            VAR_24->WaveFormatEx.wBitsPerSample = VAR_20;

            FUNC_1("CurrentFormat: InFormat nChannels %u wBitsPerSample %u nSamplesPerSec %u\n",
                   VAR_19, VAR_20, VAR_13);

            VAR_25 = FUNC_5(VAR_11, VAR_3, (LPVOID)VAR_22, sizeof(KSP_PIN) + sizeof(KSMULTIPLE_ITEM) + sizeof(KSDATAFORMAT_WAVEFORMATEX),
                                                     (LPVOID)&VAR_21, sizeof(KSDATAFORMAT_WAVEFORMATEX), ((void*)0));

            FUNC_1("dwResult %x\n", VAR_25);


            if (VAR_25 == VAR_0)
            {

                VAR_18->cbSize = 0;
                VAR_18->nBlockAlign = VAR_14->nBlockAlign;
                VAR_18->wFormatTag = VAR_14->wFormatTag;
                VAR_18->nAvgBytesPerSec = (VAR_20 / 8) * VAR_19 * VAR_13;
                VAR_18->wBitsPerSample = VAR_20;
                VAR_18->nSamplesPerSec = VAR_13;
                VAR_18->nChannels = VAR_19;


                FUNC_4(FUNC_2(), 0, VAR_22);

                FUNC_1("InFormat  nChannels %u wBitsPerSample %u nSamplesPerSec %u\nOutFormat nChannels %u nBitsPerSample %u nSamplesPerSec %u\n",
                       VAR_14->nChannels, VAR_14->wBitsPerSample, VAR_14->nSamplesPerSec,
                       VAR_18->nChannels, VAR_18->wBitsPerSample, VAR_18->nSamplesPerSec);

                return VAR_10;
            }
        }
    }


    FUNC_4(FUNC_2(), 0, VAR_22);
    FUNC_0(0);
    return VAR_1;
}
