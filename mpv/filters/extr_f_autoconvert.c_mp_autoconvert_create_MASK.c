
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_autoconvert {struct mp_filter* f; } ;
struct TYPE_2__ {int out; int in; } ;
struct priv {double audio_speed; struct mp_autoconvert public; TYPE_1__ sub; int log; } ;
struct mp_filter {int * ppins; int log; struct priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_1 (struct mp_filter*,int *) ;

struct mp_autoconvert *FUNC_2(struct mp_filter *VAR_3)
{
    struct mp_filter *VAR_4 = FUNC_1(VAR_3, &VAR_2);
    if (!VAR_4)
        return ((void*)0);

    FUNC_0(VAR_4, VAR_0, "in");
    FUNC_0(VAR_4, VAR_1, "out");

    struct priv *VAR_5 = VAR_4->priv;
    VAR_5->public.f = VAR_4;
    VAR_5->log = VAR_4->log;
    VAR_5->audio_speed = 1.0;
    VAR_5->sub.in = VAR_4->ppins[0];
    VAR_5->sub.out = VAR_4->ppins[1];

    return &VAR_5->public;
}
