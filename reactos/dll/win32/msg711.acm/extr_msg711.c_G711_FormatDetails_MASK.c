
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int wFormatTag; int nChannels; int nSamplesPerSec; int nBlockAlign; int nAvgBytesPerSec; int cbSize; int wBitsPerSample; } ;
struct TYPE_9__ {int nChannels; int rate; int nBits; } ;
struct TYPE_8__ {int dwFormatTag; size_t dwFormatIndex; scalar_t__* szFormat; int fdwSupport; TYPE_4__* pwfx; } ;
typedef TYPE_1__* PACMFORMATDETAILSW ;
typedef int LRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;


 TYPE_2__* VAR_2 ;
 size_t FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_2 (char*,int) ;




__attribute__((used)) static LRESULT FUNC_3(PACMFORMATDETAILSW VAR_8, DWORD VAR_9)
{
    switch (VAR_9)
    {
    case 132:
 if (FUNC_1(VAR_8->pwfx) == 0xFFFFFFFF) return VAR_1;
 break;
    case 131:
 VAR_8->pwfx->wFormatTag = VAR_8->dwFormatTag;
 switch (VAR_8->dwFormatTag)
        {
 case 128:
     if (VAR_8->dwFormatIndex >= FUNC_0(VAR_6)) return VAR_1;
     VAR_8->pwfx->nChannels = VAR_6[VAR_8->dwFormatIndex].nChannels;
     VAR_8->pwfx->nSamplesPerSec = VAR_6[VAR_8->dwFormatIndex].rate;
     VAR_8->pwfx->wBitsPerSample = VAR_6[VAR_8->dwFormatIndex].nBits;
     VAR_8->pwfx->nBlockAlign = VAR_8->pwfx->nChannels * 2;
     VAR_8->pwfx->nAvgBytesPerSec = VAR_8->pwfx->nSamplesPerSec * VAR_8->pwfx->nBlockAlign;
     break;
 case 130:
     if (VAR_8->dwFormatIndex >= FUNC_0(VAR_2)) return VAR_1;
     VAR_8->pwfx->nChannels = VAR_2[VAR_8->dwFormatIndex].nChannels;
     VAR_8->pwfx->nSamplesPerSec = VAR_2[VAR_8->dwFormatIndex].rate;
     VAR_8->pwfx->wBitsPerSample = VAR_2[VAR_8->dwFormatIndex].nBits;
     VAR_8->pwfx->nBlockAlign = VAR_2[VAR_8->dwFormatIndex].nChannels;
     VAR_8->pwfx->nAvgBytesPerSec = VAR_8->pwfx->nSamplesPerSec * VAR_8->pwfx->nChannels;
            VAR_8->pwfx->cbSize = 0;
     break;
 case 129:
     if (VAR_8->dwFormatIndex >= FUNC_0(VAR_7)) return VAR_1;
     VAR_8->pwfx->nChannels = VAR_7[VAR_8->dwFormatIndex].nChannels;
     VAR_8->pwfx->nSamplesPerSec = VAR_7[VAR_8->dwFormatIndex].rate;
     VAR_8->pwfx->wBitsPerSample = VAR_7[VAR_8->dwFormatIndex].nBits;
     VAR_8->pwfx->nBlockAlign = VAR_7[VAR_8->dwFormatIndex].nChannels;
     VAR_8->pwfx->nAvgBytesPerSec = VAR_8->pwfx->nSamplesPerSec * VAR_8->pwfx->nChannels;
            VAR_8->pwfx->cbSize = 0;
     break;
 default:
            FUNC_2("Unsupported tag %08x\n", VAR_8->dwFormatTag);
     return VAR_3;
 }
 break;
    default:
 FUNC_2("Unsupported query %08x\n", VAR_9);
 return VAR_5;
    }
    VAR_8->fdwSupport = VAR_0;
    VAR_8->szFormat[0] = 0;

    return VAR_4;
}
