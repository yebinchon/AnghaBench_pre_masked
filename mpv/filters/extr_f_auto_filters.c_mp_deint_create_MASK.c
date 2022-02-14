
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_filter {int global; struct deint_priv* priv; } ;
struct TYPE_2__ {void* out; void* in; } ;
struct deint_priv {int opts; TYPE_1__ sub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mp_filter*,int ,int *) ;
 void* FUNC_1 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_2 (struct mp_filter*,int *) ;

struct mp_filter *FUNC_3(struct mp_filter *VAR_4)
{
    struct mp_filter *VAR_5 = FUNC_2(VAR_4, &VAR_2);
    if (!VAR_5)
        return ((void*)0);

    struct deint_priv *VAR_6 = VAR_5->priv;

    VAR_6->sub.in = FUNC_1(VAR_5, VAR_0, "in");
    VAR_6->sub.out = FUNC_1(VAR_5, VAR_1, "out");

    VAR_6->opts = FUNC_0(VAR_5, VAR_5->global, &VAR_3);

    return VAR_5;
}
