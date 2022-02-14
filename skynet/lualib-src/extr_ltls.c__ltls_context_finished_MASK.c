
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int ssl; } ;
typedef int lua_State ;


 int FUNC_0 (int ) ;
 struct tls_context* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(lua_State* VAR_0) {
    struct tls_context* VAR_1 = FUNC_1(VAR_0, 1);
    int VAR_2 = FUNC_0(VAR_1->ssl);
    FUNC_2(VAR_0, VAR_2);
    return 1;
}
