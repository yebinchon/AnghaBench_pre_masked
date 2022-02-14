
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


struct TYPE_19__ {int nChannels; int nSamplesPerSec; int nAvgBytesPerSec; int nBlockAlign; int cbSize; int wFormatTag; scalar_t__ wBitsPerSample; } ;
typedef TYPE_3__ WAVEFORMATEX ;
struct TYPE_16__ {int Data1; } ;
struct TYPE_24__ {int cbFormat; TYPE_14__ subtype; struct TYPE_24__* pbFormat; scalar_t__ bTemporalCompression; int bFixedSizeSamples; scalar_t__ lSampleSize; int majortype; int formattype; } ;
struct TYPE_23__ {int dwHeadBitrate; int fwHeadModeExt; int wHeadEmphasis; int fwHeadFlags; int fwHeadMode; int fwHeadLayer; } ;
struct TYPE_22__ {int nBlockSize; int nFramesPerBlock; int nCodecDelay; int fdwFlags; int wID; } ;
struct TYPE_17__ {int IBaseFilter_iface; } ;
struct TYPE_18__ {TYPE_1__ filter; } ;
struct TYPE_21__ {TYPE_2__ Parser; } ;
struct TYPE_20__ {int achName; int * pFilter; int dir; } ;
typedef TYPE_4__ PIN_INFO ;
typedef TYPE_5__ MPEGSplitterImpl ;
typedef TYPE_6__ MPEGLAYER3WAVEFORMAT ;
typedef TYPE_7__ MPEG1WAVEFORMAT ;
typedef int HRESULT ;
typedef int BYTE ;
typedef TYPE_8__ AM_MEDIA_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_8__* FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*) ;
 int VAR_10 ;
 TYPE_14__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (char*,int,int ,int,int,int,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (TYPE_8__*,int) ;
 int FUNC_4 (TYPE_8__*) ;
 int* VAR_20 ;
 int*** VAR_21 ;
 int FUNC_5 (int ,int ) ;
 int VAR_22 ;

__attribute__((used)) static HRESULT FUNC_6(MPEGSplitterImpl *VAR_23, const BYTE *VAR_24, PIN_INFO *VAR_25, AM_MEDIA_TYPE *VAR_26)
{
    WAVEFORMATEX *VAR_27;
    int VAR_28;
    int VAR_29;
    int VAR_30;
    int VAR_31;
    int VAR_32;
    int VAR_33 = 1;
    int VAR_34;
    int VAR_35;
    int VAR_36;

    FUNC_3(VAR_26, sizeof(*VAR_26));
    VAR_25->dir = VAR_16;
    VAR_25->pFilter = &VAR_23->Parser.filter.IBaseFilter_iface;
    FUNC_5(VAR_25->achName, VAR_22);

    VAR_26->formattype = VAR_10;
    VAR_26->majortype = VAR_12;
    VAR_26->subtype = VAR_11;

    VAR_26->lSampleSize = 0;
    VAR_26->bFixedSizeSamples = VAR_9;
    VAR_26->bTemporalCompression = 0;

    VAR_34 = (VAR_24[1]>>4)&0x1;
    if (VAR_34)
        VAR_33 = ((VAR_24[1]>>3)&0x1)^1;

    VAR_35 = 4-((VAR_24[1]>>1)&0x3);
    VAR_28 = ((VAR_24[2]>>4)&0xf);
    VAR_32 = ((VAR_24[2]>>1)&0x1);
    VAR_29 = ((VAR_24[2]>>2)&0x3) + (VAR_34?(VAR_33*3):6);
    VAR_36 = ((VAR_24[3]>>6)&0x3);
    VAR_30 = ((VAR_24[3]>>4)&0x3);
    VAR_31 = ((VAR_24[3]>>0)&0x3);

    if (!VAR_28)
    {

        FUNC_1("Variable-bitrate audio not fully supported.\n");
        VAR_28 = 15;
    }

    VAR_26->cbFormat = ((VAR_35==3)? sizeof(MPEGLAYER3WAVEFORMAT) :
                                  sizeof(MPEG1WAVEFORMAT));
    VAR_26->pbFormat = FUNC_0(VAR_26->cbFormat);
    if (!VAR_26->pbFormat)
        return VAR_8;
    FUNC_3(VAR_26->pbFormat, VAR_26->cbFormat);
    VAR_27 = (WAVEFORMATEX*)VAR_26->pbFormat;

    VAR_27->wFormatTag = ((VAR_35 == 3) ? VAR_19 :
                                              VAR_18);
    VAR_27->nChannels = ((VAR_36 == 3) ? 1 : 2);
    VAR_27->nSamplesPerSec = VAR_20[VAR_29];
    VAR_27->nAvgBytesPerSec = VAR_21[VAR_33][VAR_35-1][VAR_28] * 1000 / 8;

    if (VAR_35 == 3)
        VAR_27->nBlockAlign = VAR_27->nAvgBytesPerSec * 8 * 144 /
                              (VAR_27->nSamplesPerSec<<VAR_33) + VAR_32;
    else if (VAR_35 == 2)
        VAR_27->nBlockAlign = VAR_27->nAvgBytesPerSec * 8 * 144 /
                              VAR_27->nSamplesPerSec + VAR_32;
    else
        VAR_27->nBlockAlign = 4 * (VAR_27->nAvgBytesPerSec * 8 * 12 / VAR_27->nSamplesPerSec + VAR_32);

    VAR_27->wBitsPerSample = 0;

    if (VAR_35 == 3)
    {
        MPEGLAYER3WAVEFORMAT *VAR_37 = (MPEGLAYER3WAVEFORMAT*)VAR_27;

        VAR_27->cbSize = VAR_15;

        VAR_37->wID = VAR_14;
        VAR_37->fdwFlags = VAR_13;
        VAR_37->nBlockSize = VAR_27->nBlockAlign;
        VAR_37->nFramesPerBlock = 1;






        VAR_37->nCodecDelay = 1393;
    }
    else
    {
        MPEG1WAVEFORMAT *VAR_38 = (MPEG1WAVEFORMAT*)VAR_27;

        VAR_27->cbSize = 22;

        VAR_38->fwHeadLayer = ((VAR_35 == 1) ? VAR_3 :
                                    ((VAR_35 == 2) ? VAR_4 :
                                     VAR_5));
        VAR_38->dwHeadBitrate = VAR_27->nAvgBytesPerSec * 8;
        VAR_38->fwHeadMode = ((VAR_36 == 3) ? VAR_6 :
                                    ((VAR_36 == 2) ? VAR_0 :
                                     ((VAR_36 == 1) ? VAR_2 :
                                      VAR_7)));
        VAR_38->fwHeadModeExt = ((VAR_36 == 1) ? 0x0F : (1<<VAR_30));
        VAR_38->wHeadEmphasis = VAR_31 + 1;
        VAR_38->fwHeadFlags = VAR_1;
    }
    VAR_26->subtype.Data1 = VAR_27->wFormatTag;

    FUNC_2("MPEG audio stream detected:\n"
          "\tLayer %d (%#x)\n"
          "\tFrequency: %d\n"
          "\tChannels: %d (%d)\n"
          "\tBytesPerSec: %d\n",
          VAR_35, VAR_27->wFormatTag, VAR_27->nSamplesPerSec,
          VAR_27->nChannels, VAR_36, VAR_27->nAvgBytesPerSec);

    FUNC_4(VAR_26);

    return VAR_17;
}
