
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_recorder_sink {int dummy; } ;
struct dec_sub {int lock; struct mp_recorder_sink* recorder_sink; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct dec_sub *VAR_0, struct mp_recorder_sink *VAR_1)
{
    FUNC_0(&VAR_0->lock);
    VAR_0->recorder_sink = VAR_1;
    FUNC_1(&VAR_0->lock);
}
