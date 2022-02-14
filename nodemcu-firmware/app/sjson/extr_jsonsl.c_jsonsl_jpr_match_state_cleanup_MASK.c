
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* jsonsl_t ;
struct TYPE_3__ {scalar_t__ jpr_count; int * jpr_root; int * jprs; } ;


 int FUNC_0 (int *) ;

void FUNC_1(jsonsl_t VAR_0)
{
    if (VAR_0->jpr_count == 0) {
        return;
    }

    FUNC_0(VAR_0->jpr_root);
    FUNC_0(VAR_0->jprs);
    VAR_0->jprs = ((void*)0);
    VAR_0->jpr_root = ((void*)0);
    VAR_0->jpr_count = 0;
}
