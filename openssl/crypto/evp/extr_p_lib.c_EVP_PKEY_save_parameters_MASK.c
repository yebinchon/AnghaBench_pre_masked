
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int save_parameters; } ;
typedef TYPE_1__ EVP_PKEY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(EVP_PKEY *VAR_2, int VAR_3)
{

    if (VAR_2->type == VAR_0) {
        int VAR_4 = VAR_2->save_parameters;

        if (VAR_3 >= 0)
            VAR_2->save_parameters = VAR_3;
        return VAR_4;
    }


    if (VAR_2->type == VAR_1) {
        int VAR_5 = VAR_2->save_parameters;

        if (VAR_3 >= 0)
            VAR_2->save_parameters = VAR_3;
        return VAR_5;
    }

    return 0;
}
