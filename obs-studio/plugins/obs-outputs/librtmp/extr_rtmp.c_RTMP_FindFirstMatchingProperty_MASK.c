
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int o_num; } ;
struct TYPE_10__ {TYPE_3__ p_object; } ;
struct TYPE_11__ {scalar_t__ p_type; TYPE_1__ p_vu; int p_name; } ;
typedef int AVal ;
typedef TYPE_2__ AMFObjectProperty ;
typedef TYPE_3__ AMFObject ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int *,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;

int
FUNC_3(AMFObject *VAR_4, const AVal *VAR_5,
                               AMFObjectProperty * VAR_6)
{
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_4->o_num; VAR_7++)
    {
        AMFObjectProperty *VAR_8 = FUNC_0(VAR_4, ((void*)0), VAR_7);

        if (FUNC_1(&VAR_8->p_name, VAR_5))
        {
            FUNC_2(VAR_6, VAR_8, sizeof(*VAR_8));
            return VAR_3;
        }

        if (VAR_8->p_type == VAR_1 || VAR_8->p_type == VAR_0)
        {
            if (FUNC_3(&VAR_8->p_vu.p_object, VAR_5, VAR_6))
                return VAR_3;
        }
    }
    return VAR_2;
}
