
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int ssl; } ;
typedef int lua_State ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (int *,struct tls_context*) ;
 struct tls_context* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,int,size_t*) ;

__attribute__((used)) static int
FUNC_7(lua_State* VAR_0) {
    struct tls_context* VAR_1 = FUNC_3(VAR_0, 1);
    size_t VAR_2 = 0;
    char* VAR_3 = (char*)FUNC_6(VAR_0, 2, &VAR_2);

    while(VAR_2 > 0) {
        int VAR_4 = FUNC_1(VAR_1->ssl, VAR_3, VAR_2);
        if(VAR_4 <= 0) {
            int VAR_5 = FUNC_0(VAR_1->ssl, VAR_4);
            FUNC_4(VAR_0, "SSL_write error:%d", VAR_5);
        }else if(VAR_4 <= VAR_2) {
            VAR_3 += VAR_4;
            VAR_2 -= VAR_4;
        }else {
            FUNC_4(VAR_0, "invalid SSL_write:%d", VAR_4);
        }
    }

    int VAR_6 = FUNC_2(VAR_0, VAR_1);
    if(VAR_6 <= 0) {
        FUNC_5(VAR_0, "");
    }
    return 1;
}
