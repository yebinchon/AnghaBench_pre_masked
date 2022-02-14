
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {scalar_t__ stop_play; int ao_filter_fmt; int * ao; TYPE_1__* opts; } ;
struct TYPE_2__ {scalar_t__ gapless_audio; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct MPContext*,int ,int *) ;

void FUNC_4(struct MPContext *VAR_2)
{
    if (VAR_2->ao) {

        if (VAR_2->opts->gapless_audio || VAR_2->stop_play == VAR_0)
            FUNC_1(VAR_2->ao);
        FUNC_2(VAR_2->ao);

        FUNC_3(VAR_2, VAR_1, ((void*)0));
    }
    VAR_2->ao = ((void*)0);
    FUNC_0(&VAR_2->ao_filter_fmt);
}
