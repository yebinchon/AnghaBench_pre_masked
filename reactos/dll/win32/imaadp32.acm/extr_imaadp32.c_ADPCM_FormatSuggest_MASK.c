
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ wFormatTag; int nChannels; int nSamplesPerSec; int wBitsPerSample; int nBlockAlign; int nAvgBytesPerSec; } ;
struct TYPE_7__ {int wSamplesPerBlock; } ;
struct TYPE_6__ {int cbwfxSrc; int cbwfxDst; int fdwSuggest; TYPE_4__* pwfxDst; TYPE_4__* pwfxSrc; } ;
typedef int PCMWAVEFORMAT ;
typedef TYPE_1__* PACMDRVFORMATSUGGEST ;
typedef int LRESULT ;
typedef TYPE_2__ IMAADPCMWAVEFORMAT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_1 (char*,int ) ;


 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static LRESULT FUNC_3(PACMDRVFORMATSUGGEST VAR_6)
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
        if (VAR_6->cbwfxSrc < sizeof(IMAADPCMWAVEFORMAT)) return VAR_0;
        VAR_6->pwfxDst->nBlockAlign = (VAR_6->pwfxDst->nChannels * VAR_6->pwfxDst->wBitsPerSample) / 8;
        VAR_6->pwfxDst->nAvgBytesPerSec = VAR_6->pwfxDst->nSamplesPerSec * VAR_6->pwfxDst->nBlockAlign;

        if (FUNC_0(VAR_6->pwfxDst) == 0xFFFFFFFF) return VAR_0;
        break;
    case 129:
        if (VAR_6->cbwfxDst < sizeof(IMAADPCMWAVEFORMAT)) return VAR_0;
        FUNC_2((IMAADPCMWAVEFORMAT*)VAR_6->pwfxDst);

        FUNC_1("setting spb=%u\n", ((IMAADPCMWAVEFORMAT*)VAR_6->pwfxDst)->wSamplesPerBlock);

        if (FUNC_0(VAR_6->pwfxDst) == 0xFFFFFFFF) return VAR_0;
        break;
    default:
        return VAR_0;
    }

    return VAR_5;
}
