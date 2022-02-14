
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao_chain {int filter; } ;
struct MPContext {double speed_factor_a; TYPE_1__* opts; struct ao_chain* ao_chain; } ;
struct TYPE_2__ {double playback_speed; int pitch_correction; } ;


 int FUNC_0 (int ,double,double) ;

__attribute__((used)) static void FUNC_1(struct MPContext *VAR_0)
{
    struct ao_chain *VAR_1 = VAR_0->ao_chain;
    if (!VAR_1)
        return;

    double VAR_2 = VAR_0->opts->playback_speed;
    double VAR_3 = VAR_0->speed_factor_a;

    if (!VAR_0->opts->pitch_correction) {
        VAR_3 *= VAR_2;
        VAR_2 = 1.0;
    }

    FUNC_0(VAR_1->filter, VAR_2, VAR_3);
}
