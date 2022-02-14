
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ type; TYPE_1__* ameth; } ;
struct TYPE_11__ {int (* param_copy ) (TYPE_2__ const*,TYPE_2__ const*) ;} ;
typedef TYPE_2__ const EVP_PKEY ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__ const*,TYPE_2__ const*) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__ const*,TYPE_2__ const*) ;

int FUNC_5(EVP_PKEY *VAR_5, const EVP_PKEY *VAR_6)
{
    if (VAR_5->type == VAR_1) {
        if (FUNC_2(VAR_5, VAR_6->type) == 0)
            return 0;
    } else if (VAR_5->type != VAR_6->type) {
        FUNC_3(VAR_0, VAR_2);
        goto err;
    }

    if (FUNC_1(VAR_6)) {
        FUNC_3(VAR_0, VAR_4);
        goto err;
    }

    if (!FUNC_1(VAR_5)) {
        if (FUNC_0(VAR_5, VAR_6) == 1)
            return 1;
        FUNC_3(VAR_0, VAR_3);
        return 0;
    }

    if (VAR_6->ameth && VAR_6->ameth->param_copy)
        return VAR_6->ameth->param_copy(VAR_5, VAR_6);
 err:
    return 0;
}
