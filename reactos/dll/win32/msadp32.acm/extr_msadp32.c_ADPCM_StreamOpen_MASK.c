
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ wFormatTag; scalar_t__ nSamplesPerSec; unsigned int nChannels; unsigned int nBlockAlign; int wBitsPerSample; } ;
struct TYPE_12__ {int convert; } ;
struct TYPE_11__ {unsigned int wSamplesPerBlock; } ;
struct TYPE_10__ {int fdwOpen; long dwDriver; TYPE_9__* pwfxSrc; TYPE_9__* pwfxDst; } ;
typedef TYPE_1__* PACMDRVSTREAMINSTANCE ;
typedef int LRESULT ;
typedef TYPE_2__ IMAADPCMWAVEFORMAT ;
typedef long DWORD_PTR ;
typedef TYPE_3__ AcmAdpcmData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 TYPE_3__* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static LRESULT FUNC_7(PACMDRVSTREAMINSTANCE VAR_12)
{
    AcmAdpcmData* VAR_13;

    FUNC_6(!(VAR_12->fdwOpen & VAR_1));

    if (FUNC_0(VAR_12->pwfxSrc) == 0xFFFFFFFF ||
 FUNC_0(VAR_12->pwfxDst) == 0xFFFFFFFF)
 return VAR_0;

    VAR_13 = FUNC_4(FUNC_3(), 0, sizeof(AcmAdpcmData));
    if (VAR_13 == 0) return VAR_3;

    VAR_12->dwDriver = (DWORD_PTR)VAR_13;

    if (VAR_12->pwfxSrc->wFormatTag == VAR_6 &&
 VAR_12->pwfxDst->wFormatTag == VAR_6)
    {
 goto theEnd;
    }
    else if (VAR_12->pwfxSrc->wFormatTag == VAR_5 &&
             VAR_12->pwfxDst->wFormatTag == VAR_6)
    {

 if (VAR_12->pwfxSrc->nSamplesPerSec != VAR_12->pwfxDst->nSamplesPerSec ||
     VAR_12->pwfxSrc->nChannels != VAR_12->pwfxDst->nChannels)
     goto theEnd;
 if (VAR_12->pwfxDst->nChannels == 2)
     VAR_13->convert = VAR_10;
 else if (VAR_12->pwfxDst->nChannels == 1)
     VAR_13->convert = VAR_8;
    }
    else if (VAR_12->pwfxSrc->wFormatTag == VAR_6 &&
             VAR_12->pwfxDst->wFormatTag == VAR_5)
    {
 if (VAR_12->pwfxSrc->nSamplesPerSec != VAR_12->pwfxDst->nSamplesPerSec ||
     VAR_12->pwfxSrc->nChannels != VAR_12->pwfxDst->nChannels ||
            VAR_12->pwfxSrc->wBitsPerSample != 16)
     goto theEnd;
        FUNC_2("We don't support encoding yet\n");
        goto theEnd;
    }
    else goto theEnd;
    FUNC_1(VAR_12, VAR_13);

    return VAR_2;

 theEnd:
    FUNC_5(FUNC_3(), 0, VAR_13);
    VAR_12->dwDriver = 0L;
    return VAR_4;
}
