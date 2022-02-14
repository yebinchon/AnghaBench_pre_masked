
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nBlockAlign; int nChannels; int wBitsPerSample; int nAvgBytesPerSec; int nSamplesPerSec; } ;
struct TYPE_4__ {TYPE_2__ Format; } ;
typedef TYPE_1__ WAVEFORMATEXTENSIBLE ;
typedef TYPE_2__ WAVEFORMATEX ;



__attribute__((used)) static void FUNC_0(WAVEFORMATEXTENSIBLE *VAR_0)
{
    WAVEFORMATEX *VAR_1 = &VAR_0->Format;
    VAR_1->nBlockAlign = VAR_1->nChannels * VAR_1->wBitsPerSample / 8;
    VAR_1->nAvgBytesPerSec = VAR_1->nSamplesPerSec * VAR_1->nBlockAlign;
}
