
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int ssl; } ;
typedef int outbuff ;
typedef int lua_State ;
typedef int luaL_Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,struct tls_context*,char const*,size_t) ;
 struct tls_context* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *,int,size_t*) ;

__attribute__((used)) static int
FUNC_9(lua_State* VAR_2) {
    struct tls_context* VAR_3 = FUNC_3(VAR_2, 1);
    size_t VAR_4 = 0;
    const char* VAR_5 = FUNC_8(VAR_2, 2, &VAR_4);


    if(VAR_4>0 && VAR_5) {
        FUNC_2(VAR_2, VAR_3, VAR_5, VAR_4);
    }

    char VAR_6[4096];
    int VAR_7 = 0;
    luaL_Buffer VAR_8;
    FUNC_5(VAR_2, &VAR_8);

    do {
        VAR_7 = FUNC_1(VAR_3->ssl, VAR_6, sizeof(VAR_6));
        if(VAR_7 <= 0) {
            int VAR_9 = FUNC_0(VAR_3->ssl, VAR_7);
            if(VAR_9 == VAR_0 || VAR_9 == VAR_1) {
                break;
            }
            FUNC_6(VAR_2, "SSL_read error:%d", VAR_9);
        }else if(VAR_7 <= sizeof(VAR_6)) {
            FUNC_4(&VAR_8, VAR_6, VAR_7);
        }else {
            FUNC_6(VAR_2, "invalid SSL_read:%d", VAR_7);
        }
    }while(1);
    FUNC_7(&VAR_8);
    return 1;
}
