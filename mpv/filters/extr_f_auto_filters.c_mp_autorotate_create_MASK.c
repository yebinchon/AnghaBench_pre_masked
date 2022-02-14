
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* out; void* in; } ;
struct rotate_priv {int prev_rotate; TYPE_1__ sub; } ;
struct mp_filter {struct rotate_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_1 (struct mp_filter*,int *) ;
 int VAR_2 ;

struct mp_filter *FUNC_2(struct mp_filter *VAR_3)
{
    struct mp_filter *VAR_4 = FUNC_1(VAR_3, &VAR_2);
    if (!VAR_4)
        return ((void*)0);

    struct rotate_priv *VAR_5 = VAR_4->priv;
    VAR_5->prev_rotate = -1;

    VAR_5->sub.in = FUNC_0(VAR_4, VAR_0, "in");
    VAR_5->sub.out = FUNC_0(VAR_4, VAR_1, "out");

    return VAR_4;
}
