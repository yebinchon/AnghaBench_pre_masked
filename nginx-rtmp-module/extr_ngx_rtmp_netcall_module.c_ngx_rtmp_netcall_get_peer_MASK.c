
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_6__ {TYPE_1__* url; } ;
typedef TYPE_2__ ngx_rtmp_netcall_session_t ;
struct TYPE_7__ {int * name; int socklen; struct sockaddr* sockaddr; } ;
typedef TYPE_3__ ngx_peer_connection_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {int host; int socklen; int sockaddr; } ;


 int VAR_0 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_peer_connection_t *VAR_1, void *VAR_2)
{
    ngx_rtmp_netcall_session_t *VAR_3 = VAR_2;

    VAR_1->sockaddr =(struct sockaddr *)&VAR_3->url->sockaddr;
    VAR_1->socklen = VAR_3->url->socklen;
    VAR_1->name = &VAR_3->url->host;

    return VAR_0;
}
