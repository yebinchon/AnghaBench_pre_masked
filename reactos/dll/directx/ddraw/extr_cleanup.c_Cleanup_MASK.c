
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {int * lpModeInfo; int * lpdwFourCC; int * lpDDCBtmp; } ;
struct TYPE_5__ {int * lpLcl; } ;
typedef TYPE_1__* LPDDRAWI_DIRECTDRAW_INT ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 TYPE_2__ VAR_0 ;

VOID
FUNC_3(LPDDRAWI_DIRECTDRAW_INT VAR_1)
{
    FUNC_0();

    if (VAR_0.lpDDCBtmp != ((void*)0))
    {
        FUNC_2(VAR_0.lpDDCBtmp);
    }

    if (VAR_0.lpdwFourCC != ((void*)0))
    {
        FUNC_2(VAR_0.lpdwFourCC);
    }

    if (VAR_0.lpModeInfo != ((void*)0))
    {
        FUNC_2(VAR_0.lpModeInfo);
    }

    FUNC_1(&VAR_0);
    if (VAR_1->lpLcl != ((void*)0))
    {
        FUNC_2(VAR_1->lpLcl);
    }





}
