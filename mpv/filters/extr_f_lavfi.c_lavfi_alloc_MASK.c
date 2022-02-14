
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_filter {int log; struct lavfi* priv; } ;
struct TYPE_2__ {struct mp_filter* f; } ;
struct lavfi {int tmp_frame; TYPE_1__ public; int log; struct mp_filter* f; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 struct mp_filter* FUNC_2 (struct mp_filter*,int *) ;

__attribute__((used)) static struct lavfi *FUNC_3(struct mp_filter *VAR_1)
{
    struct mp_filter *VAR_2 = FUNC_2(VAR_1, &VAR_0);
    if (!VAR_2)
        return ((void*)0);

    struct lavfi *VAR_3 = VAR_2->priv;

    VAR_3->f = VAR_2;
    VAR_3->log = VAR_2->log;
    VAR_3->public.f = VAR_2;
    VAR_3->tmp_frame = FUNC_1();
    if (!VAR_3->tmp_frame)
        FUNC_0();

    return VAR_3;
}
