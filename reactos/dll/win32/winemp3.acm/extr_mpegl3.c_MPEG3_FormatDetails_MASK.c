
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int wFormatTag; int nChannels; int nSamplesPerSec; int wBitsPerSample; int nBlockAlign; int nAvgBytesPerSec; } ;
struct TYPE_6__ {int nChannels; int rate; int nBits; } ;
struct TYPE_5__ {int dwFormatTag; size_t dwFormatIndex; scalar_t__* szFormat; int fdwSupport; TYPE_3__* pwfx; } ;
typedef TYPE_1__* PACMFORMATDETAILSW ;
typedef int LRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 size_t VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_1 (char*,...) ;




__attribute__((used)) static LRESULT FUNC_2(PACMFORMATDETAILSW VAR_7, DWORD VAR_8)
{
    switch (VAR_8)
    {
    case 132:
 if (FUNC_0(VAR_7->pwfx) == 0xFFFFFFFF) return VAR_1;
 break;
    case 131:
 VAR_7->pwfx->wFormatTag = VAR_7->dwFormatTag;
 switch (VAR_7->dwFormatTag)
        {
 case 128:
     if (VAR_7->dwFormatIndex >= VAR_5) return VAR_1;
     VAR_7->pwfx->nChannels = VAR_6[VAR_7->dwFormatIndex].nChannels;
     VAR_7->pwfx->nSamplesPerSec = VAR_6[VAR_7->dwFormatIndex].rate;
     VAR_7->pwfx->wBitsPerSample = VAR_6[VAR_7->dwFormatIndex].nBits;



     VAR_7->pwfx->nBlockAlign =
  (VAR_7->pwfx->nChannels * VAR_7->pwfx->wBitsPerSample) / 8;
     VAR_7->pwfx->nAvgBytesPerSec =
  VAR_7->pwfx->nSamplesPerSec * VAR_7->pwfx->nBlockAlign;
     break;
 case 129:
 case 130:
            FUNC_1("Encoding to MPEG is not supported\n");
            return VAR_1;
 default:
            FUNC_1("Unsupported tag %08x\n", VAR_7->dwFormatTag);
     return VAR_2;
 }
 break;
    default:
 FUNC_1("Unsupported query %08x\n", VAR_8);
 return VAR_4;
    }
    VAR_7->fdwSupport = VAR_0;
    VAR_7->szFormat[0] = 0;

    return VAR_3;
}
