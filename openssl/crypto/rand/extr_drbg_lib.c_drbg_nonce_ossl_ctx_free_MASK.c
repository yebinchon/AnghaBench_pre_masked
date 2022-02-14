
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rand_nonce_lock; } ;
typedef TYPE_1__ DRBG_NONCE_GLOBAL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    DRBG_NONCE_GLOBAL *VAR_1 = VAR_0;

    if (VAR_1 == ((void*)0))
        return;

    FUNC_0(VAR_1->rand_nonce_lock);

    FUNC_1(VAR_1);
}
