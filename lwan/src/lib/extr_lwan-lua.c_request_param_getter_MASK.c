
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct lwan_request lwan_request ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*) ;
 char* FUNC_2 (int *,int) ;
 struct lwan_request* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_0,
                                const char *(*VAR_1)(struct lwan_request *VAR_2,
                                                      const char *VAR_3))
{
    struct lwan_request *VAR_4 = FUNC_3(VAR_0);
    const char *VAR_5 = FUNC_2(VAR_0, -1);

    const char *VAR_6 = VAR_1(VAR_4, VAR_5);
    if (!VAR_6)
        FUNC_0(VAR_0);
    else
        FUNC_1(VAR_0, VAR_6);

    return 1;
}
