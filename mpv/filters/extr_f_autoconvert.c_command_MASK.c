
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int filter; } ;
struct priv {double audio_speed; int resampling_forced; TYPE_1__ sub; } ;
struct mp_filter_command {scalar_t__ type; double speed; int is_active; } ;
struct mp_filter {struct priv* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct mp_filter *VAR_2, struct mp_filter_command *VAR_3)
{
    struct priv *VAR_4 = VAR_2->priv;

    if (VAR_3->type == VAR_1) {
        VAR_4->audio_speed = VAR_3->speed;


        if (VAR_4->audio_speed != 1.0)
            VAR_4->resampling_forced = 1;
        return 1;
    }

    if (VAR_3->type == VAR_0) {
        VAR_3->is_active = !!VAR_4->sub.filter;
        return 1;
    }

    return 0;
}
