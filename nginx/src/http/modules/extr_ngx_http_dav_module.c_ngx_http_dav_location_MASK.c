
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


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_15__ {TYPE_7__* location; int headers; } ;
struct TYPE_13__ {int len; int data; } ;
struct TYPE_16__ {TYPE_4__ headers_out; TYPE_2__ uri; int pool; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_12__ {int len; } ;
struct TYPE_17__ {TYPE_1__ root; int * root_lengths; int alias; } ;
typedef TYPE_6__ ngx_http_core_loc_conf_t ;
struct TYPE_14__ {int * data; int len; } ;
struct TYPE_18__ {int hash; TYPE_3__ value; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_2 ;
 TYPE_6__* FUNC_1 (TYPE_5__*,int ) ;
 TYPE_7__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_3, u_char *VAR_4)
{
    u_char *VAR_5;
    ngx_http_core_loc_conf_t *VAR_6;

    VAR_3->headers_out.location = FUNC_2(&VAR_3->headers_out.headers);
    if (VAR_3->headers_out.location == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = FUNC_1(VAR_3, VAR_2);

    if (!VAR_6->alias && VAR_6->root_lengths == ((void*)0)) {
        VAR_5 = VAR_4 + VAR_6->root.len;

    } else {
        VAR_5 = FUNC_4(VAR_3->pool, VAR_3->uri.len);
        if (VAR_5 == ((void*)0)) {
            FUNC_0(VAR_3);
            return VAR_0;
        }

        FUNC_3(VAR_5, VAR_3->uri.data, VAR_3->uri.len);
    }

    VAR_3->headers_out.location->hash = 1;
    FUNC_5(&VAR_3->headers_out.location->key, "Location");
    VAR_3->headers_out.location->value.len = VAR_3->uri.len;
    VAR_3->headers_out.location->value.data = VAR_5;

    return VAR_1;
}
