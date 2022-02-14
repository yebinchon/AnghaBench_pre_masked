
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_filter {struct chain* priv; } ;
struct TYPE_2__ {int ao_needs_update; int got_output_eof; } ;
struct chain {TYPE_1__ public; } ;



__attribute__((used)) static void FUNC_0(struct mp_filter *VAR_0)
{
    struct chain *VAR_1 = VAR_0->priv;

    VAR_1->public.ao_needs_update = 0;

    VAR_1->public.got_output_eof = 0;
}
