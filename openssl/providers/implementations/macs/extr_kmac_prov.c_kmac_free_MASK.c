
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmac_data_st {int custom_len; int custom; int key_len; int key; int digest; int ctx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct kmac_data_st*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
    struct kmac_data_st *VAR_1 = VAR_0;

    if (VAR_1 != ((void*)0)) {
        FUNC_0(VAR_1->ctx);
        FUNC_3(&VAR_1->digest);
        FUNC_1(VAR_1->key, VAR_1->key_len);
        FUNC_1(VAR_1->custom, VAR_1->custom_len);
        FUNC_2(VAR_1);
    }
}
