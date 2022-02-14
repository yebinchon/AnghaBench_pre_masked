
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_core_main_conf_t ;
struct TYPE_11__ {size_t nelts; TYPE_5__* elts; } ;
struct TYPE_14__ {TYPE_1__ addrs; } ;
typedef TYPE_4__ ngx_http_conf_port_t ;
struct TYPE_12__ {int nelts; } ;
struct TYPE_15__ {TYPE_3__* default_server; TYPE_2__ servers; } ;
typedef TYPE_5__ ngx_http_conf_addr_t ;
typedef int ngx_conf_t ;
struct TYPE_16__ {size_t nelts; TYPE_4__* elts; } ;
typedef TYPE_6__ ngx_array_t ;
struct TYPE_13__ {scalar_t__ captures; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_1 (int *,int *,TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,size_t,int,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_conf_t *VAR_3, ngx_http_core_main_conf_t *VAR_4,
    ngx_array_t *VAR_5)
{
    ngx_uint_t VAR_6, VAR_7;
    ngx_http_conf_port_t *VAR_8;
    ngx_http_conf_addr_t *VAR_9;

    if (VAR_5 == ((void*)0)) {
        return VAR_1;
    }

    VAR_8 = VAR_5->elts;
    for (VAR_6 = 0; VAR_6 < VAR_5->nelts; VAR_6++) {

        FUNC_2(VAR_8[VAR_6].addrs.elts, (size_t) VAR_8[VAR_6].addrs.nelts,
                 sizeof(ngx_http_conf_addr_t), VAR_2);






        VAR_9 = VAR_8[VAR_6].addrs.elts;
        for (VAR_7 = 0; VAR_7 < VAR_8[VAR_6].addrs.nelts; VAR_7++) {

            if (VAR_9[VAR_7].servers.nelts > 1



               )
            {
                if (FUNC_1(VAR_3, VAR_4, &VAR_9[VAR_7]) != VAR_1) {
                    return VAR_0;
                }
            }
        }

        if (FUNC_0(VAR_3, &VAR_8[VAR_6]) != VAR_1) {
            return VAR_0;
        }
    }

    return VAR_1;
}
