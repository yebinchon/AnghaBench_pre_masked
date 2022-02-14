
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nChannels; int nSamplesPerSec; int nAvgBytesPerSec; int nBlockAlign; int wBitsPerSample; scalar_t__ cbSize; int wFormatTag; } ;
struct TYPE_5__ {TYPE_1__* lpWaveFormat; TYPE_1__ wfxRef; } ;
typedef TYPE_2__ WINE_MCIWAVE ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(WINE_MCIWAVE* VAR_1)
{
    VAR_1->lpWaveFormat = &VAR_1->wfxRef;
    VAR_1->lpWaveFormat->wFormatTag = VAR_0;
    VAR_1->lpWaveFormat->nChannels = 1;
    VAR_1->lpWaveFormat->nSamplesPerSec = 11025;
    VAR_1->lpWaveFormat->nAvgBytesPerSec = 11025;
    VAR_1->lpWaveFormat->nBlockAlign = 1;
    VAR_1->lpWaveFormat->wBitsPerSample = 8;
    VAR_1->lpWaveFormat->cbSize = 0;
}
