
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; char* value; } ;
struct lwan_request {TYPE_2__* conn; TYPE_1__ url; } ;
struct ip_info {int dummy; } ;
struct TYPE_4__ {int coro; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,char const*) ;

__attribute__((used)) static struct ip_info *FUNC_2(struct lwan_request *VAR_1,
                                      const char *VAR_2)
{
    const char *VAR_3;

    if (VAR_1->url.len == 0)
        VAR_3 = VAR_2;
    else if (VAR_1->url.len < 7)
        VAR_3 = ((void*)0);
    else
        VAR_3 = VAR_1->url.value;
    if (FUNC_0(!VAR_3))
        return ((void*)0);

    return (struct ip_info *)FUNC_1(
        VAR_0, VAR_1->conn->coro, VAR_3);
}
