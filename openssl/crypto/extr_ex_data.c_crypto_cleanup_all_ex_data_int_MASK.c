
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * meth; } ;
struct TYPE_4__ {int * ex_data_lock; TYPE_2__* ex_data; } ;
typedef TYPE_1__ OSSL_EX_DATA_GLOBAL ;
typedef int OPENSSL_CTX ;
typedef TYPE_2__ EX_CALLBACKS ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(OPENSSL_CTX *VAR_2)
{
    int VAR_3;
    OSSL_EX_DATA_GLOBAL *VAR_4 = FUNC_1(VAR_2);

    if (VAR_4 == ((void*)0))
        return;

    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
        EX_CALLBACKS *VAR_5 = &VAR_4->ex_data[VAR_3];

        FUNC_2(VAR_5->meth, VAR_1);
        VAR_5->meth = ((void*)0);
    }

    FUNC_0(VAR_4->ex_data_lock);
    VAR_4->ex_data_lock = ((void*)0);
}
