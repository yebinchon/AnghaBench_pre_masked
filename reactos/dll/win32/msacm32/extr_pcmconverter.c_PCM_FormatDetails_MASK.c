
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nChannels; int rate; int nBits; } ;
struct TYPE_8__ {int nChannels; int nSamplesPerSec; int wBitsPerSample; int nBlockAlign; int nAvgBytesPerSec; void* wFormatTag; } ;
struct TYPE_7__ {size_t dwFormatIndex; int cbwfx; scalar_t__* szFormat; int fdwSupport; void* dwFormatTag; TYPE_3__* pwfx; } ;
typedef int PCMWAVEFORMAT ;
typedef TYPE_1__* PACMFORMATDETAILSW ;
typedef int LRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;


 size_t FUNC_0 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,TYPE_1__*,int) ;
 int FUNC_3 (char*,...) ;
 void* VAR_5 ;
 int FUNC_4 (int) ;

__attribute__((used)) static LRESULT FUNC_5(PACMFORMATDETAILSW VAR_6, DWORD VAR_7)
{
    FUNC_2("(%p, %08x)\n", VAR_6, VAR_7);

    switch (VAR_7) {
    case 129:
 if (FUNC_1(VAR_6->pwfx) == 0xFFFFFFFF) {
            FUNC_3("not possible\n");
            return VAR_1;
        }
 break;
    case 128:
 FUNC_4(VAR_6->dwFormatIndex < FUNC_0(VAR_4));
 VAR_6->pwfx->wFormatTag = VAR_5;
 VAR_6->pwfx->nChannels = VAR_4[VAR_6->dwFormatIndex].nChannels;
 VAR_6->pwfx->nSamplesPerSec = VAR_4[VAR_6->dwFormatIndex].rate;
 VAR_6->pwfx->wBitsPerSample = VAR_4[VAR_6->dwFormatIndex].nBits;



 VAR_6->pwfx->nBlockAlign =
     (VAR_6->pwfx->nChannels * VAR_6->pwfx->wBitsPerSample) / 8;
 VAR_6->pwfx->nAvgBytesPerSec =
     VAR_6->pwfx->nSamplesPerSec * VAR_6->pwfx->nBlockAlign;
 break;
    default:
 FUNC_3("Unsupported query %08x\n", VAR_7);
 return VAR_3;
    }

    VAR_6->dwFormatTag = VAR_5;
    VAR_6->fdwSupport = VAR_0;
    VAR_6->szFormat[0] = 0;
    VAR_6->cbwfx = sizeof(PCMWAVEFORMAT);

    return VAR_2;
}
