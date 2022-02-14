
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssl_ctx {int ctx; } ;
typedef int lua_State ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (int ,char const*,int ) ;
 int VAR_0 ;
 struct ssl_ctx* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*,...) ;
 char* FUNC_5 (int *,int) ;

__attribute__((used)) static int
FUNC_6(lua_State* VAR_1) {
    struct ssl_ctx* VAR_2 = FUNC_3(VAR_1, 1);
    const char* VAR_3 = FUNC_5(VAR_1, 2);
    const char* VAR_4 = FUNC_5(VAR_1, 3);
    if(!VAR_3) {
        FUNC_4(VAR_1, "need certfile");
    }

    if(!VAR_4) {
        FUNC_4(VAR_1, "need private key");
    }

    int VAR_5 = FUNC_2(VAR_2->ctx, VAR_3, VAR_0);
    if(VAR_5 != 1) {
        FUNC_4(VAR_1, "SSL_CTX_use_certificate_file error:%d", VAR_5);
    }

    VAR_5 = FUNC_1(VAR_2->ctx, VAR_4, VAR_0);
    if(VAR_5 != 1) {
        FUNC_4(VAR_1, "SSL_CTX_use_PrivateKey_file error:%d", VAR_5);
    }
    VAR_5 = FUNC_0(VAR_2->ctx);
    if(VAR_5 != 1) {
        FUNC_4(VAR_1, "SSL_CTX_check_private_key error:%d", VAR_5);
    }
    return 0;
}
