
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_input_src {int dummy; } ;
struct input_ctx {struct mp_input_src** sources; scalar_t__ num_sources; } ;


 int FUNC_0 (struct input_ctx*) ;
 int FUNC_1 (struct input_ctx*) ;
 int FUNC_2 (struct mp_input_src*) ;

__attribute__((used)) static void FUNC_3(struct input_ctx *VAR_0)
{


    while (1) {
        FUNC_0(VAR_0);
        struct mp_input_src *VAR_1 = VAR_0->num_sources ? VAR_0->sources[0] : ((void*)0);
        FUNC_1(VAR_0);
        if (!VAR_1)
            break;
        FUNC_2(VAR_1);
    }
}
