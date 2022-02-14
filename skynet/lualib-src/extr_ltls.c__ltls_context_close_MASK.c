
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int is_close; int * out_bio; int * in_bio; int * ssl; } ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 struct tls_context* FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(lua_State* VAR_0) {
    struct tls_context* VAR_1 = FUNC_1(VAR_0, 1);
    if(!VAR_1->is_close) {
        FUNC_0(VAR_1->ssl);
        VAR_1->ssl = ((void*)0);
        VAR_1->in_bio = ((void*)0);
        VAR_1->out_bio = ((void*)0);
        VAR_1->is_close = 1;
    }
    return 0;
}
