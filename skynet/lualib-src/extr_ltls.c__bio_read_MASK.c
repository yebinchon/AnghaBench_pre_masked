
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int out_bio; } ;
typedef int outbuff ;
typedef int lua_State ;
typedef int luaL_Buffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(lua_State* VAR_0, struct tls_context* VAR_1) {
    char VAR_2[4096];
    int VAR_3 = 0;
    int VAR_4 = 0;
    int VAR_5 = FUNC_0(VAR_1->out_bio);
    if(VAR_5 >0) {
        luaL_Buffer VAR_6;
        FUNC_3(VAR_0, &VAR_6);
        while(VAR_5 > 0) {
            VAR_4 = FUNC_1(VAR_1->out_bio, VAR_2, sizeof(VAR_2));

            if(VAR_4 <= 0) {
                FUNC_4(VAR_0, "BIO_read error:%d", VAR_4);
            }else if(VAR_4 <= sizeof(VAR_2)) {
                VAR_3 += VAR_4;
                FUNC_2(&VAR_6, (const char*)VAR_2, VAR_4);
            }else {
                FUNC_4(VAR_0, "invalid BIO_read:%d", VAR_4);
            }
            VAR_5 = FUNC_0(VAR_1->out_bio);
        }
        if(VAR_3>0) {
            FUNC_5(&VAR_6);
        }
    }
    return VAR_3;
}
