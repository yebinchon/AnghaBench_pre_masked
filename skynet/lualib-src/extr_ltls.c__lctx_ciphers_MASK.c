
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssl_ctx {int ctx; } ;
typedef int lua_State ;


 int FUNC_0 (int ,char const*) ;
 struct ssl_ctx* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,...) ;
 char* FUNC_3 (int *,int) ;

__attribute__((used)) static int
FUNC_4(lua_State* VAR_0) {
    struct ssl_ctx* VAR_1 = FUNC_1(VAR_0, 1);
    const char* VAR_2 = FUNC_3(VAR_0, 2);
    if(!VAR_2) {
        FUNC_2(VAR_0, "need cipher list");
    }
    int VAR_3 = FUNC_0(VAR_1->ctx, VAR_2);
    if(VAR_3 != 0) {
        FUNC_2(VAR_0, "SSL_CTX_set_tlsext_use_srtp error:%d", VAR_3);
    }
    return 0;
}
