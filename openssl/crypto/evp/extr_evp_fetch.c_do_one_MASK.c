
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct do_all_data_st {int (* free_method ) (void*) ;int user_arg; int (* user_fn ) (void*,int ) ;void* (* new_method ) (int,int ,int *) ;} ;
struct TYPE_3__ {int implementation; int algorithm_names; } ;
typedef int OSSL_PROVIDER ;
typedef int OSSL_NAMEMAP ;
typedef TYPE_1__ OSSL_ALGORITHM ;
typedef int OPENSSL_CTX ;


 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 void* FUNC_3 (int,int ,int *) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static void FUNC_6(OSSL_PROVIDER *VAR_0, const OSSL_ALGORITHM *VAR_1,
                   int VAR_2, void *VAR_3)
{
    struct do_all_data_st *VAR_4 = VAR_3;
    OPENSSL_CTX *VAR_5 = FUNC_2(VAR_0);
    OSSL_NAMEMAP *VAR_6 = FUNC_1(VAR_5);
    int VAR_7 = FUNC_0(VAR_6, VAR_1->algorithm_names);
    void *VAR_8 = ((void*)0);

    if (VAR_7 != 0)
        VAR_8 = VAR_4->new_method(VAR_7, VAR_1->implementation, VAR_0);

    if (VAR_8 != ((void*)0)) {
        VAR_4->user_fn(VAR_8, VAR_4->user_arg);
        VAR_4->free_method(VAR_8);
    }
}
