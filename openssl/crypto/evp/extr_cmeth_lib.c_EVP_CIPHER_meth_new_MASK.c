
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nid; int block_size; int key_len; } ;
typedef TYPE_1__ EVP_CIPHER ;


 TYPE_1__* FUNC_0 () ;

EVP_CIPHER *FUNC_1(int VAR_0, int VAR_1, int VAR_2)
{
    EVP_CIPHER *VAR_3 = FUNC_0();

    if (VAR_3 != ((void*)0)) {
        VAR_3->nid = VAR_0;
        VAR_3->block_size = VAR_1;
        VAR_3->key_len = VAR_2;
    }
    return VAR_3;
}
