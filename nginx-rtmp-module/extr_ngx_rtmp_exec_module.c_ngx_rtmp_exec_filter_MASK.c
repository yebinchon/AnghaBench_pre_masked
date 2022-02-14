
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_8__ {size_t len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_rtmp_session_t ;
struct TYPE_9__ {int name; } ;
typedef TYPE_3__ ngx_rtmp_exec_ctx_t ;
struct TYPE_7__ {scalar_t__ nelts; TYPE_2__* elts; } ;
struct TYPE_10__ {TYPE_1__ names; } ;
typedef TYPE_4__ ngx_rtmp_exec_conf_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int *,int ) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_session_t *VAR_3, ngx_rtmp_exec_conf_t *VAR_4)
{
    size_t VAR_5;
    ngx_str_t *VAR_6;
    ngx_uint_t VAR_7;
    ngx_rtmp_exec_ctx_t *VAR_8;

    if (VAR_4->names.nelts == 0) {
        return VAR_1;
    }

    VAR_8 = FUNC_0(VAR_3, VAR_2);

    VAR_5 = FUNC_1(VAR_8->name);

    VAR_6 = VAR_4->names.elts;
    for (VAR_7 = 0; VAR_7 < VAR_4->names.nelts; VAR_7++, VAR_3++) {
        if (VAR_6->len == VAR_5 && FUNC_2(VAR_6->data, VAR_8->name, VAR_5) == 0) {
            return VAR_1;
        }
    }

    return VAR_0;
}
