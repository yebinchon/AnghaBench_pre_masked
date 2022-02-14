
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_output_chain {TYPE_1__* f; } ;
struct mp_chmap {int member_0; } ;
struct TYPE_4__ {int ao_needs_update; int output_aformat; } ;
struct chain {TYPE_2__ public; int convert; struct ao* ao; } ;
struct ao {int dummy; } ;
struct TYPE_3__ {struct chain* priv; } ;


 int FUNC_0 (struct ao*,int*,int*,struct mp_chmap*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,struct mp_chmap*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct mp_output_chain *VAR_0, struct ao *VAR_1)
{
    struct chain *VAR_2 = VAR_0->f->priv;

    FUNC_1(VAR_2->public.ao_needs_update);
    FUNC_1(!VAR_2->ao);

    VAR_2->public.ao_needs_update = 0;

    VAR_2->ao = VAR_1;

    int VAR_3 = 0;
    int VAR_4 = 0;
    struct mp_chmap VAR_5 = {0};
    FUNC_0(VAR_2->ao, &VAR_4, &VAR_3, &VAR_5);

    FUNC_6(VAR_2->convert);
    FUNC_3(VAR_2->convert, VAR_3);
    FUNC_5(VAR_2->convert, VAR_4);
    FUNC_4(VAR_2->convert, &VAR_5);

    FUNC_7(VAR_2->convert);


    FUNC_2(VAR_2->public.output_aformat);
}
