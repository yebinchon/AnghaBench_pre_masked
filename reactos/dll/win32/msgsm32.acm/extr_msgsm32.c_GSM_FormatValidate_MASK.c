
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_4__ {int nChannels; int wFormatTag; int wBitsPerSample; int nBlockAlign; int nAvgBytesPerSec; int nSamplesPerSec; int cbSize; } ;
typedef TYPE_1__ WAVEFORMATEX ;
struct TYPE_5__ {int wSamplesPerBlock; } ;
typedef TYPE_2__ GSM610WAVEFORMAT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;



__attribute__((used)) static BOOL FUNC_1(const WAVEFORMATEX *VAR_2)
{
    if (VAR_2->nChannels != 1)
        return VAR_0;

    switch (VAR_2->wFormatTag)
    {
    case 128:
        if (VAR_2->wBitsPerSample != 16)
        {
            FUNC_0("PCM wBitsPerSample %u\n", VAR_2->wBitsPerSample);
            return VAR_0;
        }
        if (VAR_2->nBlockAlign != 2)
        {
            FUNC_0("PCM nBlockAlign %u\n", VAR_2->nBlockAlign);
            return VAR_0;
        }
        if (VAR_2->nAvgBytesPerSec != VAR_2->nBlockAlign * VAR_2->nSamplesPerSec)
        {
            FUNC_0("PCM nAvgBytesPerSec %u/%u\n",
                 VAR_2->nAvgBytesPerSec,
                 VAR_2->nBlockAlign * VAR_2->nSamplesPerSec);
            return VAR_0;
        }
        return VAR_1;
    case 129:
        if (VAR_2->cbSize < sizeof(WORD))
        {
            FUNC_0("GSM cbSize %u\n", VAR_2->cbSize);
            return VAR_0;
        }
        if (VAR_2->wBitsPerSample != 0)
        {
            FUNC_0("GSM wBitsPerSample %u\n", VAR_2->wBitsPerSample);
            return VAR_0;
        }
        if (VAR_2->nBlockAlign != 65)
        {
            FUNC_0("GSM nBlockAlign %u\n", VAR_2->nBlockAlign);
            return VAR_0;
        }
        if (((const GSM610WAVEFORMAT*)VAR_2)->wSamplesPerBlock != 320)
        {
            FUNC_0("GSM wSamplesPerBlock %u\n",
                 ((const GSM610WAVEFORMAT*)VAR_2)->wSamplesPerBlock);
            return VAR_0;
        }
        if (VAR_2->nAvgBytesPerSec != VAR_2->nSamplesPerSec * 65 / 320)
        {
            FUNC_0("GSM nAvgBytesPerSec %d / %d\n",
                 VAR_2->nAvgBytesPerSec, VAR_2->nSamplesPerSec * 65 / 320);
            return VAR_0;
        }
        return VAR_1;
    default:
        return VAR_0;
    }
    return VAR_0;
}
