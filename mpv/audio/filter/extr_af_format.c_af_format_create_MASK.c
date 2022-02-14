
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct priv {int in_pin; TYPE_3__* opts; } ;
struct mp_filter {int * ppins; struct priv* priv; } ;
struct mp_autoconvert {TYPE_2__* f; } ;
struct TYPE_4__ {scalar_t__ num_chmaps; int * chmaps; } ;
struct TYPE_6__ {TYPE_1__ in_channels; scalar_t__ in_srate; scalar_t__ in_format; } ;
struct TYPE_5__ {int * pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (struct mp_autoconvert*,scalar_t__) ;
 int FUNC_2 (struct mp_autoconvert*,int *) ;
 int FUNC_3 (struct mp_autoconvert*,scalar_t__) ;
 struct mp_autoconvert* FUNC_4 (struct mp_filter*) ;
 int FUNC_5 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_6 (struct mp_filter*,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (void*) ;
 TYPE_3__* FUNC_9 (struct priv*,void*) ;

__attribute__((used)) static struct mp_filter *FUNC_10(struct mp_filter *VAR_3,
                                              void *VAR_4)
{
    struct mp_filter *VAR_5 = FUNC_6(VAR_3, &VAR_2);
    if (!VAR_5) {
        FUNC_8(VAR_4);
        return ((void*)0);
    }

    struct priv *VAR_6 = VAR_5->priv;
    VAR_6->opts = FUNC_9(VAR_6, VAR_4);

    FUNC_5(VAR_5, VAR_0, "in");
    FUNC_5(VAR_5, VAR_1, "out");

    struct mp_autoconvert *VAR_7 = FUNC_4(VAR_5);
    if (!VAR_7)
        FUNC_0();

    if (VAR_6->opts->in_format)
        FUNC_1(VAR_7, VAR_6->opts->in_format);
    if (VAR_6->opts->in_srate)
        FUNC_3(VAR_7, VAR_6->opts->in_srate);
    if (VAR_6->opts->in_channels.num_chmaps > 0)
        FUNC_2(VAR_7, &VAR_6->opts->in_channels.chmaps[0]);

    FUNC_7(VAR_7->f->pins[0], VAR_5->ppins[0]);
    VAR_6->in_pin = VAR_7->f->pins[1];

    return VAR_5;
}
