
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ wFormatTag; scalar_t__ nSamplesPerSec; unsigned int nChannels; int wBitsPerSample; unsigned int nBlockAlign; } ;
struct TYPE_12__ {void* convert; } ;
struct TYPE_11__ {unsigned int wSamplesPerBlock; } ;
struct TYPE_10__ {int fdwOpen; long dwDriver; TYPE_9__* pwfxSrc; TYPE_9__* pwfxDst; } ;
typedef TYPE_1__* PACMDRVSTREAMINSTANCE ;
typedef int LRESULT ;
typedef TYPE_2__* LPIMAADPCMWAVEFORMAT ;
typedef long DWORD_PTR ;
typedef TYPE_3__ AcmAdpcmData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_2 () ;
 TYPE_3__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,unsigned int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int) ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;

__attribute__((used)) static LRESULT FUNC_7(PACMDRVSTREAMINSTANCE VAR_11)
{
    AcmAdpcmData* VAR_12;
    unsigned VAR_13;

    FUNC_6(!(VAR_11->fdwOpen & VAR_1));

    if (FUNC_0(VAR_11->pwfxSrc) == 0xFFFFFFFF ||
 FUNC_0(VAR_11->pwfxDst) == 0xFFFFFFFF)
 return VAR_0;

    VAR_12 = FUNC_3(FUNC_2(), 0, sizeof(AcmAdpcmData));
    if (VAR_12 == 0) return VAR_3;

    VAR_11->dwDriver = (DWORD_PTR)VAR_12;

    if (VAR_11->pwfxSrc->wFormatTag == VAR_6 &&
 VAR_11->pwfxDst->wFormatTag == VAR_6)
    {
 goto theEnd;
    }
    else if (VAR_11->pwfxSrc->wFormatTag == VAR_5 &&
             VAR_11->pwfxDst->wFormatTag == VAR_6)
    {




        if (VAR_11->pwfxSrc->nSamplesPerSec != VAR_11->pwfxDst->nSamplesPerSec ||
            VAR_11->pwfxSrc->nChannels != VAR_11->pwfxDst->nChannels ||
            (VAR_11->pwfxDst->wBitsPerSample != 16 && VAR_11->pwfxDst->wBitsPerSample != 8))
            goto theEnd;

        VAR_13 = ((LPIMAADPCMWAVEFORMAT)VAR_11->pwfxSrc)->wSamplesPerBlock;
        FUNC_5("spb=%u\n", VAR_13);





        if (((VAR_13 - 1) & 3) != 0) goto theEnd;
        if ((((VAR_13 - 1) / 2) + 4) * VAR_11->pwfxSrc->nChannels < VAR_11->pwfxSrc->nBlockAlign)
            goto theEnd;


        if (VAR_11->pwfxDst->wBitsPerSample == 16 && VAR_11->pwfxDst->nChannels == 2)
            VAR_12->convert = VAR_10;
        if (VAR_11->pwfxDst->wBitsPerSample == 16 && VAR_11->pwfxDst->nChannels == 1)
            VAR_12->convert = VAR_8;
        if (VAR_11->pwfxDst->wBitsPerSample == 8 && VAR_11->pwfxDst->nChannels == 1)
            VAR_12->convert = VAR_8;

        if (VAR_11->pwfxDst->wBitsPerSample == 8 && VAR_11->pwfxDst->nChannels == 2)
            goto theEnd;
    }
    else if (VAR_11->pwfxSrc->wFormatTag == VAR_6 &&
             VAR_11->pwfxDst->wFormatTag == VAR_5)
    {
 if (VAR_11->pwfxSrc->nSamplesPerSec != VAR_11->pwfxDst->nSamplesPerSec ||
     VAR_11->pwfxSrc->nChannels != VAR_11->pwfxDst->nChannels ||
            VAR_11->pwfxSrc->wBitsPerSample != 16)
     goto theEnd;

        VAR_13 = ((LPIMAADPCMWAVEFORMAT)VAR_11->pwfxDst)->wSamplesPerBlock;
        FUNC_5("spb=%u\n", VAR_13);





        if (((VAR_13 - 1) & 3) != 0) goto theEnd;
        if ((((VAR_13 - 1) / 2) + 4) * VAR_11->pwfxDst->nChannels < VAR_11->pwfxDst->nBlockAlign)
            goto theEnd;


 if (VAR_11->pwfxSrc->wBitsPerSample == 16 && VAR_11->pwfxSrc->nChannels == 2)
     VAR_12->convert = VAR_9;
 if (VAR_11->pwfxSrc->wBitsPerSample == 16 && VAR_11->pwfxSrc->nChannels == 1)
     VAR_12->convert = VAR_7;
    }
    else goto theEnd;
    FUNC_1(VAR_11, VAR_12);

    return VAR_2;

 theEnd:
    FUNC_4(FUNC_2(), 0, VAR_12);
    VAR_11->dwDriver = 0L;
    return VAR_4;
}
