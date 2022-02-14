
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONG ;
struct TYPE_10__ {int FormatSize; } ;
struct TYPE_7__ {int Specifier; int SubFormat; int MajorFormat; } ;
struct TYPE_9__ {int MaximumChannels; int MaximumBitsPerSample; int MinimumBitsPerSample; int MaximumSampleFrequency; int MinimumSampleFrequency; TYPE_1__ DataRange; } ;
struct TYPE_8__ {scalar_t__ Count; } ;
typedef TYPE_2__* PKSMULTIPLE_ITEM ;
typedef TYPE_3__* PKSDATARANGE_AUDIO ;
typedef TYPE_4__* PKSDATARANGE ;
typedef int MIXER_STATUS ;
typedef int KSDATARANGE_AUDIO ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

MIXER_STATUS
FUNC_2(
    PKSMULTIPLE_ITEM VAR_5,
    PKSDATARANGE_AUDIO * VAR_6)
{
    ULONG VAR_7;
    PKSDATARANGE_AUDIO VAR_8;
    PKSDATARANGE VAR_9;

    VAR_9 = (PKSDATARANGE) (VAR_5 + 1);
    for(VAR_7 = 0; VAR_7 < VAR_5->Count; VAR_7++)
    {
        if (VAR_9->FormatSize == sizeof(KSDATARANGE_AUDIO))
        {
            VAR_8 = (PKSDATARANGE_AUDIO)VAR_9;
            if (FUNC_1(&VAR_8->DataRange.MajorFormat, &VAR_2) &&
                FUNC_1(&VAR_8->DataRange.SubFormat, &VAR_1) &&
                FUNC_1(&VAR_8->DataRange.Specifier, &VAR_0))
            {
                FUNC_0("Min Sample %u Max Sample %u Min Bits %u Max Bits %u Max Channel %u\n", VAR_8->MinimumSampleFrequency, VAR_8->MaximumSampleFrequency,
                                                         VAR_8->MinimumBitsPerSample, VAR_8->MaximumBitsPerSample, VAR_8->MaximumChannels);
                *VAR_6 = VAR_8;
                return VAR_3;
            }
        }
        VAR_9 = (PKSDATARANGE)((ULONG_PTR)VAR_9 + VAR_9->FormatSize);
    }
    return VAR_4;
}
