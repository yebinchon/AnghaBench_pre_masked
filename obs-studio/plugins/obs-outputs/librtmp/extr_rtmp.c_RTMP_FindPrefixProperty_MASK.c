
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {int o_num; } ;
struct TYPE_14__ {TYPE_5__ p_object; } ;
struct TYPE_13__ {int av_val; int av_len; } ;
struct TYPE_16__ {scalar_t__ p_type; TYPE_2__ p_vu; TYPE_1__ p_name; } ;
struct TYPE_15__ {int av_len; int av_val; } ;
typedef TYPE_3__ AVal ;
typedef TYPE_4__ AMFObjectProperty ;
typedef TYPE_5__ AMFObject ;


 TYPE_4__* FUNC_0 (TYPE_5__*,int *,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*,int) ;

int
FUNC_3(AMFObject *VAR_3, const AVal *VAR_4,
                        AMFObjectProperty * VAR_5)
{
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_3->o_num; VAR_6++)
    {
        AMFObjectProperty *VAR_7 = FUNC_0(VAR_3, ((void*)0), VAR_6);

        if (VAR_7->p_name.av_len > VAR_4->av_len &&
                !FUNC_1(VAR_7->p_name.av_val, VAR_4->av_val, VAR_4->av_len))
        {
            FUNC_2(VAR_5, VAR_7, sizeof(*VAR_7));
            return VAR_2;
        }

        if (VAR_7->p_type == VAR_0)
        {
            if (FUNC_3(&VAR_7->p_vu.p_object, VAR_4, VAR_5))
                return VAR_2;
        }
    }
    return VAR_1;
}
