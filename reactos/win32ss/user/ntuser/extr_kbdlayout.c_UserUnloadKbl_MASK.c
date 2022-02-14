
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cLockObj; int h; } ;
struct TYPE_6__ {TYPE_1__ head; int spkf; struct TYPE_6__* pklPrev; struct TYPE_6__* pklNext; int dwKL_Flags; } ;
typedef TYPE_2__* PKL ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* VAR_4 ;

BOOL
FUNC_2(PKL VAR_5)
{


    if (VAR_5 == VAR_4)
    {
        if (VAR_5->pklNext == VAR_5->pklPrev)
        {

            return VAR_0;
        }


        VAR_4 = VAR_5->pklNext;
    }

    if (VAR_5->head.cLockObj > 1)
    {

        VAR_5->dwKL_Flags |= VAR_1;
        return VAR_0;
    }


    VAR_5->pklPrev->pklNext = VAR_5->pklNext;
    VAR_5->pklNext->pklPrev = VAR_5->pklPrev;
    FUNC_0(VAR_5->spkf);
    FUNC_1(VAR_5->head.h, VAR_3);
    return VAR_2;
}
