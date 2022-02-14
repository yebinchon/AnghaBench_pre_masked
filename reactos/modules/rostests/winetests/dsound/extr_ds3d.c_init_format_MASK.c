
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wFormatTag; int nChannels; int wBitsPerSample; int nSamplesPerSec; int nBlockAlign; int nAvgBytesPerSec; scalar_t__ cbSize; } ;
typedef TYPE_1__ WAVEFORMATEX ;



void FUNC_0(WAVEFORMATEX* VAR_0, int VAR_1, int VAR_2, int VAR_3,
                 int VAR_4)
{
    VAR_0->wFormatTag=VAR_1;
    VAR_0->nChannels=VAR_4;
    VAR_0->wBitsPerSample=VAR_3;
    VAR_0->nSamplesPerSec=VAR_2;
    VAR_0->nBlockAlign=VAR_0->nChannels*VAR_0->wBitsPerSample/8;

    if (VAR_0->nBlockAlign==0)
    {

        VAR_0->nBlockAlign=1;
    }
    VAR_0->nAvgBytesPerSec=VAR_0->nSamplesPerSec*VAR_0->nBlockAlign;
    VAR_0->cbSize=0;
}
