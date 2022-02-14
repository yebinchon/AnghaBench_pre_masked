
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_output_chain {TYPE_1__* f; } ;
struct chain {int num_post_filters; int post_filters; int num_user_filters; int user_filters; } ;
struct TYPE_2__ {struct chain* priv; } ;


 int FUNC_0 (int ,int ,int,double*) ;

void FUNC_1(struct mp_output_chain *VAR_0,
                                     double VAR_1, double VAR_2)
{
    struct chain *VAR_3 = VAR_0->f->priv;


    FUNC_0(VAR_3->post_filters, VAR_3->num_post_filters, 1, &VAR_2);



    FUNC_0(VAR_3->user_filters, VAR_3->num_user_filters, 0, &VAR_1);
    FUNC_0(VAR_3->post_filters, VAR_3->num_post_filters, 0, &VAR_1);
}
