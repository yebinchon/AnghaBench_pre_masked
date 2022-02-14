
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* prev; } ;
typedef int HPDF_MMgr ;
typedef TYPE_1__* HPDF_GState ;


 int FUNC_0 (int ,TYPE_1__*) ;

HPDF_GState
FUNC_1 (HPDF_MMgr VAR_0,
                   HPDF_GState VAR_1)
{
    HPDF_GState VAR_2 = ((void*)0);

    if (VAR_1) {
      VAR_2 = VAR_1->prev;
      FUNC_0 (VAR_0, VAR_1);
    }

    return VAR_2;
}
