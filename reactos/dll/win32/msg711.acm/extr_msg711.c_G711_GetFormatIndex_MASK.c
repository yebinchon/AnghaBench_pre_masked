
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int wFormatTag; scalar_t__ nChannels; scalar_t__ nSamplesPerSec; scalar_t__ wBitsPerSample; } ;
typedef TYPE_1__ WAVEFORMATEX ;
struct TYPE_9__ {scalar_t__ nChannels; scalar_t__ rate; scalar_t__ nBits; } ;
typedef TYPE_2__ Format ;
typedef int DWORD ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* VAR_2 ;




__attribute__((used)) static DWORD FUNC_1(const WAVEFORMATEX *VAR_3)
{
    int VAR_4, VAR_5;
    const Format* VAR_6;

    switch (VAR_3->wFormatTag)
    {
    case 128:
 VAR_5 = FUNC_0(VAR_1);
 VAR_6 = VAR_1;
 break;
    case 130:
 VAR_5 = FUNC_0(VAR_0);
 VAR_6 = VAR_0;
 break;
    case 129:
 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = VAR_2;
 break;
    default:
 return 0xFFFFFFFF;
    }

    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
    {
 if (VAR_3->nChannels == VAR_6[VAR_4].nChannels &&
     VAR_3->nSamplesPerSec == VAR_6[VAR_4].rate &&
     VAR_3->wBitsPerSample == VAR_6[VAR_4].nBits)
     return VAR_4;
    }

    return 0xFFFFFFFF;
}
