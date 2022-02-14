
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nChannels; scalar_t__ rate; scalar_t__ nBits; } ;
struct TYPE_6__ {scalar_t__ nChannels; scalar_t__ nSamplesPerSec; scalar_t__ wBitsPerSample; } ;
typedef TYPE_1__* LPWAVEFORMATEX ;
typedef unsigned int DWORD ;


 unsigned int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* VAR_0 ;
 int FUNC_1 (char*,TYPE_1__*) ;

__attribute__((used)) static DWORD FUNC_2(LPWAVEFORMATEX VAR_1)
{
    unsigned int VAR_2;
    FUNC_1("(%p)\n", VAR_1);

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
 if (VAR_1->nChannels == VAR_0[VAR_2].nChannels &&
     VAR_1->nSamplesPerSec == VAR_0[VAR_2].rate &&
     VAR_1->wBitsPerSample == VAR_0[VAR_2].nBits)
     return VAR_2;
    }
    return 0xFFFFFFFF;
}
