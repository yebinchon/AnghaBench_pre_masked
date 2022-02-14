
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef int u_char ;
struct TYPE_15__ {int data; int len; } ;
struct TYPE_18__ {int default_port; int uri_part; TYPE_11__ url; scalar_t__ err; } ;
typedef TYPE_2__ ngx_url_t ;
struct TYPE_19__ {int data; int len; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_20__ {TYPE_2__* url; TYPE_3__* root; } ;
typedef TYPE_4__ ngx_rtmp_play_entry_t ;
struct TYPE_16__ {scalar_t__ nalloc; } ;
struct TYPE_21__ {TYPE_13__ entries; } ;
typedef TYPE_5__ ngx_rtmp_play_app_conf_t ;
struct TYPE_22__ {int pool; TYPE_1__* args; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_17__ {size_t nelts; TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_13__*,int ,int,int) ;
 TYPE_4__** FUNC_1 (TYPE_13__*) ;
 int FUNC_2 (int ,TYPE_6__*,int ,char*,scalar_t__,TYPE_11__*) ;
 TYPE_3__* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*) ;
 void* FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int *,int) ;

__attribute__((used)) static char *
FUNC_7(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    ngx_rtmp_play_app_conf_t *VAR_7 = VAR_6;

    ngx_rtmp_play_entry_t *VAR_8, **VAR_9;
    ngx_str_t VAR_10;
    ngx_url_t *VAR_11;
    size_t VAR_12, VAR_13;
    ngx_str_t *VAR_14;

    if (VAR_7->entries.nalloc == 0 &&
        FUNC_0(&VAR_7->entries, VAR_4->pool, 1, sizeof(void *)) != VAR_3)
    {
        return VAR_0;
    }

    VAR_14 = VAR_4->args->elts;

    for (VAR_13 = 1; VAR_13 < VAR_4->args->nelts; ++VAR_13) {

        VAR_9 = FUNC_1(&VAR_7->entries);
        if (VAR_9 == ((void*)0)) {
            return VAR_0;
        }

        VAR_8 = FUNC_5(VAR_4->pool, sizeof(ngx_rtmp_play_entry_t));
        if (VAR_8 == ((void*)0)) {
            return VAR_0;
        }

        *VAR_9 = VAR_8;

        if (FUNC_6(VAR_14[VAR_13].data, (u_char *) "http://", 7)) {



            VAR_8->root = FUNC_3(VAR_4->pool, sizeof(ngx_str_t));
            if (VAR_8->root == ((void*)0)) {
                return VAR_0;
            }

            *VAR_8->root = VAR_14[VAR_13];

            continue;
        }



        VAR_10 = VAR_14[VAR_13];

        VAR_12 = sizeof("http://") - 1;

        VAR_10.data += VAR_12;
        VAR_10.len -= VAR_12;

        VAR_11 = FUNC_5(VAR_4->pool, sizeof(ngx_url_t));
        if (VAR_11 == ((void*)0)) {
            return VAR_0;
        }

        VAR_11->url.len = VAR_10.len;
        VAR_11->url.data = VAR_10.data;
        VAR_11->default_port = 80;
        VAR_11->uri_part = 1;

        if (FUNC_4(VAR_4->pool, VAR_11) != VAR_3) {
            if (VAR_11->err) {
                FUNC_2(VAR_2, VAR_4, 0,
                        "%s in url \"%V\"", VAR_11->err, &VAR_11->url);
            }
            return VAR_0;
        }

        VAR_8->url = VAR_11;
    }

    return VAR_1;
}
