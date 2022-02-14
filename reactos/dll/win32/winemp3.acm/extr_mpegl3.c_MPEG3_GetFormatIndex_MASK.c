
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nChannels; scalar_t__ rate; scalar_t__ nBits; } ;
struct TYPE_6__ {int wFormatTag; scalar_t__ nChannels; scalar_t__ nSamplesPerSec; scalar_t__ wBitsPerSample; } ;
typedef TYPE_1__* LPWAVEFORMATEX ;
typedef TYPE_2__ Format ;
typedef int DWORD ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;




__attribute__((used)) static DWORD FUNC_0(LPWAVEFORMATEX VAR_4)
{
    int VAR_5, VAR_6;
    const Format *VAR_7;

    switch (VAR_4->wFormatTag)
    {
    case 128:
 VAR_6 = VAR_2;
 VAR_7 = VAR_3;
 break;
    case 130:
    case 129:
 VAR_6 = VAR_1;
 VAR_7 = VAR_0;
 break;
    default:
 return 0xFFFFFFFF;
    }

    for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
    {
 if (VAR_4->nChannels == VAR_7[VAR_5].nChannels &&
     VAR_4->nSamplesPerSec == VAR_7[VAR_5].rate &&
     (VAR_4->wBitsPerSample == VAR_7[VAR_5].nBits || !VAR_7[VAR_5].nBits))
     return VAR_5;
    }

    return 0xFFFFFFFF;
}
