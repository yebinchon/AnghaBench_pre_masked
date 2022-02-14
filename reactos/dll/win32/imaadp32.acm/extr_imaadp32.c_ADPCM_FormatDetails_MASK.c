
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int wFormatTag; int nChannels; int nSamplesPerSec; int wBitsPerSample; int nBlockAlign; int nAvgBytesPerSec; } ;
struct TYPE_8__ {int nChannels; int rate; int nBits; } ;
struct TYPE_7__ {int dwFormatTag; size_t dwFormatIndex; scalar_t__* szFormat; int fdwSupport; TYPE_4__* pwfx; } ;
typedef TYPE_1__* PACMFORMATDETAILSW ;
typedef int LRESULT ;
typedef int IMAADPCMWAVEFORMAT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;


 TYPE_2__* VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 size_t FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_2 (char*,int) ;


 int FUNC_3 (int *) ;

__attribute__((used)) static LRESULT FUNC_4(PACMFORMATDETAILSW VAR_7, DWORD VAR_8)
{
    switch (VAR_8)
    {
    case 131:
 if (FUNC_0(VAR_7->pwfx) == 0xFFFFFFFF) return VAR_1;
 break;
    case 130:
 VAR_7->pwfx->wFormatTag = VAR_7->dwFormatTag;
 switch (VAR_7->dwFormatTag)
        {
 case 128:
     if (VAR_7->dwFormatIndex >= FUNC_1(VAR_6)) return VAR_1;
     VAR_7->pwfx->nChannels = VAR_6[VAR_7->dwFormatIndex].nChannels;
     VAR_7->pwfx->nSamplesPerSec = VAR_6[VAR_7->dwFormatIndex].rate;
     VAR_7->pwfx->wBitsPerSample = VAR_6[VAR_7->dwFormatIndex].nBits;



     VAR_7->pwfx->nBlockAlign =
  (VAR_7->pwfx->nChannels * VAR_7->pwfx->wBitsPerSample) / 8;
     VAR_7->pwfx->nAvgBytesPerSec =
  VAR_7->pwfx->nSamplesPerSec * VAR_7->pwfx->nBlockAlign;
     break;
 case 129:
     if (VAR_7->dwFormatIndex >= FUNC_1(VAR_2)) return VAR_1;
     VAR_7->pwfx->nChannels = VAR_2[VAR_7->dwFormatIndex].nChannels;
     VAR_7->pwfx->nSamplesPerSec = VAR_2[VAR_7->dwFormatIndex].rate;
     VAR_7->pwfx->wBitsPerSample = VAR_2[VAR_7->dwFormatIndex].nBits;
     FUNC_3((IMAADPCMWAVEFORMAT *)VAR_7->pwfx);
     break;
 default:
            FUNC_2("Unsupported tag %08x\n", VAR_7->dwFormatTag);
     return VAR_3;
 }
 break;
    default:
 FUNC_2("Unsupported query %08x\n", VAR_8);
 return VAR_5;
    }
    VAR_7->fdwSupport = VAR_0;
    VAR_7->szFormat[0] = 0;

    return VAR_4;
}
