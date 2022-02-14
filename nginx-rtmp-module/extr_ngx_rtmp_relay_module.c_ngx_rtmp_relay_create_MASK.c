
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_14__ {int len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_rtmp_session_t ;
typedef int ngx_rtmp_relay_target_t ;
struct TYPE_13__ {int data; int len; } ;
struct TYPE_15__ {struct TYPE_15__* publish; struct TYPE_15__* play; int session; struct TYPE_15__* next; TYPE_1__ name; } ;
typedef TYPE_3__ ngx_rtmp_relay_ctx_t ;
typedef TYPE_3__* (* ngx_rtmp_relay_create_ctx_pt ) (int *,TYPE_2__*,int *) ;
struct TYPE_16__ {size_t nbuckets; TYPE_3__** ctx; } ;
typedef TYPE_6__ ngx_rtmp_relay_app_conf_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_6__* FUNC_3 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_rtmp_session_t *VAR_3, ngx_str_t *VAR_4,
        ngx_rtmp_relay_target_t *VAR_5,
        ngx_rtmp_relay_create_ctx_pt VAR_6,
        ngx_rtmp_relay_create_ctx_pt VAR_7)
{
    ngx_rtmp_relay_app_conf_t *VAR_8;
    ngx_rtmp_relay_ctx_t *VAR_9, *VAR_10, **VAR_11;
    ngx_uint_t VAR_12;


    VAR_8 = FUNC_3(VAR_3, VAR_2);
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_10 = VAR_7(VAR_3, VAR_4, VAR_5);
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    VAR_12 = FUNC_0(VAR_4->data, VAR_4->len);
    VAR_11 = &VAR_8->ctx[VAR_12 % VAR_8->nbuckets];
    for (; *VAR_11; VAR_11 = &(*VAR_11)->next) {
        if ((*VAR_11)->name.len == VAR_4->len
            && !FUNC_1(VAR_4->data, (*VAR_11)->name.data,
                VAR_4->len))
        {
            break;
        }
    }

    if (*VAR_11) {
        VAR_10->publish = (*VAR_11)->publish;
        VAR_10->next = (*VAR_11)->play;
        (*VAR_11)->play = VAR_10;
        return VAR_1;
    }

    VAR_9 = VAR_6(VAR_3, VAR_4, VAR_5);
    if (VAR_9 == ((void*)0)) {
        FUNC_2(VAR_10->session);
        return VAR_0;
    }

    VAR_9->publish = VAR_9;
    VAR_9->play = VAR_10;
    VAR_10->publish = VAR_9;
    *VAR_11 = VAR_9;

    return VAR_1;
}
