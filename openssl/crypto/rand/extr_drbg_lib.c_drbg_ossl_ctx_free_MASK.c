
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int public_drbg; int private_drbg; int master_drbg; } ;
typedef TYPE_1__ DRBG_GLOBAL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    DRBG_GLOBAL *VAR_1 = VAR_0;

    if (VAR_1 == ((void*)0))
        return;

    FUNC_2(VAR_1->master_drbg);
    FUNC_0(&VAR_1->private_drbg);
    FUNC_0(&VAR_1->public_drbg);

    FUNC_1(VAR_1);
}
