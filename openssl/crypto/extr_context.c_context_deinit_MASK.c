
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct openssl_ctx_onfree_list_st {struct openssl_ctx_onfree_list_st* next; int (* fn ) (TYPE_1__*) ;} ;
struct TYPE_6__ {int * lock; int * oncelock; int ** index_locks; int data; struct openssl_ctx_onfree_list_st* onfreelist; } ;
typedef TYPE_1__ OPENSSL_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (struct openssl_ctx_onfree_list_st*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(OPENSSL_CTX *VAR_2)
{
    struct openssl_ctx_onfree_list_st *VAR_3, *VAR_4;
    int VAR_5;

    if (VAR_2 == ((void*)0))
        return 1;

    FUNC_4(VAR_2);

    VAR_4 = VAR_2->onfreelist;
    while (VAR_4 != ((void*)0)) {
        VAR_4->fn(VAR_2);
        VAR_3 = VAR_4;
        VAR_4 = VAR_4->next;
        FUNC_2(VAR_3);
    }
    FUNC_1(VAR_0, ((void*)0), &VAR_2->data);
    FUNC_3(VAR_2);
    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
        FUNC_0(VAR_2->index_locks[VAR_5]);

    FUNC_0(VAR_2->oncelock);
    FUNC_0(VAR_2->lock);
    VAR_2->lock = ((void*)0);
    return 1;
}
