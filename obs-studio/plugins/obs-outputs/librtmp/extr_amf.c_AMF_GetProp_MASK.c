
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int o_num; TYPE_1__* o_props; } ;
struct TYPE_5__ {int p_name; } ;
typedef int AVal ;
typedef TYPE_1__ AMFObjectProperty ;
typedef TYPE_2__ AMFObject ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int const*) ;

AMFObjectProperty *
FUNC_1(AMFObject *VAR_1, const AVal *VAR_2, int VAR_3)
{
    if (VAR_3 >= 0)
    {
        if (VAR_3 < VAR_1->o_num)
            return &VAR_1->o_props[VAR_3];
    }
    else
    {
        int VAR_4;
        for (VAR_4 = 0; VAR_4 < VAR_1->o_num; VAR_4++)
        {
            if (FUNC_0(&VAR_1->o_props[VAR_4].p_name, VAR_2))
                return &VAR_1->o_props[VAR_4];
        }
    }

    return (AMFObjectProperty *)&VAR_0;
}
