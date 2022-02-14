
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int o_num; int * o_props; } ;
typedef int AMFObjectProperty ;
typedef TYPE_1__ AMFObject ;


 int FUNC_0 (int *,int const*,int) ;
 int * FUNC_1 (int *,int) ;

void
FUNC_2(AMFObject *VAR_0, const AMFObjectProperty *VAR_1)
{
    if (!(VAR_0->o_num & 0x0f))
        VAR_0->o_props =
            FUNC_1(VAR_0->o_props, (VAR_0->o_num + 16) * sizeof(AMFObjectProperty));
    FUNC_0(&VAR_0->o_props[VAR_0->o_num++], VAR_1, sizeof(AMFObjectProperty));
}
