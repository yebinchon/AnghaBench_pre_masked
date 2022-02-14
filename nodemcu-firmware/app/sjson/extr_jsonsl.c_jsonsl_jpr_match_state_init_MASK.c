
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* jsonsl_t ;
typedef int jsonsl_jpr_t ;
struct TYPE_3__ {size_t jpr_count; size_t* jpr_root; int levels_max; int * jprs; } ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;

void FUNC_3(jsonsl_t VAR_0,
                                 jsonsl_jpr_t *VAR_1,
                                 size_t VAR_2)
{
    size_t VAR_3, *VAR_4;
    if (VAR_2 == 0) {
        return;
    }
    VAR_0->jprs = (jsonsl_jpr_t *)FUNC_1(sizeof(jsonsl_jpr_t) * VAR_2);
    VAR_0->jpr_count = VAR_2;
    VAR_0->jpr_root = (size_t*)FUNC_0(1, sizeof(size_t) * VAR_2 * VAR_0->levels_max);
    FUNC_2(VAR_0->jprs, VAR_1, sizeof(jsonsl_jpr_t) * VAR_2);


    VAR_4 = VAR_0->jpr_root;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        VAR_4[VAR_3] = VAR_3+1;
    }
}
