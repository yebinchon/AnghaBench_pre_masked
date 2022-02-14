
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_9__ {int * s6_addr; } ;
struct sockaddr_in6 {TYPE_1__ sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct in6_addr {int dummy; } ;
typedef int ngx_int_t ;
struct TYPE_13__ {int len; int valid; int * data; int not_found; int no_cacheable; } ;
typedef TYPE_5__ ngx_http_variable_value_t ;
struct TYPE_14__ {TYPE_4__* connection; } ;
typedef TYPE_6__ ngx_http_request_t ;
typedef int in_addr_t ;
struct TYPE_10__ {int len; int * data; } ;
struct TYPE_12__ {TYPE_3__* sockaddr; TYPE_2__ addr_text; } ;
struct TYPE_11__ {int sa_family; } ;




 int VAR_0 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_request_t *VAR_1,
    ngx_http_variable_value_t *VAR_2, uintptr_t VAR_3)
{
    struct sockaddr_in *VAR_4;




    switch (VAR_1->connection->sockaddr->sa_family) {
    default:
        VAR_4 = (struct sockaddr_in *) VAR_1->connection->sockaddr;

        VAR_2->len = sizeof(in_addr_t);
        VAR_2->valid = 1;
        VAR_2->no_cacheable = 0;
        VAR_2->not_found = 0;
        VAR_2->data = (u_char *) &VAR_4->sin_addr;

        break;
    }

    return VAR_0;
}
