
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nSamplesPerSec; int wBitsPerSample; int nChannels; int wFormatTag; } ;
typedef TYPE_1__ WAVEFORMATEX ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int,int,int,char*) ;

const char * FUNC_2(const WAVEFORMATEX* VAR_0)
{
    static char VAR_1[64];

    FUNC_1(VAR_1, "%5dx%2dx%d %s",
 VAR_0->nSamplesPerSec, VAR_0->wBitsPerSample, VAR_0->nChannels,
        FUNC_0(VAR_0->wFormatTag));

    return VAR_1;
}
