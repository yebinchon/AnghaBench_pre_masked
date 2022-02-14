
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* pwfxDst; TYPE_1__* pwfxSrc; } ;
struct TYPE_9__ {int fdwSize; int cbDstLength; int cbSrcLength; } ;
struct TYPE_8__ {int nAvgBytesPerSec; int nSamplesPerSec; int nBlockAlign; int wFormatTag; } ;
struct TYPE_7__ {int nBlockAlign; int nAvgBytesPerSec; int nSamplesPerSec; int wFormatTag; } ;
typedef TYPE_3__* PACMDRVSTREAMSIZE ;
typedef TYPE_4__* PACMDRVSTREAMINSTANCE ;
typedef int LRESULT ;
typedef int DWORD ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static LRESULT FUNC_1(PACMDRVSTREAMINSTANCE VAR_6, PACMDRVSTREAMSIZE VAR_7)
{
    DWORD VAR_8;

    switch (VAR_7->fdwSize)
    {
    case 129:

 if (VAR_6->pwfxSrc->wFormatTag == VAR_5 &&
            (VAR_6->pwfxDst->wFormatTag == VAR_4 ||
             VAR_6->pwfxDst->wFormatTag == VAR_3))
        {
            VAR_8 = (VAR_7->cbDstLength - 3000) / (DWORD)(VAR_6->pwfxDst->nAvgBytesPerSec * 1152 / VAR_6->pwfxDst->nSamplesPerSec + 0.5);
            if (VAR_8 == 0)
                return VAR_0;
            VAR_7->cbSrcLength = VAR_8 * 1152 * VAR_6->pwfxSrc->nBlockAlign;
 }
        else if ((VAR_6->pwfxSrc->wFormatTag == VAR_4 ||
                 VAR_6->pwfxSrc->wFormatTag == VAR_3) &&
                 VAR_6->pwfxDst->wFormatTag == VAR_5)
        {
            VAR_8 = VAR_7->cbDstLength / (VAR_6->pwfxDst->nBlockAlign * 1152);
            if (VAR_8 == 0)
                return VAR_0;
            VAR_7->cbSrcLength = VAR_8 * (DWORD)(VAR_6->pwfxSrc->nAvgBytesPerSec * 1152 / VAR_6->pwfxSrc->nSamplesPerSec);
 }
        else
        {
     return VAR_2;
 }
 break;
    case 128:

 if (VAR_6->pwfxSrc->wFormatTag == VAR_5 &&
            (VAR_6->pwfxDst->wFormatTag == VAR_4 ||
             VAR_6->pwfxDst->wFormatTag == VAR_3))
        {
            VAR_8 = VAR_7->cbSrcLength / (VAR_6->pwfxSrc->nBlockAlign * 1152);
            if (VAR_7->cbSrcLength % (DWORD)(VAR_6->pwfxSrc->nBlockAlign * 1152))

                VAR_8++;
            if (VAR_8 == 0)
                return VAR_0;
            VAR_7->cbDstLength = 3000 + VAR_8 * (DWORD)(VAR_6->pwfxDst->nAvgBytesPerSec * 1152 / VAR_6->pwfxDst->nSamplesPerSec + 0.5);
 }
        else if ((VAR_6->pwfxSrc->wFormatTag == VAR_4 ||
                 VAR_6->pwfxSrc->wFormatTag == VAR_3) &&
                 VAR_6->pwfxDst->wFormatTag == VAR_5)
        {
            VAR_8 = VAR_7->cbSrcLength / (DWORD)(VAR_6->pwfxSrc->nAvgBytesPerSec * 1152 / VAR_6->pwfxSrc->nSamplesPerSec);
            if (VAR_7->cbSrcLength % (DWORD)(VAR_6->pwfxSrc->nAvgBytesPerSec * 1152 / VAR_6->pwfxSrc->nSamplesPerSec))

                VAR_8++;
            if (VAR_8 == 0)
                return VAR_0;
            VAR_7->cbDstLength = VAR_8 * 1152 * VAR_6->pwfxDst->nBlockAlign;
 }
        else
        {
     return VAR_2;
 }
 break;
    default:
 FUNC_0("Unsupported query %08x\n", VAR_7->fdwSize);
 return VAR_2;
    }
    return VAR_1;
}
