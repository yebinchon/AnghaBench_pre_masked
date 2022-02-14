
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dwFlags; } ;
struct TYPE_7__ {int fraglen; int helfrags; int buflen; int writelead; TYPE_2__* pwfx; TYPE_1__ drvdesc; scalar_t__ hwbuf; } ;
struct TYPE_6__ {int nSamplesPerSec; int nBlockAlign; } ;
typedef TYPE_3__ DirectSoundDevice ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(DirectSoundDevice *VAR_1)
{
    FUNC_1("(%p)\n", VAR_1);

    VAR_1->fraglen = FUNC_0(VAR_1->pwfx->nSamplesPerSec, VAR_1->pwfx->nBlockAlign);
    VAR_1->helfrags = VAR_1->buflen / VAR_1->fraglen;
    FUNC_1("fraglen=%d helfrags=%d\n", VAR_1->fraglen, VAR_1->helfrags);

    if (VAR_1->hwbuf && VAR_1->drvdesc.dwFlags & VAR_0)
        VAR_1->writelead = 0;
    else

        VAR_1->writelead = (VAR_1->pwfx->nSamplesPerSec / 100) * VAR_1->pwfx->nBlockAlign;
}
