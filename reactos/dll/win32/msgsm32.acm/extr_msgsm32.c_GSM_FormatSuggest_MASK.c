
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_7__ {int nSamplesPerSec; int wFormatTag; int wBitsPerSample; int nBlockAlign; int nAvgBytesPerSec; int cbSize; int nChannels; } ;
struct TYPE_6__ {int wSamplesPerBlock; } ;
struct TYPE_5__ {int cbwfxSrc; int cbwfxDst; int fdwSuggest; TYPE_3__* pwfxDst; TYPE_3__* pwfxSrc; } ;
typedef int PCMWAVEFORMAT ;
typedef TYPE_1__* PACMDRVFORMATSUGGEST ;
typedef int LRESULT ;
typedef TYPE_2__ GSM610WAVEFORMAT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_5 ;



__attribute__((used)) static LRESULT FUNC_1(PACMDRVFORMATSUGGEST VAR_6)
{

    if (VAR_6->cbwfxSrc < sizeof(PCMWAVEFORMAT) ||
 VAR_6->cbwfxDst < sizeof(PCMWAVEFORMAT) ||
 !FUNC_0(VAR_6->pwfxSrc)) return VAR_0;



    if (!(VAR_6->fdwSuggest & VAR_1))
 VAR_6->pwfxDst->nChannels = VAR_6->pwfxSrc->nChannels;
    if (!(VAR_6->fdwSuggest & VAR_2))
        VAR_6->pwfxDst->nSamplesPerSec = VAR_6->pwfxSrc->nSamplesPerSec;

    if (!(VAR_6->fdwSuggest & VAR_3))
    {
 if (VAR_6->pwfxSrc->wFormatTag == 128)
            VAR_6->pwfxDst->wBitsPerSample = 0;
        else
            VAR_6->pwfxDst->wBitsPerSample = 16;
    }
    if (!(VAR_6->fdwSuggest & VAR_4))
    {
 switch (VAR_6->pwfxSrc->wFormatTag)
        {
        case 128: VAR_6->pwfxDst->wFormatTag = 129; break;
        case 129: VAR_6->pwfxDst->wFormatTag = 128; break;
        }
    }


    switch (VAR_6->pwfxDst->wFormatTag)
    {
    case 128:
        VAR_6->pwfxDst->nBlockAlign = 2;
        VAR_6->pwfxDst->nAvgBytesPerSec = VAR_6->pwfxDst->nSamplesPerSec * 2;
        break;
    case 129:
        if (VAR_6->pwfxDst->cbSize < sizeof(WORD))
            return VAR_0;
        VAR_6->pwfxDst->nBlockAlign = 65;
        VAR_6->pwfxDst->nAvgBytesPerSec = VAR_6->pwfxDst->nSamplesPerSec * 65 / 320;
        ((GSM610WAVEFORMAT*)VAR_6->pwfxDst)->wSamplesPerBlock = 320;
        break;
    default:
        return VAR_0;
    }


    if (!FUNC_0(VAR_6->pwfxDst)) return VAR_0;
    return VAR_5;
}
