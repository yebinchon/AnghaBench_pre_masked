
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct track {scalar_t__ type; scalar_t__ selected; } ;
struct MPOpts {double audio_delay; TYPE_1__* subs_rend; } ;
struct MPContext {struct MPOpts* opts; } ;
struct TYPE_2__ {double sub_delay; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

double FUNC_0(struct MPContext *VAR_2, struct track *VAR_3)
{
    struct MPOpts *VAR_4 = VAR_2->opts;
    if (VAR_3->selected) {
        if (VAR_3->type == VAR_0)
            return -VAR_4->audio_delay;
        if (VAR_3->type == VAR_1)
            return -VAR_4->subs_rend->sub_delay;
    }
    return 0;
}
