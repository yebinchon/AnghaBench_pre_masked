
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct kmac_data_st {int custom_len; int custom; int key_len; int key; int out_len; int xof_mode; int digest; } ;
struct TYPE_7__ {int data_size; int data; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__ const*,int *) ;
 int FUNC_3 (TYPE_1__ const*,int *) ;
 TYPE_1__* FUNC_4 (TYPE_1__ const*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,int *,int ,int) ;
 int FUNC_6 (int ,int *,int ,int,int ) ;
 int * FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(void *VAR_9, const OSSL_PARAM *VAR_10)
{
    struct kmac_data_st *VAR_11 = VAR_9;
    const OSSL_PARAM *VAR_12;
    const EVP_MD *VAR_13 = FUNC_7(&VAR_11->digest);

    if ((VAR_12 = FUNC_4(VAR_10, VAR_6)) != ((void*)0)
        && !FUNC_2(VAR_12, &VAR_11->xof_mode))
        return 0;
    if (((VAR_12 = FUNC_4(VAR_10, VAR_5)) != ((void*)0))
        && !FUNC_3(VAR_12, &VAR_11->out_len))
        return 0;
    if ((VAR_12 = FUNC_4(VAR_10, VAR_4)) != ((void*)0)) {
        if (VAR_12->data_size < 4 || VAR_12->data_size > VAR_2) {
            FUNC_0(VAR_0, VAR_8);
            return 0;
        }
        if (!FUNC_6(VAR_11->key, &VAR_11->key_len,
                                     VAR_12->data, VAR_12->data_size,
                                     FUNC_1(VAR_13)))
            return 0;
    }
    if ((VAR_12 = FUNC_4(VAR_10, VAR_3))
        != ((void*)0)) {
        if (VAR_12->data_size > VAR_1) {
            FUNC_0(VAR_0, VAR_7);
            return 0;
        }
        if (!FUNC_5(VAR_11->custom, &VAR_11->custom_len,
                           VAR_12->data, VAR_12->data_size))
            return 0;
    }
    return 1;
}
