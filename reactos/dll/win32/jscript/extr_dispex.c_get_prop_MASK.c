
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t prop_cnt; TYPE_2__* props; } ;
typedef TYPE_1__ jsdisp_t ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_2__ dispex_prop_t ;
typedef size_t DISPID ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline dispex_prop_t *FUNC_0(jsdisp_t *VAR_1, DISPID VAR_2)
{
    if(VAR_2 < 0 || VAR_2 >= VAR_1->prop_cnt || VAR_1->props[VAR_2].type == VAR_0)
        return ((void*)0);

    return VAR_1->props+VAR_2;
}
