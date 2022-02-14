
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
typedef size_t ngx_uint_t ;
struct TYPE_15__ {int naddrs; TYPE_5__* addrs; } ;
typedef TYPE_4__ ngx_stream_port_t ;
struct TYPE_13__ {int addr_text; int proxy_protocol; int ssl; int ctx; } ;
struct TYPE_16__ {TYPE_2__ conf; int addr; } ;
typedef TYPE_5__ ngx_stream_in_addr_t ;
struct TYPE_14__ {int addr_text; int proxy_protocol; int ssl; int ctx; scalar_t__ sockaddr; } ;
struct TYPE_17__ {TYPE_3__ opt; } ;
typedef TYPE_6__ ngx_stream_conf_addr_t ;
typedef int ngx_int_t ;
struct TYPE_18__ {int pool; } ;
typedef TYPE_7__ ngx_conf_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_conf_t *VAR_2, ngx_stream_port_t *VAR_3,
    ngx_stream_conf_addr_t *VAR_4)
{
    ngx_uint_t VAR_5;
    struct sockaddr_in *VAR_6;
    ngx_stream_in_addr_t *VAR_7;

    VAR_3->addrs = FUNC_0(VAR_2->pool,
                                VAR_3->naddrs * sizeof(ngx_stream_in_addr_t));
    if (VAR_3->addrs == ((void*)0)) {
        return VAR_0;
    }

    VAR_7 = VAR_3->addrs;

    for (VAR_5 = 0; VAR_5 < VAR_3->naddrs; VAR_5++) {

        VAR_6 = (struct sockaddr_in *) VAR_4[VAR_5].opt.sockaddr;
        VAR_7[VAR_5].addr = VAR_6->sin_addr.s_addr;

        VAR_7[VAR_5].conf.ctx = VAR_4[VAR_5].opt.ctx;



        VAR_7[VAR_5].conf.proxy_protocol = VAR_4[VAR_5].opt.proxy_protocol;
        VAR_7[VAR_5].conf.addr_text = VAR_4[VAR_5].opt.addr_text;
    }

    return VAR_1;
}
