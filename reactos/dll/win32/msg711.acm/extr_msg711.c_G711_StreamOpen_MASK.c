
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ wFormatTag; scalar_t__ nSamplesPerSec; scalar_t__ nChannels; int wBitsPerSample; } ;
struct TYPE_10__ {int convert; } ;
struct TYPE_9__ {int fdwOpen; long dwDriver; TYPE_8__* pwfxDst; TYPE_8__* pwfxSrc; } ;
typedef TYPE_1__* PACMDRVSTREAMINSTANCE ;
typedef int LRESULT ;
typedef long DWORD_PTR ;
typedef TYPE_2__ AcmG711Data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 () ;
 TYPE_2__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static LRESULT FUNC_6(PACMDRVSTREAMINSTANCE VAR_14)
{
    AcmG711Data* VAR_15;

    FUNC_5(!(VAR_14->fdwOpen & VAR_1));

    if (FUNC_0(VAR_14->pwfxSrc) == 0xFFFFFFFF ||
 FUNC_0(VAR_14->pwfxDst) == 0xFFFFFFFF)
 return VAR_0;

    VAR_15 = FUNC_3(FUNC_2(), 0, sizeof(AcmG711Data));
    if (VAR_15 == 0) return VAR_3;

    VAR_14->dwDriver = (DWORD_PTR)VAR_15;

    if (VAR_14->pwfxSrc->wFormatTag == VAR_7 &&
 VAR_14->pwfxDst->wFormatTag == VAR_7)
    {
 goto theEnd;
    }
    else if (VAR_14->pwfxSrc->wFormatTag == VAR_5 &&
             VAR_14->pwfxDst->wFormatTag == VAR_7)
    {



 if (VAR_14->pwfxSrc->nSamplesPerSec != VAR_14->pwfxDst->nSamplesPerSec ||
     VAR_14->pwfxSrc->nChannels != VAR_14->pwfxDst->nChannels ||
            VAR_14->pwfxDst->wBitsPerSample != 16)
     goto theEnd;


 if (VAR_14->pwfxDst->wBitsPerSample == 16)
     VAR_15->convert = VAR_10;
    }
    else if (VAR_14->pwfxSrc->wFormatTag == VAR_7 &&
             VAR_14->pwfxDst->wFormatTag == VAR_5)
    {
 if (VAR_14->pwfxSrc->nSamplesPerSec != VAR_14->pwfxDst->nSamplesPerSec ||
     VAR_14->pwfxSrc->nChannels != VAR_14->pwfxDst->nChannels ||
            VAR_14->pwfxSrc->wBitsPerSample != 16)
     goto theEnd;


 if (VAR_14->pwfxSrc->wBitsPerSample == 16)
     VAR_15->convert = VAR_8;
    }
    else if (VAR_14->pwfxSrc->wFormatTag == VAR_6 &&
             VAR_14->pwfxDst->wFormatTag == VAR_7)
    {



 if (VAR_14->pwfxSrc->nSamplesPerSec != VAR_14->pwfxDst->nSamplesPerSec ||
     VAR_14->pwfxSrc->nChannels != VAR_14->pwfxDst->nChannels ||
            VAR_14->pwfxDst->wBitsPerSample != 16)
     goto theEnd;


 if (VAR_14->pwfxDst->wBitsPerSample == 16)
     VAR_15->convert = VAR_12;
    }
    else if (VAR_14->pwfxSrc->wFormatTag == VAR_7 &&
             VAR_14->pwfxDst->wFormatTag == VAR_6)
    {
 if (VAR_14->pwfxSrc->nSamplesPerSec != VAR_14->pwfxDst->nSamplesPerSec ||
     VAR_14->pwfxSrc->nChannels != VAR_14->pwfxDst->nChannels ||
            VAR_14->pwfxSrc->wBitsPerSample != 16)
     goto theEnd;


 if (VAR_14->pwfxSrc->wBitsPerSample == 16)
     VAR_15->convert = VAR_9;
    }
    else if (VAR_14->pwfxSrc->wFormatTag == VAR_6 &&
             VAR_14->pwfxDst->wFormatTag == VAR_5)
    {
 if (VAR_14->pwfxSrc->nSamplesPerSec != VAR_14->pwfxDst->nSamplesPerSec ||
     VAR_14->pwfxSrc->nChannels != VAR_14->pwfxDst->nChannels)
     goto theEnd;


        VAR_15->convert = VAR_13;
    }
    else if (VAR_14->pwfxSrc->wFormatTag == VAR_5 &&
             VAR_14->pwfxDst->wFormatTag == VAR_6)
    {
 if (VAR_14->pwfxSrc->nSamplesPerSec != VAR_14->pwfxDst->nSamplesPerSec ||
     VAR_14->pwfxSrc->nChannels != VAR_14->pwfxDst->nChannels)
     goto theEnd;


        VAR_15->convert = VAR_11;
    }
    else goto theEnd;

    FUNC_1(VAR_14, VAR_15);

    return VAR_2;

 theEnd:
    FUNC_4(FUNC_2(), 0, VAR_15);
    VAR_14->dwDriver = 0L;
    return VAR_4;
}
