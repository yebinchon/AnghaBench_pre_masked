
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int (* openssl_ctx_run_once_fn ) (TYPE_1__*) ;
struct TYPE_7__ {int* run_once_done; int* run_once_ret; int oncelock; } ;
typedef TYPE_1__ OPENSSL_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;

int FUNC_4(OPENSSL_CTX *VAR_0, unsigned int VAR_1,
                         openssl_ctx_run_once_fn VAR_2)
{
    int VAR_3 = 0, VAR_4 = 0;

    VAR_0 = FUNC_3(VAR_0);
    if (VAR_0 == ((void*)0))
        return 0;

    FUNC_0(VAR_0->oncelock);
    VAR_3 = VAR_0->run_once_done[VAR_1];
    if (VAR_3)
        VAR_4 = VAR_0->run_once_ret[VAR_1];
    FUNC_1(VAR_0->oncelock);

    if (VAR_3)
        return VAR_4;

    FUNC_2(VAR_0->oncelock);
    if (VAR_0->run_once_done[VAR_1]) {
        VAR_4 = VAR_0->run_once_ret[VAR_1];
        FUNC_1(VAR_0->oncelock);
        return VAR_4;
    }

    VAR_4 = VAR_2(VAR_0);
    VAR_0->run_once_done[VAR_1] = 1;
    VAR_0->run_once_ret[VAR_1] = VAR_4;
    FUNC_1(VAR_0->oncelock);

    return VAR_4;
}
