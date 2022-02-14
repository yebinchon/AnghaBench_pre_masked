
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_31__ {int s_addr; } ;
struct sockaddr_in {TYPE_6__ sin_addr; } ;
struct TYPE_32__ {int mask; int addr; } ;
struct TYPE_27__ {int s6_addr; } ;
struct TYPE_28__ {TYPE_2__ mask; int addr; } ;
struct TYPE_33__ {TYPE_7__ in; TYPE_3__ in6; } ;
struct TYPE_23__ {int data; } ;
struct TYPE_34__ {int family; int naddrs; TYPE_8__ u; TYPE_5__* addrs; TYPE_10__ host; int err; } ;
typedef TYPE_9__ ngx_url_t ;
typedef size_t ngx_uint_t ;
typedef TYPE_10__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_24__ {int * from; } ;
typedef TYPE_11__ ngx_http_realip_loc_conf_t ;
struct TYPE_25__ {int pool; TYPE_1__* args; } ;
typedef TYPE_12__ ngx_conf_t ;
typedef int ngx_command_t ;
typedef TYPE_9__ ngx_cidr_t ;
struct TYPE_30__ {TYPE_4__* sockaddr; } ;
struct TYPE_29__ {int sa_family; } ;
struct TYPE_26__ {TYPE_10__* elts; } ;



 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_9__* FUNC_1 (int *) ;
 TYPE_9__* FUNC_2 (int *,int) ;
 int FUNC_3 (int ,TYPE_12__*,int ,char*,TYPE_10__*,...) ;
 scalar_t__ FUNC_4 (int ,TYPE_9__*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (TYPE_9__*,int) ;
 scalar_t__ FUNC_7 (TYPE_10__*,TYPE_9__*) ;
 scalar_t__ FUNC_8 (int ,char*) ;

__attribute__((used)) static char *
FUNC_9(ngx_conf_t *VAR_8, ngx_command_t *VAR_9, void *VAR_10)
{
    ngx_http_realip_loc_conf_t *VAR_11 = VAR_10;

    ngx_int_t VAR_12;
    ngx_str_t *VAR_13;
    ngx_url_t VAR_14;
    ngx_cidr_t VAR_15, *VAR_16;
    ngx_uint_t VAR_17;
    struct sockaddr_in *VAR_18;




    VAR_13 = VAR_8->args->elts;

    if (VAR_11->from == ((void*)0)) {
        VAR_11->from = FUNC_0(VAR_8->pool, 2,
                                      sizeof(ngx_cidr_t));
        if (VAR_11->from == ((void*)0)) {
            return VAR_1;
        }
    }
    VAR_12 = FUNC_7(&VAR_13[1], &VAR_15);

    if (VAR_12 != VAR_4) {
        if (VAR_12 == VAR_3) {
            FUNC_3(VAR_6, VAR_8, 0,
                               "low address bits of %V are meaningless",
                               &VAR_13[1]);
        }

        VAR_16 = FUNC_1(VAR_11->from);
        if (VAR_16 == ((void*)0)) {
            return VAR_1;
        }

        *VAR_16 = VAR_15;

        return VAR_2;
    }

    FUNC_6(&VAR_14, sizeof(ngx_url_t));
    VAR_14.host = VAR_13[1];

    if (FUNC_4(VAR_8->pool, &VAR_14) != VAR_7) {
        if (VAR_14.err) {
            FUNC_3(VAR_5, VAR_8, 0,
                               "%s in set_real_ip_from \"%V\"",
                               VAR_14.err, &VAR_14.host);
        }

        return VAR_1;
    }

    VAR_16 = FUNC_2(VAR_11->from, VAR_14.naddrs);
    if (VAR_16 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_6(VAR_16, VAR_14.naddrs * sizeof(ngx_cidr_t));

    for (VAR_17 = 0; VAR_17 < VAR_14.naddrs; VAR_17++) {
        VAR_16[VAR_17].family = VAR_14.addrs[VAR_17].sockaddr->sa_family;

        switch (VAR_16[VAR_17].family) {
        default:
            VAR_18 = (struct sockaddr_in *) VAR_14.addrs[VAR_17].sockaddr;
            VAR_16[VAR_17].u.in.addr = VAR_18->sin_addr.s_addr;
            VAR_16[VAR_17].u.in.mask = 0xffffffff;
            break;
        }
    }

    return VAR_2;
}
