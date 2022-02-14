
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao_chain {int ao; } ;
struct MPOpts {double softvol_volume; int softvol_mute; } ;
struct MPContext {struct ao_chain* ao_chain; struct MPOpts* opts; } ;


 float FUNC_0 (double,int ) ;
 int FUNC_1 (int ,float) ;
 float FUNC_2 (struct MPContext*) ;
 float FUNC_3 (float,int) ;

void FUNC_4(struct MPContext *VAR_0)
{
    struct MPOpts *VAR_1 = VAR_0->opts;
    struct ao_chain *VAR_2 = VAR_0->ao_chain;
    if (!VAR_2 || !VAR_2->ao)
        return;

    float VAR_3 = FUNC_0(VAR_1->softvol_volume / 100.0, 0);
    VAR_3 = FUNC_3(VAR_3, 3);
    VAR_3 *= FUNC_2(VAR_0);
    if (VAR_1->softvol_mute == 1)
        VAR_3 = 0.0;

    FUNC_1(VAR_2->ao, VAR_3);
}
