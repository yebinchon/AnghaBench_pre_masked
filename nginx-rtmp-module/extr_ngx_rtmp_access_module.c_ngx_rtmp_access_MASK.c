
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_14__ {int* s6_addr; } ;
struct sockaddr_in6 {TYPE_9__ sin6_addr; } ;
struct TYPE_10__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
typedef int ngx_uint_t ;
struct TYPE_13__ {TYPE_3__* connection; } ;
typedef TYPE_4__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_access_app_conf_t ;
typedef int ngx_int_t ;
typedef int in_addr_t ;
struct TYPE_12__ {TYPE_2__* sockaddr; int log; } ;
struct TYPE_11__ {int sa_family; } ;




 int FUNC_0 (TYPE_9__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int*,int ) ;
 int VAR_3 ;
 int * FUNC_5 (TYPE_4__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_rtmp_session_t *VAR_4, ngx_uint_t VAR_5)
{
    struct sockaddr_in *VAR_6;
    ngx_rtmp_access_app_conf_t *VAR_7;






    VAR_7 = FUNC_5(VAR_4, VAR_3);
    if (VAR_7 == ((void*)0)) {
        FUNC_2(VAR_1, VAR_4->connection->log, 0,
                       "access: NULL app conf");
        return VAR_0;
    }


    if (VAR_4->connection->sockaddr == ((void*)0)) {
        return VAR_2;
    }

    switch (VAR_4->connection->sockaddr->sa_family) {

    case 129:
        VAR_6 = (struct sockaddr_in *) VAR_4->connection->sockaddr;
        return FUNC_3(VAR_4, VAR_6->sin_addr.s_addr, VAR_5);
    }

    return VAR_2;
}
