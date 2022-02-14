
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssl_ctx {int ctx; } ;
typedef int lua_State ;
struct TYPE_3__ {char* member_0; int * member_1; } ;
typedef TYPE_1__ luaL_Reg ;
typedef int buf ;


 int FUNC_0 (unsigned int,char*,int) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int,char*) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int
FUNC_11(lua_State* VAR_3) {
    struct ssl_ctx* VAR_4 = (struct ssl_ctx*)FUNC_7(VAR_3, sizeof(*VAR_4));
    VAR_4->ctx = FUNC_2(FUNC_3());
    if(!VAR_4->ctx) {
        unsigned int VAR_5 = FUNC_1();
        char VAR_6[256];
        FUNC_0(VAR_5, VAR_6, sizeof(VAR_6));
        FUNC_4(VAR_3, "SSL_CTX_new client faild. %s\n", VAR_6);
    }

    if(FUNC_6(VAR_3, "_TLS_SSLCTX_METATABLE_")) {
        luaL_Reg VAR_7[] = {
            {"set_ciphers", VAR_1},
            {"set_cert", VAR_0},
            {((void*)0), ((void*)0)},
        };

        FUNC_5(VAR_3, VAR_7);
        FUNC_9(VAR_3, -2, "__index");
        FUNC_8(VAR_3, VAR_2);
        FUNC_9(VAR_3, -2, "__gc");
    }
    FUNC_10(VAR_3, -2);
    return 1;
}
