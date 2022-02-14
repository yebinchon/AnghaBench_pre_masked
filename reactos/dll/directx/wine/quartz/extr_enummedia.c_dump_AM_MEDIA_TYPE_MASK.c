
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int formattype; int subtype; int majortype; } ;
typedef TYPE_1__ AM_MEDIA_TYPE ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(const AM_MEDIA_TYPE * VAR_0)
{
    if (!VAR_0)
        return;
    FUNC_0("\t%s\n\t%s\n\t...\n\t%s\n", FUNC_1(&VAR_0->majortype), FUNC_1(&VAR_0->subtype), FUNC_1(&VAR_0->formattype));
}
