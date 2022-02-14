
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {void* out_bio; void* in_bio; int ssl; } ;
struct ssl_ctx {int ctx; } ;
typedef int lua_State ;


 void* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,void*,void*) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static void
FUNC_6(lua_State* VAR_0, struct tls_context* VAR_1, struct ssl_ctx* VAR_2) {
    VAR_1->ssl = FUNC_3(VAR_2->ctx);
    if(!VAR_1->ssl) {
        FUNC_5(VAR_0, "SSL_new faild");
    }

    VAR_1->in_bio = FUNC_0(FUNC_1());
    if(!VAR_1->in_bio) {
        FUNC_5(VAR_0, "new in bio faild");
    }
    FUNC_2(VAR_1->in_bio, -1);

    VAR_1->out_bio = FUNC_0(FUNC_1());
    if(!VAR_1->out_bio) {
        FUNC_5(VAR_0, "new out bio faild");
    }
    FUNC_2(VAR_1->out_bio, -1);

    FUNC_4(VAR_1->ssl, VAR_1->in_bio, VAR_1->out_bio);
}
