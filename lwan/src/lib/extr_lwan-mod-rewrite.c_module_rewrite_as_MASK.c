
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; int len; } ;
struct lwan_request {int flags; TYPE_2__ url; TYPE_2__ original_url; TYPE_1__* conn; } ;
typedef enum lwan_http_status { ____Placeholder_lwan_http_status } lwan_http_status ;
struct TYPE_3__ {int coro; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static enum lwan_http_status FUNC_3(struct lwan_request *VAR_3,
                                               const char *VAR_4)
{
    VAR_3->url.value = FUNC_1(VAR_3->conn->coro, VAR_4);

    if (FUNC_0(!VAR_3->url.value))
        return VAR_0;

    VAR_3->url.len = FUNC_2(VAR_3->url.value);
    VAR_3->original_url = VAR_3->url;
    VAR_3->flags |= VAR_2;

    return VAR_1;
}
