
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lwan_response {int mime_type; } ;
struct lwan_request {TYPE_1__* conn; } ;
struct lwan_lua_state {int L; } ;
struct lwan_lua_priv {int default_type; } ;
struct cache {int dummy; } ;
typedef int lua_State ;
typedef int lua_Integer ;
typedef enum lwan_http_status { ____Placeholder_lwan_http_status } lwan_http_status ;
struct TYPE_2__ {int coro; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct cache*,int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,struct lwan_request*) ;
 struct cache* FUNC_4 (struct lwan_lua_priv*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,struct lwan_request*) ;
 int FUNC_11 (char*,int ) ;
 int * FUNC_12 (int ,int ) ;

__attribute__((used)) static enum lwan_http_status FUNC_13(struct lwan_request *VAR_4,
                                                struct lwan_response *VAR_5,
                                                void *VAR_6)
{
    struct lwan_lua_priv *VAR_7 = VAR_6;

    struct cache *VAR_8 = FUNC_4(VAR_7);
    if (FUNC_0(!VAR_8))
        return VAR_1;

    struct lwan_lua_state *VAR_9 =
        (struct lwan_lua_state *)FUNC_1(
            VAR_8, VAR_4->conn->coro, "");
    if (FUNC_0(!VAR_9))
        return VAR_2;

    lua_State *VAR_10 = FUNC_12(VAR_9->L, VAR_4->conn->coro);
    if (FUNC_0(!VAR_10))
        return VAR_1;

    if (FUNC_0(!FUNC_3(VAR_10, VAR_4)))
        return VAR_2;

    int VAR_11 = 1;
    FUNC_10(VAR_10, VAR_4);
    VAR_5->mime_type = VAR_7->default_type;
    while (1) {
        switch (FUNC_7(VAR_10, VAR_11)) {
        case 128:
            FUNC_2(VAR_4->conn->coro, VAR_0);
            VAR_11 = 0;
            break;
        case 0:
            if (FUNC_5(VAR_10, -1))
                return VAR_3;

            if (FUNC_6(VAR_10, -1)) {
                lua_Integer VAR_12 = FUNC_8(VAR_10, -1);

                if (VAR_12 >= 100 && VAR_12 <= 999)
                    return (enum lwan_http_status)VAR_12;
            }

            return VAR_1;
        default:
            FUNC_11("Error from Lua script: %s", FUNC_9(VAR_10, -1));
            return VAR_1;
        }
    }
}
