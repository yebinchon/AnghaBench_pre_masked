
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_9__ {int len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_7__ {int data; int len; } ;
struct TYPE_8__ {scalar_t__ nelts; TYPE_4__** elts; } ;
struct TYPE_10__ {TYPE_1__ id; TYPE_2__ rec; } ;
typedef TYPE_4__ ngx_rtmp_record_app_conf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

ngx_uint_t
FUNC_1(ngx_rtmp_record_app_conf_t *VAR_1, ngx_str_t *VAR_2)
{
    ngx_rtmp_record_app_conf_t **VAR_3, *VAR_4;
    ngx_uint_t VAR_5;

    VAR_3 = VAR_1->rec.elts;

    for (VAR_5 = 0; VAR_5 < VAR_1->rec.nelts; ++VAR_5, ++VAR_3) {
        VAR_4 = *VAR_3;

        if (VAR_4->id.len == VAR_2->len &&
            FUNC_0(VAR_4->id.data, VAR_2->data, VAR_2->len) == 0)
        {
            return VAR_5;
        }
    }

    return VAR_0;
}
