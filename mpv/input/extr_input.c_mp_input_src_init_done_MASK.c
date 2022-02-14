
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_input_src {TYPE_1__* in; } ;
struct TYPE_2__ {int init_done; int thread_running; int thread; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;

void FUNC_4(struct mp_input_src *VAR_0)
{
    FUNC_0(!VAR_0->in->init_done);
    FUNC_0(VAR_0->in->thread_running);
    FUNC_0(FUNC_2(VAR_0->in->thread, FUNC_3()));
    VAR_0->in->init_done = 1;
    FUNC_1(&VAR_0->in->init_done, 0);
}
