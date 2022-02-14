
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {scalar_t__ is_close; } ;
typedef int lua_State ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static struct tls_context *
FUNC_2(lua_State* VAR_0, int VAR_1) {
    struct tls_context* VAR_2 = (struct tls_context*)FUNC_1(VAR_0, VAR_1);
    if(!VAR_2) {
        FUNC_0(VAR_0, "need tls context");
    }
    if(VAR_2->is_close) {
        FUNC_0(VAR_0, "context is closed");
    }
    return VAR_2;
}
