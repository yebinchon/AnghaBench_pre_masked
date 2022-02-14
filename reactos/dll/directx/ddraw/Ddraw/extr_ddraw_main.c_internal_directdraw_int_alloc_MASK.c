
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* lpLink; int lpLcl; } ;
typedef TYPE_1__* LPDDRAWI_DIRECTDRAW_INT ;
typedef int DDRAWI_DIRECTDRAW_INT ;


 int FUNC_0 (TYPE_1__*,int) ;

LPDDRAWI_DIRECTDRAW_INT
FUNC_1(LPDDRAWI_DIRECTDRAW_INT VAR_0)
{
    LPDDRAWI_DIRECTDRAW_INT VAR_1;
    FUNC_0(VAR_1, sizeof(DDRAWI_DIRECTDRAW_INT));
    if (VAR_1)
    {
        VAR_1->lpLcl = VAR_0->lpLcl;
        VAR_1->lpLink = VAR_0;
    }

    return VAR_1;
}
