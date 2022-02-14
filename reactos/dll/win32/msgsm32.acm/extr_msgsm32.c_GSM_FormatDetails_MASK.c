
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_7__ {int wFormatTag; int nChannels; int nSamplesPerSec; int wBitsPerSample; int nBlockAlign; int nAvgBytesPerSec; int cbSize; } ;
struct TYPE_6__ {int wSamplesPerBlock; } ;
struct TYPE_5__ {int dwFormatTag; size_t dwFormatIndex; scalar_t__* szFormat; int fdwSupport; TYPE_3__* pwfx; } ;
typedef TYPE_1__* PACMFORMATDETAILSW ;
typedef int LRESULT ;
typedef TYPE_2__ GSM610WAVEFORMAT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;


 size_t FUNC_0 (void**) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int) ;


 void** VAR_5 ;

__attribute__((used)) static LRESULT FUNC_3(PACMFORMATDETAILSW VAR_6, DWORD VAR_7)
{
    switch (VAR_7)
    {
    case 131:
 if (!FUNC_1(VAR_6->pwfx)) return VAR_1;
 break;
    case 130:
 VAR_6->pwfx->wFormatTag = VAR_6->dwFormatTag;
 switch (VAR_6->dwFormatTag)
        {
 case 128:
     if (VAR_6->dwFormatIndex >= FUNC_0(VAR_5)) return VAR_1;
     VAR_6->pwfx->nChannels = 1;
     VAR_6->pwfx->nSamplesPerSec = VAR_5[VAR_6->dwFormatIndex];
     VAR_6->pwfx->wBitsPerSample = 16;
     VAR_6->pwfx->nBlockAlign = 2;
     VAR_6->pwfx->nAvgBytesPerSec = VAR_6->pwfx->nSamplesPerSec * VAR_6->pwfx->nBlockAlign;
     break;
 case 129:
     if (VAR_6->dwFormatIndex >= FUNC_0(VAR_5)) return VAR_1;
     VAR_6->pwfx->nChannels = 1;
     VAR_6->pwfx->nSamplesPerSec = VAR_5[VAR_6->dwFormatIndex];
     VAR_6->pwfx->wBitsPerSample = 0;
     VAR_6->pwfx->nBlockAlign = 65;
            VAR_6->pwfx->nAvgBytesPerSec = VAR_6->pwfx->nSamplesPerSec * 65 / 320;
            VAR_6->pwfx->cbSize = sizeof(WORD);
            ((GSM610WAVEFORMAT*)VAR_6->pwfx)->wSamplesPerBlock = 320;
     break;
 default:
            FUNC_2("Unsupported tag %08x\n", VAR_6->dwFormatTag);
     return VAR_2;
 }
 break;
    default:
 FUNC_2("Unsupported query %08x\n", VAR_7);
 return VAR_4;
    }
    VAR_6->fdwSupport = VAR_0;
    VAR_6->szFormat[0] = 0;

    return VAR_3;
}
