
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ props; TYPE_1__* desc; int ** arrays; } ;
typedef TYPE_2__ vbdisp_t ;
struct TYPE_4__ {unsigned int array_cnt; unsigned int prop_cnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(vbdisp_t *VAR_0)
{
    unsigned VAR_1;

    if(!VAR_0->desc)
        return;

    for(VAR_1=0; VAR_1 < VAR_0->desc->array_cnt; VAR_1++) {
        if(VAR_0->arrays[VAR_1]) {
            FUNC_0(VAR_0->arrays[VAR_1]);
            VAR_0->arrays[VAR_1] = ((void*)0);
        }
    }

    for(VAR_1=0; VAR_1 < VAR_0->desc->prop_cnt; VAR_1++)
        FUNC_1(VAR_0->props+VAR_1);
}
