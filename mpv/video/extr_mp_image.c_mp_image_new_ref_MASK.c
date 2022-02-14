
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_image {int num_ff_side_data; TYPE_1__* ff_side_data; int a53_cc; int icc_profile; int hwctx; int * bufs; } ;
struct TYPE_3__ {int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mp_image* FUNC_0 (struct mp_image*) ;
 struct mp_image* VAR_2 ;
 int FUNC_1 (int*,int *) ;
 int FUNC_2 (struct mp_image*) ;
 TYPE_1__* FUNC_3 (int *,TYPE_1__*,int) ;
 struct mp_image* FUNC_4 (int *,int ) ;
 int FUNC_5 (struct mp_image*,int ) ;

struct mp_image *FUNC_6(struct mp_image *VAR_3)
{
    if (!VAR_3)
        return ((void*)0);

    if (!VAR_3->bufs[0])
        return FUNC_0(VAR_3);

    struct mp_image *VAR_4 = FUNC_4(((void*)0), VAR_4);
    FUNC_5(VAR_4, VAR_1);
    *VAR_4 = *VAR_3;

    bool VAR_5 = 1;
    for (int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
        FUNC_1(&VAR_5, &VAR_4->bufs[VAR_6]);

    FUNC_1(&VAR_5, &VAR_4->hwctx);
    FUNC_1(&VAR_5, &VAR_4->icc_profile);
    FUNC_1(&VAR_5, &VAR_4->a53_cc);

    VAR_4->ff_side_data = FUNC_3(((void*)0), VAR_4->ff_side_data,
                        VAR_4->num_ff_side_data * sizeof(VAR_4->ff_side_data[0]));
    for (int VAR_7 = 0; VAR_7 < VAR_4->num_ff_side_data; VAR_7++)
        FUNC_1(&VAR_5, &VAR_4->ff_side_data[VAR_7].buf);

    if (VAR_5)
        return VAR_4;



    FUNC_2(VAR_4);
    return ((void*)0);
}
