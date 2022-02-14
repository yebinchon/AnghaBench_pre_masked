
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct MPContext {scalar_t__ stop_play; TYPE_2__* playlist; TYPE_1__* opts; } ;
struct TYPE_4__ {int current; } ;
struct TYPE_3__ {scalar_t__ player_idle_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct MPContext*,int) ;
 int FUNC_1 (struct MPContext*) ;
 int FUNC_2 (struct MPContext*,int ,int *) ;
 int FUNC_3 (struct MPContext*) ;
 int FUNC_4 (struct MPContext*) ;

void FUNC_5(struct MPContext *VAR_2)
{

    bool VAR_3 = 1;
    while (VAR_2->opts->player_idle_mode && !VAR_2->playlist->current
           && VAR_2->stop_play != VAR_1)
    {
        if (VAR_3) {
            FUNC_4(VAR_2);
            FUNC_0(VAR_2, 1);
            FUNC_3(VAR_2);
            FUNC_2(VAR_2, VAR_0, ((void*)0));
            VAR_3 = 0;
        }
        FUNC_1(VAR_2);
    }
}
