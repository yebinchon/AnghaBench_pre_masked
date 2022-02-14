
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int is_server; int ssl; } ;
struct ssl_ctx {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct tls_context*,struct ssl_ctx*) ;

__attribute__((used)) static void
FUNC_2(lua_State* VAR_0, struct tls_context* VAR_1, struct ssl_ctx* VAR_2) {
    VAR_1->is_server = 1;
    FUNC_1(VAR_0, VAR_1, VAR_2);
    FUNC_0(VAR_1->ssl);
}
