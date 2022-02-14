
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_input_src {TYPE_1__* in; } ;
struct TYPE_2__ {int thread_running; int init_done; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void *FUNC_2(void *VAR_0)
{
    void **VAR_1 = VAR_0;
    struct mp_input_src *VAR_2 = VAR_1[0];
    void (*VAR_3)(struct mp_input_src *VAR_4, void *VAR_5) = VAR_1[1];
    void *VAR_6 = VAR_1[2];

    FUNC_1("input source");

    VAR_2->in->thread_running = 1;

    VAR_3(VAR_2, VAR_6);

    if (!VAR_2->in->init_done)
        FUNC_0(&VAR_2->in->init_done, -1);

    return ((void*)0);
}
