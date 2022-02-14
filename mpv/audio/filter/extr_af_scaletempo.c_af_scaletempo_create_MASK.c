
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {double speed; int in_pin; int out_pool; void* cur_format; void* opts; } ;
struct mp_filter {int * ppins; struct priv* priv; } ;
struct mp_autoconvert {TYPE_1__* f; } ;
struct TYPE_2__ {int * pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 void* FUNC_1 () ;
 int FUNC_2 (struct priv*) ;
 int FUNC_3 (struct mp_autoconvert*,int ) ;
 struct mp_autoconvert* FUNC_4 (struct mp_filter*) ;
 int FUNC_5 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_6 (struct mp_filter*,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (struct priv*,void*) ;

__attribute__((used)) static struct mp_filter *FUNC_10(struct mp_filter *VAR_5,
                                              void *VAR_6)
{
    struct mp_filter *VAR_7 = FUNC_6(VAR_5, &VAR_4);
    if (!VAR_7) {
        FUNC_8(VAR_6);
        return ((void*)0);
    }

    FUNC_5(VAR_7, VAR_2, "in");
    FUNC_5(VAR_7, VAR_3, "out");

    struct priv *VAR_8 = VAR_7->priv;
    VAR_8->opts = FUNC_9(VAR_8, VAR_6);
    VAR_8->speed = 1.0;
    VAR_8->cur_format = FUNC_9(VAR_8, FUNC_1());
    VAR_8->out_pool = FUNC_2(VAR_8);

    struct mp_autoconvert *VAR_9 = FUNC_4(VAR_7);
    if (!VAR_9)
        FUNC_0();

    FUNC_3(VAR_9, VAR_1);
    FUNC_3(VAR_9, VAR_0);

    FUNC_7(VAR_9->f->pins[0], VAR_7->ppins[0]);
    VAR_8->in_pin = VAR_9->f->pins[1];

    return VAR_7;
}
