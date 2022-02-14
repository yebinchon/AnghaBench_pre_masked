
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int in_bio; } ;
typedef int lua_State ;


 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_2(lua_State* VAR_0, struct tls_context* VAR_1, const char* VAR_2, size_t VAR_3) {
    char* VAR_4 = (char*)VAR_2;
    size_t VAR_5 = VAR_3;
    while(VAR_5 > 0) {
        int VAR_6 = FUNC_0(VAR_1->in_bio, VAR_4, VAR_5);

        if(VAR_6 <= 0) {
            FUNC_1(VAR_0, "BIO_write error:%d", VAR_6);
        }else if (VAR_6 <= VAR_5) {
            VAR_4 += VAR_6;
            VAR_5 -= VAR_6;
        }else {
            FUNC_1(VAR_0, "invalid BIO_write:%d", VAR_6);
        }
    }
}
