
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_12__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_13__ {int mask; int addr; size_t flags; int deny; } ;
typedef TYPE_4__ ngx_rtmp_access_rule_t ;
struct TYPE_10__ {size_t nelts; TYPE_4__* elts; } ;
struct TYPE_14__ {TYPE_1__ rules; } ;
typedef TYPE_5__ ngx_rtmp_access_app_conf_t ;
typedef int ngx_int_t ;
typedef int in_addr_t ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int,int,int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_2 ;
 TYPE_5__* FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_session_t *VAR_3, in_addr_t VAR_4, ngx_uint_t VAR_5)
{
    ngx_uint_t VAR_6;
    ngx_rtmp_access_rule_t *VAR_7;
    ngx_rtmp_access_app_conf_t *VAR_8;

    VAR_8 = FUNC_2(VAR_3, VAR_2);

    VAR_7 = VAR_8->rules.elts;
    for (VAR_6 = 0; VAR_6 < VAR_8->rules.nelts; VAR_6++) {

        FUNC_0(VAR_0, VAR_3->connection->log, 0,
                       "access: %08XD %08XD %08XD",
                       VAR_4, VAR_7[VAR_6].mask, VAR_7[VAR_6].addr);

        if ((VAR_4 & VAR_7[VAR_6].mask) == VAR_7[VAR_6].addr && (VAR_5 & VAR_7[VAR_6].flags)) {
            return FUNC_1(VAR_3, VAR_7[VAR_6].deny);
        }
    }

    return VAR_1;
}
