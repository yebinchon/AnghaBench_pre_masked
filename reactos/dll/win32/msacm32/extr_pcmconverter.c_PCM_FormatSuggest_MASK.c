
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nChannels; int nSamplesPerSec; int wBitsPerSample; scalar_t__ wFormatTag; int nBlockAlign; int nAvgBytesPerSec; } ;
struct TYPE_5__ {int cbwfxSrc; int cbwfxDst; int fdwSuggest; TYPE_3__* pwfxDst; TYPE_3__* pwfxSrc; } ;
typedef int PCMWAVEFORMAT ;
typedef TYPE_1__* PACMDRVFORMATSUGGEST ;
typedef int LRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static LRESULT FUNC_3(PACMDRVFORMATSUGGEST VAR_7)
{
    FUNC_1("(%p)\n", VAR_7);


    if (VAR_7->cbwfxSrc < sizeof(PCMWAVEFORMAT) ||
        VAR_7->cbwfxDst < sizeof(PCMWAVEFORMAT) ||
        FUNC_0(VAR_7->pwfxSrc) == 0xFFFFFFFF) {
            FUNC_2("not possible\n");
            return VAR_0;
    }


    if (!(VAR_7->fdwSuggest & VAR_1)) {
        VAR_7->pwfxDst->nChannels = VAR_7->pwfxSrc->nChannels;
    }
    if (!(VAR_7->fdwSuggest & VAR_2)) {
        VAR_7->pwfxDst->nSamplesPerSec = VAR_7->pwfxSrc->nSamplesPerSec;
    }
    if (!(VAR_7->fdwSuggest & VAR_3)) {
        VAR_7->pwfxDst->wBitsPerSample = VAR_7->pwfxSrc->wBitsPerSample;
    }
    if (!(VAR_7->fdwSuggest & VAR_4)) {
        if (VAR_7->pwfxSrc->wFormatTag != VAR_6) {
            FUNC_2("source format 0x%x not supported\n", VAR_7->pwfxSrc->wFormatTag);
            return VAR_0;
        }
        VAR_7->pwfxDst->wFormatTag = VAR_7->pwfxSrc->wFormatTag;
    } else {
        if (VAR_7->pwfxDst->wFormatTag != VAR_6) {
            FUNC_2("destination format 0x%x not supported\n", VAR_7->pwfxDst->wFormatTag);
            return VAR_0;
        }
    }

    if (FUNC_0(VAR_7->pwfxDst) == 0xFFFFFFFF) {
        FUNC_2("not possible\n");
        return VAR_0;
    }


    VAR_7->pwfxDst->nBlockAlign = (VAR_7->pwfxDst->nChannels * VAR_7->pwfxDst->wBitsPerSample) / 8;
    VAR_7->pwfxDst->nAvgBytesPerSec = VAR_7->pwfxDst->nSamplesPerSec * VAR_7->pwfxDst->nBlockAlign;

    return VAR_5;
}
