
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_sws_filter {int pool; TYPE_1__* sws; struct mp_filter* f; } ;
struct mp_filter {int global; int log; struct mp_sws_filter* priv; } ;
struct TYPE_3__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_1 (struct mp_filter*,int *) ;
 int FUNC_2 (struct mp_sws_filter*) ;
 TYPE_1__* FUNC_3 (struct mp_sws_filter*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_2 ;

struct mp_sws_filter *FUNC_5(struct mp_filter *VAR_3)
{
    struct mp_filter *VAR_4 = FUNC_1(VAR_3, &VAR_2);
    if (!VAR_4)
        return ((void*)0);

    FUNC_0(VAR_4, VAR_0, "in");
    FUNC_0(VAR_4, VAR_1, "out");

    struct mp_sws_filter *VAR_5 = VAR_4->priv;
    VAR_5->f = VAR_4;
    VAR_5->sws = FUNC_3(VAR_5);
    VAR_5->sws->log = VAR_4->log;
    FUNC_4(VAR_5->sws, VAR_4->global);
    VAR_5->pool = FUNC_2(VAR_5);

    return VAR_5;
}
