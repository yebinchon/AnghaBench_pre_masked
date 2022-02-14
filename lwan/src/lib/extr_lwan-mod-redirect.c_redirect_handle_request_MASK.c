
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct redirect_priv {int code; int * to; } ;
struct lwan_response {struct lwan_key_value* headers; } ;
struct lwan_request {TYPE_1__* conn; } ;
struct lwan_key_value {char* key; int * value; } ;
typedef enum lwan_http_status { ____Placeholder_lwan_http_status } lwan_http_status ;
struct TYPE_2__ {int coro; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct lwan_key_value* FUNC_1 (int ,int) ;

__attribute__((used)) static enum lwan_http_status
FUNC_2(struct lwan_request *VAR_1,
                        struct lwan_response *VAR_2,
                        void *VAR_3)
{
    struct redirect_priv *VAR_4 = VAR_3;
    struct lwan_key_value *VAR_5;

    VAR_5 = FUNC_1(VAR_1->conn->coro, sizeof(*VAR_5) * 2);
    if (FUNC_0(!VAR_5))
        return VAR_0;

    VAR_5[0].key = "Location";
    VAR_5[0].value = VAR_4->to;
    VAR_5[1].key = ((void*)0);
    VAR_5[1].value = ((void*)0);

    VAR_2->headers = VAR_5;

    return VAR_4->code;
}
