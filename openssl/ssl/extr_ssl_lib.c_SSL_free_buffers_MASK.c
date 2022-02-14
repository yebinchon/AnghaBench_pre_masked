
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rlayer; } ;
typedef TYPE_1__ SSL ;
typedef int RECORD_LAYER ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

int FUNC_3(SSL *VAR_0)
{
    RECORD_LAYER *VAR_1 = &VAR_0->rlayer;

    if (FUNC_0(VAR_1) || FUNC_2(VAR_1))
        return 0;

    FUNC_1(VAR_1);
    return 1;
}
