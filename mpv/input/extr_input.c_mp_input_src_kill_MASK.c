
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_input_src {int (* uninit ) (struct mp_input_src*) ;TYPE_1__* in; int (* cancel ) (struct mp_input_src*) ;struct input_ctx* input_ctx; } ;
struct input_ctx {int num_sources; struct mp_input_src** sources; } ;
struct TYPE_2__ {int thread; scalar_t__ thread_running; } ;


 int FUNC_0 (struct mp_input_src**,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct input_ctx*) ;
 int FUNC_3 (struct input_ctx*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct mp_input_src*) ;
 int FUNC_6 (struct mp_input_src*) ;
 int FUNC_7 (struct mp_input_src*) ;

__attribute__((used)) static void FUNC_8(struct mp_input_src *VAR_0)
{
    if (!VAR_0)
        return;
    struct input_ctx *VAR_1 = VAR_0->input_ctx;
    FUNC_2(VAR_1);
    for (int VAR_2 = 0; VAR_2 < VAR_1->num_sources; VAR_2++) {
        if (VAR_1->sources[VAR_2] == VAR_0) {
            FUNC_0(VAR_1->sources, VAR_1->num_sources, VAR_2);
            FUNC_3(VAR_1);
            if (VAR_0->cancel)
                VAR_0->cancel(VAR_0);
            if (VAR_0->in->thread_running)
                FUNC_4(VAR_0->in->thread, ((void*)0));
            if (VAR_0->uninit)
                VAR_0->uninit(VAR_0);
            FUNC_7(VAR_0);
            return;
        }
    }
    FUNC_1();
}
