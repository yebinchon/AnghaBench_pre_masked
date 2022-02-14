
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {size_t default_server; size_t proxy_protocol; size_t ssl; size_t http2; int addr_text; scalar_t__ set; int socklen; int sockaddr; } ;
typedef TYPE_2__ ngx_http_listen_opt_t ;
typedef int ngx_http_core_srv_conf_t ;
struct TYPE_10__ {size_t nelts; TYPE_4__* elts; } ;
struct TYPE_12__ {TYPE_1__ addrs; } ;
typedef TYPE_3__ ngx_http_conf_port_t ;
struct TYPE_13__ {TYPE_2__ opt; int * default_server; } ;
typedef TYPE_4__ ngx_http_conf_addr_t ;
typedef int ngx_conf_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int *,int ,char*,int *) ;
 scalar_t__ FUNC_2 (int *,int *,TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,int *,TYPE_4__*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_conf_t *VAR_3, ngx_http_core_srv_conf_t *VAR_4,
    ngx_http_conf_port_t *VAR_5, ngx_http_listen_opt_t *VAR_6)
{
    ngx_uint_t VAR_7, VAR_8, VAR_9;
    ngx_http_conf_addr_t *VAR_10;
    VAR_10 = VAR_5->addrs.elts;

    for (VAR_7 = 0; VAR_7 < VAR_5->addrs.nelts; VAR_7++) {

        if (FUNC_0(VAR_6->sockaddr, VAR_6->socklen,
                             VAR_10[VAR_7].opt.sockaddr,
                             VAR_10[VAR_7].opt.socklen, 0)
            != VAR_2)
        {
            continue;
        }



        if (FUNC_3(VAR_3, VAR_4, &VAR_10[VAR_7]) != VAR_2) {
            return VAR_0;
        }


        VAR_8 = VAR_10[VAR_7].opt.default_server;

        VAR_9 = VAR_6->proxy_protocol || VAR_10[VAR_7].opt.proxy_protocol;
        if (VAR_6->set) {

            if (VAR_10[VAR_7].opt.set) {
                FUNC_1(VAR_1, VAR_3, 0,
                                   "duplicate listen options for %V",
                                   &VAR_10[VAR_7].opt.addr_text);
                return VAR_0;
            }

            VAR_10[VAR_7].opt = *VAR_6;
        }



        if (VAR_6->default_server) {

            if (VAR_8) {
                FUNC_1(VAR_1, VAR_3, 0,
                                   "a duplicate default server for %V",
                                   &VAR_10[VAR_7].opt.addr_text);
                return VAR_0;
            }

            VAR_8 = 1;
            VAR_10[VAR_7].default_server = VAR_4;
        }

        VAR_10[VAR_7].opt.default_server = VAR_8;
        VAR_10[VAR_7].opt.proxy_protocol = VAR_9;







        return VAR_2;
    }



    return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
}
