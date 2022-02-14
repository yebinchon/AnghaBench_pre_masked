
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct priv {double speed; int in_pin; int out_pool; void* cur_format; TYPE_1__* opts; int pitch; } ;
struct mp_filter {int * ppins; struct priv* priv; } ;
struct mp_autoconvert {TYPE_2__* f; } ;
struct TYPE_4__ {int * pins; } ;
struct TYPE_3__ {int scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 void* FUNC_1 () ;
 int FUNC_2 (struct priv*) ;
 int FUNC_3 (struct mp_autoconvert*,int ) ;
 struct mp_autoconvert* FUNC_4 (struct mp_filter*) ;
 int FUNC_5 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_6 (struct mp_filter*,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (struct priv*,void*) ;

__attribute__((used)) static struct mp_filter *FUNC_10(struct mp_filter *VAR_4,
                                              void *VAR_5)
{
    struct mp_filter *VAR_6 = FUNC_6(VAR_4, &VAR_3);
    if (!VAR_6) {
        FUNC_8(VAR_5);
        return ((void*)0);
    }

    FUNC_5(VAR_6, VAR_1, "in");
    FUNC_5(VAR_6, VAR_2, "out");

    struct priv *VAR_7 = VAR_6->priv;
    VAR_7->opts = FUNC_9(VAR_7, VAR_5);
    VAR_7->speed = 1.0;
    VAR_7->pitch = VAR_7->opts->scale;
    VAR_7->cur_format = FUNC_9(VAR_7, FUNC_1());
    VAR_7->out_pool = FUNC_2(VAR_7);

    struct mp_autoconvert *VAR_8 = FUNC_4(VAR_6);
    if (!VAR_8)
        FUNC_0();

    FUNC_3(VAR_8, VAR_0);

    FUNC_7(VAR_8->f->pins[0], VAR_6->ppins[0]);
    VAR_7->in_pin = VAR_8->f->pins[1];

    return VAR_6;
}
