
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ex_data; int * ex_data_lock; } ;
typedef TYPE_1__ OSSL_EX_DATA_GLOBAL ;
typedef int OPENSSL_CTX ;
typedef int EX_CALLBACKS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static EX_CALLBACKS *FUNC_3(OPENSSL_CTX *VAR_3, int VAR_4)
{
    EX_CALLBACKS *VAR_5;
    OSSL_EX_DATA_GLOBAL *VAR_6 = ((void*)0);

    if (VAR_4 < 0 || VAR_4 >= VAR_0) {
        FUNC_1(VAR_1, VAR_2);
        return ((void*)0);
    }

    VAR_6 = FUNC_2(VAR_3);
    if (VAR_6 == ((void*)0) || VAR_6->ex_data_lock == ((void*)0)) {
         return ((void*)0);
    }

    FUNC_0(VAR_6->ex_data_lock);
    VAR_5 = &VAR_6->ex_data[VAR_4];
    return VAR_5;
}
