
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao_chain {double last_out_pts; int ao_buffer; } ;
struct MPContext {double audio_speed; struct ao_chain* ao_chain; } ;


 double VAR_0 ;
 double FUNC_0 (int ) ;

double FUNC_1(struct MPContext *VAR_1)
{
    struct ao_chain *VAR_2 = VAR_1->ao_chain;
    if (!VAR_2)
        return VAR_0;


    double VAR_3 = VAR_2->last_out_pts;
    if (VAR_3 == VAR_0)
        return VAR_0;




    VAR_3 -= FUNC_0(VAR_2->ao_buffer) * VAR_1->audio_speed;

    return VAR_3;
}
