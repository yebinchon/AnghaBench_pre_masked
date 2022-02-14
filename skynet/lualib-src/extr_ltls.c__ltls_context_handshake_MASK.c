
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int ssl; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,struct tls_context*) ;
 int FUNC_4 (int *,struct tls_context*,char const*,size_t) ;
 struct tls_context* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*,...) ;
 char* FUNC_7 (int *,int,size_t*) ;

__attribute__((used)) static int
FUNC_8(lua_State* VAR_2) {
    struct tls_context* VAR_3 = FUNC_5(VAR_2, 1);
    size_t VAR_4 = 0;
    const char* VAR_5 = FUNC_7(VAR_2, 2, &VAR_4);


    if(FUNC_2(VAR_3->ssl)) {
        FUNC_6(VAR_2, "handshake is finished");
    }


    if(VAR_4 > 0 && VAR_5 != ((void*)0)) {
        FUNC_4(VAR_2, VAR_3, VAR_5, VAR_4);
    }


    if(!FUNC_2(VAR_3->ssl)) {
        int VAR_6 = FUNC_0(VAR_3->ssl);
        if(VAR_6 == 1) {
            return 0;
        } else if (VAR_6 < 0) {
            int VAR_7 = FUNC_1(VAR_3->ssl, VAR_6);
            if(VAR_7 == VAR_0 || VAR_7 == VAR_1) {
                int VAR_8 = FUNC_3(VAR_2, VAR_3);
                if(VAR_8>0) {
                    return 1;
                }
            } else {
                FUNC_6(VAR_2, "SSL_do_handshake error:%d ret:%d", VAR_7, VAR_6);
            }
        } else {
            int VAR_9 = FUNC_1(VAR_3->ssl, VAR_6);
            FUNC_6(VAR_2, "SSL_do_handshake error:%d ret:%d", VAR_9, VAR_6);
        }
    }
    return 0;
}
