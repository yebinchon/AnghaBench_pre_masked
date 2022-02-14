
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ssl_ctx; int * ssl; } ;
typedef TYPE_1__ redisSSLContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0){
    redisSSLContext *VAR_1 = VAR_0;

    if (!VAR_1) return;
    if (VAR_1->ssl) {
        FUNC_1(VAR_1->ssl);
        VAR_1->ssl = ((void*)0);
    }
    if (VAR_1->ssl_ctx) {
        FUNC_0(VAR_1->ssl_ctx);
        VAR_1->ssl_ctx = ((void*)0);
    }
    FUNC_2(VAR_1);
}
