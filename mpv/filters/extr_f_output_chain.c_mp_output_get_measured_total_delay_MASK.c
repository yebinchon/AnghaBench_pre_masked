
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_user_filter {scalar_t__ last_in_pts; scalar_t__ last_out_pts; } ;
struct mp_output_chain {TYPE_1__* f; } ;
struct chain {int num_all_filters; struct mp_user_filter** all_filters; } ;
struct TYPE_2__ {struct chain* priv; } ;


 scalar_t__ VAR_0 ;

double FUNC_0(struct mp_output_chain *VAR_1)
{
    struct chain *VAR_2 = VAR_1->f->priv;

    double VAR_3 = 0;

    for (int VAR_4 = 0; VAR_4 < VAR_2->num_all_filters; VAR_4++) {
        struct mp_user_filter *VAR_5 = VAR_2->all_filters[VAR_4];

        if (VAR_5->last_in_pts != VAR_0 &&
            VAR_5->last_out_pts != VAR_0)
        {
            VAR_3 += VAR_5->last_in_pts - VAR_5->last_out_pts;
        }
    }

    return VAR_3;
}
