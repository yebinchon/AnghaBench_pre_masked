
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_5__ {scalar_t__ wFormatTag; int nSamplesPerSec; int nBlockAlign; int nChannels; int cbSize; int nAvgBytesPerSec; } ;
typedef TYPE_1__ WAVEFORMATEX ;
struct TYPE_6__ {int wSamplesPerBlock; int wNumCoef; int aCoef; TYPE_1__ wfx; } ;
typedef TYPE_2__ ADPCMWAVEFORMAT ;
typedef int ADPCMCOEFSET ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(ADPCMWAVEFORMAT* VAR_2)
{
    register WAVEFORMATEX* VAR_3 = &VAR_2->wfx;




    if (VAR_3->wFormatTag != VAR_1) {FUNC_1("wrong FT\n"); return;}
    if (FUNC_0(VAR_3) == 0xFFFFFFFF) {FUNC_1("wrong fmt\n"); return;}

    switch (VAR_3->nSamplesPerSec)
    {
    case 8000: VAR_3->nBlockAlign = 256 * VAR_3->nChannels; break;
    case 11025: VAR_3->nBlockAlign = 256 * VAR_3->nChannels; break;
    case 22050: VAR_3->nBlockAlign = 512 * VAR_3->nChannels; break;
    case 44100: VAR_3->nBlockAlign = 1024 * VAR_3->nChannels; break;
    default: break;
    }
    VAR_3->cbSize = 2 * sizeof(WORD) + 7 * sizeof(ADPCMCOEFSET);


    VAR_2->wSamplesPerBlock = VAR_3->nBlockAlign * 2 / VAR_3->nChannels - 12;
    VAR_3->nAvgBytesPerSec = (VAR_3->nSamplesPerSec * VAR_3->nBlockAlign) / VAR_2->wSamplesPerBlock;
    VAR_2->wNumCoef = 7;
    FUNC_2(VAR_2->aCoef, VAR_0, 7 * sizeof(ADPCMCOEFSET));
}
