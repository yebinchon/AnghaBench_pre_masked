
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tls_context {int is_close; } ;
struct ssl_ctx {int dummy; } ;
typedef int lua_State ;
struct TYPE_3__ {char* member_0; int * member_1; } ;
typedef TYPE_1__ luaL_Reg ;


 struct ssl_ctx* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct tls_context*,struct ssl_ctx*) ;
 int FUNC_2 (int *,struct tls_context*,struct ssl_ctx*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 char* FUNC_6 (int *,int,char*) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int,char*) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (char const*,char*) ;

__attribute__((used)) static int
FUNC_14(lua_State* VAR_5) {
    struct tls_context* VAR_6 = (struct tls_context*)FUNC_7(VAR_5, sizeof(*VAR_6));
    VAR_6->is_close = 0;
    const char* VAR_7 = FUNC_6(VAR_5, 1, "nil");
    struct ssl_ctx* VAR_8 = FUNC_0(VAR_5, 2);
    FUNC_9(VAR_5, 2);
    FUNC_12(VAR_5, -2);

    if(FUNC_13(VAR_7, "client") == 0) {
        FUNC_1(VAR_5, VAR_6, VAR_8);
    }else if(FUNC_13(VAR_7, "server") == 0) {
        FUNC_2(VAR_5, VAR_6, VAR_8);
    } else {
        FUNC_3(VAR_5, "invalid method:%s e.g[server, client]", VAR_7);
    }

    if(FUNC_5(VAR_5, "_TLS_CONTEXT_METATABLE_")) {
        luaL_Reg VAR_9[] = {
            {"close", VAR_0},
            {"finished", VAR_1},
            {"handshake", VAR_2},
            {"read", VAR_3},
            {"write", VAR_4},
            {((void*)0), ((void*)0)},
        };
        FUNC_4(VAR_5, VAR_9);
        FUNC_10(VAR_5, -2, "__index");
        FUNC_8(VAR_5, VAR_0);
        FUNC_10(VAR_5, -2, "__gc");
    }
    FUNC_11(VAR_5, -2);
    return 1;
}
