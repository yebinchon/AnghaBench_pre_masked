
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_user_filter {int dummy; } ;
struct mp_filter {int ** pins; } ;
struct chain {int num_pre_filters; int num_user_filters; int num_post_filters; scalar_t__ num_all_filters; int * filters_out; int * filters_in; TYPE_1__** all_filters; struct mp_user_filter** post_filters; struct mp_user_filter** user_filters; struct mp_user_filter** pre_filters; } ;
struct TYPE_2__ {struct mp_filter* wrapper; } ;


 int FUNC_0 (struct chain*,TYPE_1__**,scalar_t__,struct mp_user_filter*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct chain *VAR_0)
{
    struct mp_user_filter **VAR_1[3] =
        {VAR_0->pre_filters, VAR_0->user_filters, VAR_0->post_filters};
    int VAR_2[3] =
        {VAR_0->num_pre_filters, VAR_0->num_user_filters, VAR_0->num_post_filters};
    VAR_0->num_all_filters = 0;
    for (int VAR_3 = 0; VAR_3 < 3; VAR_3++) {
        struct mp_user_filter **VAR_4 = VAR_1[VAR_3];
        int VAR_5 = VAR_2[VAR_3];
        for (int VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
            FUNC_0(VAR_0, VAR_0->all_filters, VAR_0->num_all_filters, VAR_4[VAR_6]);
    }

    FUNC_1(VAR_0->num_all_filters > 0);

    VAR_0->filters_in = ((void*)0);
    VAR_0->filters_out = ((void*)0);
    for (int VAR_7 = 0; VAR_7 < VAR_0->num_all_filters; VAR_7++) {
        struct mp_filter *VAR_8 = VAR_0->all_filters[VAR_7]->wrapper;
        if (VAR_7 == 0)
            VAR_0->filters_in = VAR_8->pins[0];
        if (VAR_0->filters_out)
            FUNC_2(VAR_8->pins[0], VAR_0->filters_out);
        VAR_0->filters_out = VAR_8->pins[1];
    }
}
