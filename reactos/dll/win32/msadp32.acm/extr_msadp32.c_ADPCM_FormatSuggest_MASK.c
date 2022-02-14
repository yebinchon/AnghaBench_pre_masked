
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ wFormatTag; int nChannels; int nSamplesPerSec; int wBitsPerSample; int nBlockAlign; int nAvgBytesPerSec; } ;
struct TYPE_4__ {int cbwfxSrc; int cbwfxDst; int fdwSuggest; TYPE_2__* pwfxDst; TYPE_2__* pwfxSrc; } ;
typedef int PCMWAVEFORMAT ;
typedef TYPE_1__* PACMDRVFORMATSUGGEST ;
typedef int LRESULT ;
typedef int ADPCMWAVEFORMAT ;
typedef int ADPCMCOEFSET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_5 ;


 int FUNC_1 (int *) ;

__attribute__((used)) static LRESULT FUNC_2(PACMDRVFORMATSUGGEST VAR_6)
{

    if (VAR_6->cbwfxSrc < sizeof(PCMWAVEFORMAT) ||
 VAR_6->cbwfxDst < sizeof(PCMWAVEFORMAT) ||
 VAR_6->pwfxSrc->wFormatTag == VAR_6->pwfxDst->wFormatTag ||
 FUNC_0(VAR_6->pwfxSrc) == 0xFFFFFFFF) return VAR_0;



    if (!(VAR_6->fdwSuggest & VAR_1))
 VAR_6->pwfxDst->nChannels = VAR_6->pwfxSrc->nChannels;
    if (!(VAR_6->fdwSuggest & VAR_2))
        VAR_6->pwfxDst->nSamplesPerSec = VAR_6->pwfxSrc->nSamplesPerSec;

    if (!(VAR_6->fdwSuggest & VAR_3))
    {
 if (VAR_6->pwfxSrc->wFormatTag == 128)
            VAR_6->pwfxDst->wBitsPerSample = 4;
        else
            VAR_6->pwfxDst->wBitsPerSample = 16;
    }
    if (!(VAR_6->fdwSuggest & VAR_4))
    {
 if (VAR_6->pwfxSrc->wFormatTag == 128)
            VAR_6->pwfxDst->wFormatTag = 129;
        else
            VAR_6->pwfxDst->wFormatTag = 128;
    }


    switch (VAR_6->pwfxDst->wFormatTag)
    {
    case 128:
        VAR_6->pwfxDst->nBlockAlign = (VAR_6->pwfxDst->nChannels * VAR_6->pwfxDst->wBitsPerSample) / 8;
        VAR_6->pwfxDst->nAvgBytesPerSec = VAR_6->pwfxDst->nSamplesPerSec * VAR_6->pwfxDst->nBlockAlign;

        if (FUNC_0(VAR_6->pwfxDst) == 0xFFFFFFFF) return VAR_0;
        break;
    case 129:
        if (VAR_6->cbwfxDst < sizeof(ADPCMWAVEFORMAT) + (7 - 1) * sizeof(ADPCMCOEFSET))
            return VAR_0;
        FUNC_1((ADPCMWAVEFORMAT*)VAR_6->pwfxDst);

        if (FUNC_0(VAR_6->pwfxDst) == 0xFFFFFFFF) return VAR_0;
        break;
    default:
        return VAR_0;
    }

    return VAR_5;
}
