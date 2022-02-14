
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_ff_side_data; TYPE_2__* ff_side_data; int a53_cc; int icc_profile; int hwctx; int * bufs; } ;
typedef TYPE_1__ mp_image_t ;
struct TYPE_4__ {int buf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
    mp_image_t *VAR_2 = VAR_1;
    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        FUNC_0(&VAR_2->bufs[VAR_3]);
    FUNC_0(&VAR_2->hwctx);
    FUNC_0(&VAR_2->icc_profile);
    FUNC_0(&VAR_2->a53_cc);
    for (int VAR_4 = 0; VAR_4 < VAR_2->num_ff_side_data; VAR_4++)
        FUNC_0(&VAR_2->ff_side_data[VAR_4].buf);
    FUNC_1(VAR_2->ff_side_data);
}
