
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct lwan_key_value* headers; } ;
struct lwan_request {TYPE_1__ response; TYPE_2__* conn; } ;
struct lwan_key_value {char* key; int * value; } ;
typedef enum lwan_http_status { ____Placeholder_lwan_http_status } lwan_http_status ;
struct TYPE_4__ {int coro; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct lwan_key_value* FUNC_1 (int ,int) ;
 int * FUNC_2 (int ,char const*) ;

__attribute__((used)) static enum lwan_http_status FUNC_3(struct lwan_request *VAR_2,
                                                const char *VAR_3)
{
    struct lwan_key_value *VAR_4 =
        FUNC_1(VAR_2->conn->coro, sizeof(*VAR_4) * 2);

    if (FUNC_0(!VAR_4))
        return VAR_0;

    VAR_4[0].key = "Location";
    VAR_4[0].value = FUNC_2(VAR_2->conn->coro, VAR_3);
    if (FUNC_0(!VAR_4[0].value))
        return VAR_0;

    VAR_4[1].key = ((void*)0);
    VAR_4[1].value = ((void*)0);
    VAR_2->response.headers = VAR_4;

    return VAR_1;
}
