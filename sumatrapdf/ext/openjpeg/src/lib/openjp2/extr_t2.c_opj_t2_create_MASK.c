
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cp; int * image; } ;
typedef TYPE_1__ opj_t2_t ;
typedef int opj_image_t ;
typedef int opj_cp_t ;


 scalar_t__ FUNC_0 (int,int) ;

opj_t2_t* FUNC_1(opj_image_t *VAR_0, opj_cp_t *VAR_1)
{

    opj_t2_t *VAR_2 = (opj_t2_t*)FUNC_0(1, sizeof(opj_t2_t));
    if (!VAR_2) {
        return ((void*)0);
    }

    VAR_2->image = VAR_0;
    VAR_2->cp = VAR_1;

    return VAR_2;
}
