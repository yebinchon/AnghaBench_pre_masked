
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao_chain {int filter; } ;
struct MPContext {scalar_t__ audio_status; struct ao_chain* ao_chain; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct MPContext*,int ) ;
 double FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct MPContext*) ;

int FUNC_3(struct MPContext *VAR_2)
{
    struct ao_chain *VAR_3 = VAR_2->ao_chain;
    if (!VAR_3)
        return 0;

    double VAR_4 = FUNC_1(VAR_3->filter);

    if (FUNC_2(VAR_2) < 0)
        return -1;

    double VAR_5 = FUNC_1(VAR_3->filter);



    if (VAR_2->audio_status == VAR_1 && VAR_4 - VAR_5 >= 0.2)
        FUNC_0(VAR_2, VAR_0);
    return 1;
}
