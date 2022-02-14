
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nChannels; int nSamplesPerSec; int wBitsPerSample; scalar_t__ wFormatTag; int nBlockAlign; int nAvgBytesPerSec; } ;
struct TYPE_4__ {int cbwfxSrc; int cbwfxDst; int fdwSuggest; TYPE_2__* pwfxDst; TYPE_2__* pwfxSrc; } ;
typedef int PCMWAVEFORMAT ;
typedef TYPE_1__* PACMDRVFORMATSUGGEST ;
typedef int LRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;




__attribute__((used)) static LRESULT FUNC_3(PACMDRVFORMATSUGGEST VAR_6)
{

    if (VAR_6->cbwfxSrc < sizeof(PCMWAVEFORMAT) ||
 VAR_6->cbwfxDst < sizeof(PCMWAVEFORMAT) ||
 FUNC_1(VAR_6->pwfxSrc) == 0xFFFFFFFF) return VAR_0;



    if (!(VAR_6->fdwSuggest & VAR_1))
 VAR_6->pwfxDst->nChannels = VAR_6->pwfxSrc->nChannels;
    if (!(VAR_6->fdwSuggest & VAR_2))
        VAR_6->pwfxDst->nSamplesPerSec = VAR_6->pwfxSrc->nSamplesPerSec;
    if (!(VAR_6->fdwSuggest & VAR_3))
        VAR_6->pwfxDst->wBitsPerSample = 16;
    if (!(VAR_6->fdwSuggest & VAR_4))
    {
 if (VAR_6->pwfxSrc->wFormatTag == 128)
        {
            FUNC_2("Encoding to MPEG is not supported\n");
            return VAR_0;
        }
        else
            VAR_6->pwfxDst->wFormatTag = 128;
    }


    if (FUNC_1(VAR_6->pwfxDst) == 0xFFFFFFFF) return VAR_0;


    switch (VAR_6->pwfxDst->wFormatTag)
    {
    case 128:
        VAR_6->pwfxDst->nBlockAlign = (VAR_6->pwfxDst->nChannels * VAR_6->pwfxDst->wBitsPerSample) / 8;
        VAR_6->pwfxDst->nAvgBytesPerSec = VAR_6->pwfxDst->nSamplesPerSec * VAR_6->pwfxDst->nBlockAlign;
        break;
    case 130:
    case 129:
        FUNC_2("Encoding to MPEG is not supported\n");
        return VAR_0;
        break;
    default:
        FUNC_0("\n");
        break;
    }

    return VAR_5;
}
