
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_core_srv_conf_t ;
struct TYPE_12__ {size_t nelts; int ** elts; } ;
struct TYPE_9__ {int addr_text; } ;
struct TYPE_10__ {TYPE_7__ servers; TYPE_1__ opt; } ;
typedef TYPE_2__ ngx_http_conf_addr_t ;
struct TYPE_11__ {int temp_pool; } ;
typedef TYPE_3__ ngx_conf_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_7__*,int ,int,int) ;
 int ** FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int ,TYPE_3__*,int ,char*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_conf_t *VAR_3, ngx_http_core_srv_conf_t *VAR_4,
    ngx_http_conf_addr_t *VAR_5)
{
    ngx_uint_t VAR_6;
    ngx_http_core_srv_conf_t **VAR_7;

    if (VAR_5->servers.elts == ((void*)0)) {
        if (FUNC_0(&VAR_5->servers, VAR_3->temp_pool, 4,
                           sizeof(ngx_http_core_srv_conf_t *))
            != VAR_2)
        {
            return VAR_0;
        }

    } else {
        VAR_7 = VAR_5->servers.elts;
        for (VAR_6 = 0; VAR_6 < VAR_5->servers.nelts; VAR_6++) {
            if (VAR_7[VAR_6] == VAR_4) {
                FUNC_2(VAR_1, VAR_3, 0,
                                   "a duplicate listen %V",
                                   &VAR_5->opt.addr_text);
                return VAR_0;
            }
        }
    }

    VAR_7 = FUNC_1(&VAR_5->servers);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_7 = VAR_4;

    return VAR_2;
}
