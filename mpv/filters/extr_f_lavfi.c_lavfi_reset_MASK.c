
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_filter {struct lavfi* priv; } ;
struct lavfi {int num_in_pads; TYPE_1__** in_pads; } ;
struct TYPE_2__ {int pending; } ;


 int FUNC_0 (struct lavfi*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mp_filter *VAR_0)
{
    struct lavfi *VAR_1 = VAR_0->priv;

    FUNC_0(VAR_1);

    for (int VAR_2 = 0; VAR_2 < VAR_1->num_in_pads; VAR_2++)
        FUNC_1(&VAR_1->in_pads[VAR_2]->pending);
}
