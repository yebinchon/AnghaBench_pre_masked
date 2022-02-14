
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_5__ {scalar_t__ wFormatTag; int nSamplesPerSec; int nBlockAlign; int nChannels; int cbSize; int nAvgBytesPerSec; } ;
typedef TYPE_1__ WAVEFORMATEX ;
struct TYPE_6__ {int wSamplesPerBlock; TYPE_1__ wfx; } ;
typedef TYPE_2__ IMAADPCMWAVEFORMAT ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2(IMAADPCMWAVEFORMAT* VAR_1 )
{
    WAVEFORMATEX* VAR_2 = &VAR_1->wfx;




    if (VAR_2->wFormatTag != VAR_0) {FUNC_1("wrong FT\n"); return;}
    if (FUNC_0(VAR_2) == 0xFFFFFFFF) {FUNC_1("wrong fmt\n"); return;}

    switch (VAR_2->nSamplesPerSec)
    {
    case 8000: VAR_2->nBlockAlign = 256 * VAR_2->nChannels; break;
    case 11025: VAR_2->nBlockAlign = 256 * VAR_2->nChannels; break;
    case 22050: VAR_2->nBlockAlign = 512 * VAR_2->nChannels; break;
    case 44100: VAR_2->nBlockAlign = 1024 * VAR_2->nChannels; break;
    default: break;
    }
    VAR_2->cbSize = sizeof(WORD);

    VAR_1->wSamplesPerBlock = (VAR_2->nBlockAlign - (4 * VAR_2->nChannels)) * (2 / VAR_2->nChannels) + 1;
    VAR_2->nAvgBytesPerSec = (VAR_2->nSamplesPerSec * VAR_2->nBlockAlign) / VAR_1->wSamplesPerBlock;
}
