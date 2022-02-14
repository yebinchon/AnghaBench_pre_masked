
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_18__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
typedef int ngx_uint_t ;
struct TYPE_19__ {int auto_pushed; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_20__ {int naddrs; TYPE_5__* addrs; } ;
typedef TYPE_4__ ngx_rtmp_port_t ;
struct TYPE_22__ {scalar_t__ proxy_protocol; } ;
struct TYPE_21__ {TYPE_7__ conf; int addr; int addr6; } ;
typedef TYPE_5__ ngx_rtmp_in_addr_t ;
typedef TYPE_5__ ngx_rtmp_in6_addr_t ;
typedef TYPE_7__ ngx_rtmp_addr_conf_t ;
typedef int ngx_int_t ;
struct TYPE_23__ {int addr_text; int number; int log; struct sockaddr* local_sockaddr; TYPE_1__* listening; } ;
typedef TYPE_8__ ngx_connection_t ;
struct TYPE_17__ {TYPE_4__* servers; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_8__*,int *,int ) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_8__*,TYPE_7__*) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_3__*) ;

void
FUNC_7(ngx_connection_t *VAR_3)
{
    ngx_uint_t VAR_4;
    ngx_rtmp_port_t *VAR_5;
    struct sockaddr *VAR_6;
    struct sockaddr_in *VAR_7;
    ngx_rtmp_in_addr_t *VAR_8;
    ngx_rtmp_session_t *VAR_9;
    ngx_rtmp_addr_conf_t *VAR_10;
    ngx_int_t VAR_11;





    ++VAR_2;





    VAR_5 = VAR_3->listening->servers;
    VAR_11 = 0;

    if (VAR_5->naddrs > 1) {
        if (FUNC_0(VAR_3, ((void*)0), 0) != VAR_1) {
            FUNC_3(VAR_3);
            return;
        }

        VAR_6 = VAR_3->local_sockaddr;

        switch (VAR_6->sa_family) {
        case 128:
            VAR_11 = 1;


        default:
            VAR_7 = (struct sockaddr_in *) VAR_6;

            VAR_8 = VAR_5->addrs;



            for (VAR_4 = 0; VAR_4 < VAR_5->naddrs - 1; VAR_4++) {
                if (VAR_8[VAR_4].addr == VAR_7->sin_addr.s_addr) {
                    break;
                }
            }

            VAR_10 = &VAR_8[VAR_4].conf;

            break;
        }

    } else {
        switch (VAR_3->local_sockaddr->sa_family) {
        case 128:
            VAR_11 = 1;


        default:
            VAR_8 = VAR_5->addrs;
            VAR_10 = &VAR_8[0].conf;
            break;
        }
    }

    FUNC_1(VAR_0, VAR_3->log, 0, "*%ui client connected '%V'",
                  VAR_3->number, &VAR_3->addr_text);

    VAR_9 = FUNC_5(VAR_3, VAR_10);
    if (VAR_9 == ((void*)0)) {
        return;
    }




    VAR_9->auto_pushed = VAR_11;

    if (VAR_10->proxy_protocol) {
        FUNC_6(VAR_9);

    } else {
        FUNC_4(VAR_9);
    }
}
