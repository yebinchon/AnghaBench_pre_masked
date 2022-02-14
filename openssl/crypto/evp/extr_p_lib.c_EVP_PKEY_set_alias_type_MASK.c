
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
typedef TYPE_1__ EVP_PKEY ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(EVP_PKEY *VAR_2, int VAR_3)
{
    if (VAR_2->type == VAR_3) {
        return 1;
    }





    if (FUNC_1(VAR_3) != FUNC_0(VAR_2)) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }

    VAR_2->type = VAR_3;
    return 1;
}
