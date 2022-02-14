
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int value; } ;
struct TYPE_5__ {struct TYPE_5__* next; void const* index; void* arg; int handfn; } ;
typedef TYPE_1__ THREAD_EVENT_HANDLER ;
typedef int OSSL_thread_stop_handler_fn ;
typedef int OPENSSL_CTX ;
typedef int CRYPTO_THREAD_LOCAL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 TYPE_3__ VAR_1 ;
 TYPE_1__** FUNC_3 (int *,int,int ) ;
 int * FUNC_4 (int *,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(const void *VAR_4, void *VAR_5,
                           OSSL_thread_stop_handler_fn VAR_6)
{
    THREAD_EVENT_HANDLER **VAR_7;
    THREAD_EVENT_HANDLER *VAR_8;
    CRYPTO_THREAD_LOCAL *VAR_9 = &VAR_1.value;


    VAR_7 = FUNC_3(VAR_9, 1, 0);
    if (VAR_7 == ((void*)0))
        return 0;
    VAR_8 = FUNC_1(sizeof(*VAR_8));
    if (VAR_8 == ((void*)0))
        return 0;

    VAR_8->handfn = VAR_6;
    VAR_8->arg = VAR_5;
    VAR_8->index = VAR_4;
    VAR_8->next = *VAR_7;
    *VAR_7 = VAR_8;

    return 1;
}
