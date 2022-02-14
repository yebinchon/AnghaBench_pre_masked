
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_request {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int ) ;
 struct lwan_request** FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;

void FUNC_3(lua_State *VAR_1, struct lwan_request *VAR_2)
{
    struct lwan_request **VAR_3 =
        FUNC_1(VAR_1, sizeof(struct lwan_request *));

    *VAR_3 = VAR_2;
    FUNC_0(VAR_1, VAR_0);
    FUNC_2(VAR_1, -2);
}
