
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int free_func; int dup_func; int new_func; } ;
struct TYPE_8__ {int meth; } ;
struct TYPE_7__ {int ex_data_lock; } ;
typedef TYPE_1__ OSSL_EX_DATA_GLOBAL ;
typedef int OPENSSL_CTX ;
typedef TYPE_2__ EX_CALLBACKS ;
typedef TYPE_3__ EX_CALLBACK ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ,int) ;

int FUNC_5(OPENSSL_CTX *VAR_3, int VAR_4, int VAR_5)
{
    EX_CALLBACKS *VAR_6 = FUNC_1(VAR_3, VAR_4);
    EX_CALLBACK *VAR_7;
    int VAR_8 = 0;
    OSSL_EX_DATA_GLOBAL *VAR_9 = FUNC_2(VAR_3);

    if (VAR_9 == ((void*)0))
        return 0;

    VAR_6 = FUNC_1(VAR_3, VAR_4);
    if (VAR_6 == ((void*)0))
        return 0;
    if (VAR_5 < 0 || VAR_5 >= FUNC_3(VAR_6->meth))
        goto err;
    VAR_7 = FUNC_4(VAR_6->meth, VAR_5);
    if (VAR_7 == ((void*)0))
        goto err;
    VAR_7->new_func = VAR_2;
    VAR_7->dup_func = VAR_0;
    VAR_7->free_func = VAR_1;
    VAR_8 = 1;
err:
    FUNC_0(VAR_9->ex_data_lock);
    return VAR_8;
}
