
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct track {int dummy; } ;
struct MPContext {int error_playing; TYPE_1__* vo_chain; } ;
struct TYPE_2__ {struct track* track; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPContext*,struct track*) ;
 int FUNC_1 (struct MPContext*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
    struct MPContext *VAR_2 = VAR_1;

    struct track *VAR_3 = VAR_2->vo_chain ? VAR_2->vo_chain->track : ((void*)0);
    FUNC_1(VAR_2);
    if (VAR_3) {
        VAR_2->error_playing = VAR_0;
        FUNC_0(VAR_2, VAR_3);
    }
}
