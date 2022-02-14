
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct track {int * sink; int dec; int stream; TYPE_2__* vo_c; } ;
struct mp_filter {int dummy; } ;
struct MPContext {struct mp_filter* filter_root; } ;
struct TYPE_4__ {TYPE_1__* filter; } ;
struct TYPE_3__ {struct mp_filter* f; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct MPContext*,struct track*) ;
 int FUNC_2 (struct mp_filter*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct MPContext *VAR_0, struct track *VAR_1)
{
    FUNC_0(!VAR_1->dec);
    if (!VAR_1->stream)
        goto err_out;

    struct mp_filter *VAR_2 = VAR_0->filter_root;






    if (VAR_1->vo_c)
        VAR_2 = VAR_1->vo_c->filter->f;

    VAR_1->dec = FUNC_2(VAR_2, VAR_1->stream);
    if (!VAR_1->dec)
        goto err_out;

    if (!FUNC_3(VAR_1->dec))
        goto err_out;

    return 1;

err_out:
    if (VAR_1->sink)
        FUNC_4(VAR_1->sink);
    VAR_1->sink = ((void*)0);
    FUNC_1(VAR_0, VAR_1);
    return 0;
}
