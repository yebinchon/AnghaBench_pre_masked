
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_18__ {scalar_t__ nelts; } ;
struct TYPE_19__ {TYPE_4__ connections; } ;
typedef TYPE_5__ ngx_resolver_t ;
struct TYPE_17__ {scalar_t__ s_addr; } ;
struct TYPE_14__ {TYPE_3__ sin_addr; int sin_family; } ;
struct TYPE_16__ {int socklen; struct sockaddr* sockaddr; } ;
struct TYPE_15__ {int len; int data; } ;
struct TYPE_20__ {int naddrs; int quick; TYPE_5__* resolver; TYPE_12__ sin; TYPE_2__ addr; TYPE_2__* addrs; int state; TYPE_1__ name; } ;
typedef TYPE_6__ ngx_resolver_ctx_t ;
typedef scalar_t__ in_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_6__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_12__*,int) ;
 TYPE_6__* FUNC_2 (TYPE_5__*,int) ;

ngx_resolver_ctx_t *
FUNC_3(ngx_resolver_t *VAR_4, ngx_resolver_ctx_t *VAR_5)
{
    in_addr_t VAR_6;
    ngx_resolver_ctx_t *VAR_7;

    if (VAR_5) {
        VAR_6 = FUNC_0(VAR_5->name.data, VAR_5->name.len);

        if (VAR_6 != VAR_1) {
            VAR_5->resolver = VAR_4;
            VAR_5->state = VAR_3;
            VAR_5->naddrs = 1;
            VAR_5->addrs = &VAR_5->addr;
            VAR_5->addr.sockaddr = (struct sockaddr *) &VAR_5->sin;
            VAR_5->addr.socklen = sizeof(struct sockaddr_in);
            FUNC_1(&VAR_5->sin, sizeof(struct sockaddr_in));
            VAR_5->sin.sin_family = VAR_0;
            VAR_5->sin.sin_addr.s_addr = VAR_6;
            VAR_5->quick = 1;

            return VAR_5;
        }
    }

    if (VAR_4->connections.nelts == 0) {
        return VAR_2;
    }

    VAR_7 = FUNC_2(VAR_4, sizeof(ngx_resolver_ctx_t));

    if (VAR_7) {
        VAR_7->resolver = VAR_4;
    }

    return VAR_7;
}
