
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* fnICClose ) (scalar_t__) ;} ;
struct TYPE_5__ {int transparentColor; scalar_t__ currFrame; scalar_t__ nLoop; scalar_t__ nToFrame; scalar_t__ nFromFrame; int ash; int mah; scalar_t__ hbmPrevFrame; int * outdata; int * indata; int * outbih; int * inbih; scalar_t__ hic; int * lpIndex; scalar_t__ hRes; scalar_t__ hMMio; } ;
typedef TYPE_1__ ANIMATE_INFO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_2__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(ANIMATE_INFO *VAR_2)
{
    if (VAR_2->hMMio)
    {
        FUNC_0(VAR_2);
        FUNC_5(VAR_2->hMMio, 0);
        if (VAR_2->hRes)
        {
            FUNC_2(VAR_2->hRes);
            VAR_2->hRes = 0;
        }
        FUNC_3 (VAR_2->lpIndex);
        VAR_2->lpIndex = ((void*)0);
        if (VAR_2->hic)
        {
            VAR_1.fnICClose(VAR_2->hic);
            VAR_2->hic = 0;
        }
        FUNC_3 (VAR_2->inbih);
        VAR_2->inbih = ((void*)0);
        FUNC_3 (VAR_2->outbih);
        VAR_2->outbih = ((void*)0);
        FUNC_3 (VAR_2->indata);
        VAR_2->indata = ((void*)0);
        FUNC_3 (VAR_2->outdata);
        VAR_2->outdata = ((void*)0);
        if (VAR_2->hbmPrevFrame)
        {
            FUNC_1(VAR_2->hbmPrevFrame);
            VAR_2->hbmPrevFrame = 0;
        }

        FUNC_4(&VAR_2->mah, 0, sizeof(VAR_2->mah));
        FUNC_4(&VAR_2->ash, 0, sizeof(VAR_2->ash));
        VAR_2->nFromFrame = VAR_2->nToFrame = VAR_2->nLoop = VAR_2->currFrame = 0;
    }
    VAR_2->transparentColor = VAR_0;
}
