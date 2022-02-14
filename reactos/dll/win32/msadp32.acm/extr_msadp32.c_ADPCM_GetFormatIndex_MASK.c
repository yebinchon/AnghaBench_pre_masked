
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int wFormatTag; scalar_t__ nChannels; scalar_t__ nSamplesPerSec; scalar_t__ wBitsPerSample; int nAvgBytesPerSec; int nBlockAlign; int cbSize; } ;
typedef TYPE_1__ WAVEFORMATEX ;
struct TYPE_8__ {scalar_t__ nChannels; scalar_t__ rate; scalar_t__ nBits; } ;
typedef TYPE_2__ Format ;
typedef int DWORD ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;



__attribute__((used)) static DWORD FUNC_1(const WAVEFORMATEX* VAR_2)
{
    int VAR_3, VAR_4;
    const Format* VAR_5;

    switch (VAR_2->wFormatTag)
    {
    case 128:
 VAR_4 = FUNC_0(VAR_1);
 VAR_5 = VAR_1;
 break;
    case 129:
 VAR_4 = FUNC_0(VAR_0);
 VAR_5 = VAR_0;
 break;
    default:
 return 0xFFFFFFFF;
    }

    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
    {
 if (VAR_2->nChannels == VAR_5[VAR_3].nChannels &&
     VAR_2->nSamplesPerSec == VAR_5[VAR_3].rate &&
     VAR_2->wBitsPerSample == VAR_5[VAR_3].nBits)
     return VAR_3;
    }

    switch (VAR_2->wFormatTag)
    {
    case 128:
 if(3 > VAR_2->nChannels &&
    VAR_2->nChannels > 0 &&
    VAR_2->nAvgBytesPerSec == 2 * VAR_2->nSamplesPerSec * VAR_2->nChannels &&
    VAR_2->nBlockAlign == 2 * VAR_2->nChannels &&
    VAR_2->wBitsPerSample == 16)
    return VAR_4;
 break;
    case 129:
 if(3 > VAR_2->nChannels &&
    VAR_2->nChannels > 0 &&
    VAR_2->wBitsPerSample == 4 &&
    VAR_2->cbSize == 32)
    return VAR_4;
 break;
    }

    return 0xFFFFFFFF;
}
