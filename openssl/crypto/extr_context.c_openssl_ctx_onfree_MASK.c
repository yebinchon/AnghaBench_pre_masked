
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct openssl_ctx_onfree_list_st {struct openssl_ctx_onfree_list_st* next; int fn; } ;
typedef int openssl_ctx_onfree_fn ;
struct TYPE_3__ {struct openssl_ctx_onfree_list_st* onfreelist; } ;
typedef TYPE_1__ OPENSSL_CTX ;


 struct openssl_ctx_onfree_list_st* FUNC_0 (int) ;

int FUNC_1(OPENSSL_CTX *VAR_0, openssl_ctx_onfree_fn VAR_1)
{
    struct openssl_ctx_onfree_list_st *VAR_2
        = FUNC_0(sizeof(*VAR_2));

    if (VAR_2 == ((void*)0))
        return 0;

    VAR_2->fn = VAR_1;
    VAR_2->next = VAR_0->onfreelist;
    VAR_0->onfreelist = VAR_2;

    return 1;
}
