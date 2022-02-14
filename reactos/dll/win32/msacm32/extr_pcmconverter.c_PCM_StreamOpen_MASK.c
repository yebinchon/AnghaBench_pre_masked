
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int cvtKeepRate; int cvtChangeRate; } ;
struct TYPE_14__ {TYPE_1__ cvt; } ;
struct TYPE_13__ {int fdwOpen; scalar_t__ fdwDriver; scalar_t__ dwDriver; TYPE_3__* pwfxDst; TYPE_2__* pwfxSrc; } ;
struct TYPE_12__ {int wBitsPerSample; int nBlockAlign; int nChannels; scalar_t__ nSamplesPerSec; } ;
struct TYPE_11__ {int wBitsPerSample; int nBlockAlign; int nChannels; scalar_t__ nSamplesPerSec; } ;
typedef TYPE_4__* PACMDRVSTREAMINSTANCE ;
typedef int LRESULT ;
typedef scalar_t__ DWORD_PTR ;
typedef scalar_t__ DWORD ;
typedef TYPE_5__ AcmPcmData ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 TYPE_5__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (char*,TYPE_4__*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static LRESULT FUNC_6(PACMDRVSTREAMINSTANCE VAR_7)
{
    AcmPcmData* VAR_8;
    int VAR_9;
    DWORD VAR_10;

    FUNC_4("(%p)\n", VAR_7);

    FUNC_5(!(VAR_7->fdwOpen & VAR_0));

    switch(VAR_7->pwfxSrc->wBitsPerSample){
    case 8:
        VAR_9 = 0;
        break;
    case 16:
        VAR_9 = 12;
        break;
    case 24:
        if (VAR_7->pwfxSrc->nBlockAlign != 3 * VAR_7->pwfxSrc->nChannels) {
            FUNC_0("Source: 24-bit samples must be packed\n");
            return VAR_3;
        }
        VAR_9 = 24;
        break;
    default:
        FUNC_0("Unsupported source bit depth: %u\n", VAR_7->pwfxSrc->wBitsPerSample);
        return VAR_3;
    }

    switch(VAR_7->pwfxDst->wBitsPerSample){
    case 8:
        break;
    case 16:
        VAR_9 += 4;
        break;
    case 24:
        if (VAR_7->pwfxDst->nBlockAlign != 3 * VAR_7->pwfxDst->nChannels) {
            FUNC_0("Destination: 24-bit samples must be packed\n");
            return VAR_3;
        }
        VAR_9 += 8;
        break;
    default:
        FUNC_0("Unsupported destination bit depth: %u\n", VAR_7->pwfxDst->wBitsPerSample);
        return VAR_3;
    }

    if (VAR_7->pwfxSrc->nChannels == 1) VAR_9 += 2;

    if (VAR_7->pwfxDst->nChannels == 1) VAR_9 += 1;

    VAR_8 = FUNC_2(FUNC_1(), 0, sizeof(AcmPcmData));
    if (!VAR_8)
        return VAR_2;

    if (VAR_7->pwfxSrc->nSamplesPerSec == VAR_7->pwfxDst->nSamplesPerSec) {
        VAR_10 = 0;
        VAR_8->cvt.cvtKeepRate = VAR_5[VAR_9];
    } else {
        VAR_10 = VAR_6;
        VAR_8->cvt.cvtChangeRate = VAR_4[VAR_9];
    }

    if(!VAR_8->cvt.cvtChangeRate && !VAR_8->cvt.cvtKeepRate){
        FUNC_0("Unimplemented conversion from %u -> %u bps\n",
            VAR_7->pwfxSrc->wBitsPerSample,
            VAR_7->pwfxDst->wBitsPerSample);
        FUNC_3(FUNC_1(), 0, VAR_8);
        return VAR_3;
    }

    VAR_7->dwDriver = (DWORD_PTR)VAR_8;
    VAR_7->fdwDriver = VAR_10;

    return VAR_1;
}
