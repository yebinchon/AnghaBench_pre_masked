
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* pwfxDst; TYPE_1__* pwfxSrc; } ;
struct TYPE_9__ {int fdwSize; int cbSrcLength; int cbDstLength; } ;
struct TYPE_8__ {int wFormatTag; } ;
struct TYPE_7__ {int wFormatTag; } ;
typedef TYPE_3__* PACMDRVSTREAMSIZE ;
typedef int LRESULT ;
typedef TYPE_4__ ACMDRVSTREAMINSTANCE ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static LRESULT FUNC_1(const ACMDRVSTREAMINSTANCE *VAR_5, PACMDRVSTREAMSIZE VAR_6)
{
    switch (VAR_6->fdwSize)
    {
    case 129:

 if (VAR_5->pwfxSrc->wFormatTag == VAR_4 &&
     (VAR_5->pwfxDst->wFormatTag == VAR_2 ||
             VAR_5->pwfxDst->wFormatTag == VAR_3))
        {
     VAR_6->cbSrcLength = VAR_6->cbDstLength * 2;
 }
        else if ((VAR_5->pwfxSrc->wFormatTag == VAR_2 ||
                  VAR_5->pwfxSrc->wFormatTag == VAR_3) &&
                 VAR_5->pwfxDst->wFormatTag == VAR_4)
        {
     VAR_6->cbSrcLength = VAR_6->cbDstLength / 2;
 }
        else if ((VAR_5->pwfxSrc->wFormatTag == VAR_2 ||
                  VAR_5->pwfxSrc->wFormatTag == VAR_3) &&
                 (VAR_5->pwfxDst->wFormatTag == VAR_2 ||
                  VAR_5->pwfxDst->wFormatTag == VAR_3))
        {
     VAR_6->cbSrcLength = VAR_6->cbDstLength;
        }
        else
        {
     return VAR_1;
 }
 break;
    case 128:

 if (VAR_5->pwfxSrc->wFormatTag == VAR_4 &&
     (VAR_5->pwfxDst->wFormatTag == VAR_2 ||
             VAR_5->pwfxDst->wFormatTag == VAR_3))
        {
     VAR_6->cbDstLength = VAR_6->cbSrcLength / 2;
 }
        else if ((VAR_5->pwfxSrc->wFormatTag == VAR_2 ||
                  VAR_5->pwfxSrc->wFormatTag == VAR_3) &&
                 VAR_5->pwfxDst->wFormatTag == VAR_4)
        {
     VAR_6->cbDstLength = VAR_6->cbSrcLength * 2;
 }
        else if ((VAR_5->pwfxSrc->wFormatTag == VAR_2 ||
                  VAR_5->pwfxSrc->wFormatTag == VAR_3) &&
                 (VAR_5->pwfxDst->wFormatTag == VAR_2 ||
                  VAR_5->pwfxDst->wFormatTag == VAR_3))
        {
     VAR_6->cbDstLength = VAR_6->cbSrcLength;
        }
        else
        {
     return VAR_1;
 }
 break;
    default:
 FUNC_0("Unsupported query %08x\n", VAR_6->fdwSize);
 return VAR_1;
    }
    return VAR_0;
}
