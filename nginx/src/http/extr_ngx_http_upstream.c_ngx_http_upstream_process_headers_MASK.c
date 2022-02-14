
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_57__ TYPE_9__ ;
typedef struct TYPE_56__ TYPE_8__ ;
typedef struct TYPE_55__ TYPE_7__ ;
typedef struct TYPE_54__ TYPE_6__ ;
typedef struct TYPE_53__ TYPE_5__ ;
typedef struct TYPE_52__ TYPE_4__ ;
typedef struct TYPE_51__ TYPE_3__ ;
typedef struct TYPE_50__ TYPE_2__ ;
typedef struct TYPE_49__ TYPE_1__ ;
typedef struct TYPE_48__ TYPE_17__ ;
typedef struct TYPE_47__ TYPE_16__ ;
typedef struct TYPE_46__ TYPE_15__ ;
typedef struct TYPE_45__ TYPE_14__ ;
typedef struct TYPE_44__ TYPE_13__ ;
typedef struct TYPE_43__ TYPE_12__ ;
typedef struct TYPE_42__ TYPE_11__ ;
typedef struct TYPE_41__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
struct TYPE_51__ {int len; } ;
struct TYPE_42__ {TYPE_3__ key; int lowcase_key; int hash; } ;
typedef TYPE_11__ ngx_table_elt_t ;
struct TYPE_43__ {char* data; } ;
typedef TYPE_12__ ngx_str_t ;
struct TYPE_44__ {size_t nelts; TYPE_11__* elts; struct TYPE_44__* next; } ;
typedef TYPE_13__ ngx_list_part_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_50__ {TYPE_13__ part; } ;
struct TYPE_57__ {int content_length_n; int status_line; int status_n; TYPE_2__ headers; TYPE_1__* x_accel_redirect; } ;
struct TYPE_45__ {int length; TYPE_10__* conf; int cacheable; TYPE_9__ headers_in; } ;
typedef TYPE_14__ ngx_http_upstream_t ;
struct TYPE_46__ {int headers_in_hash; } ;
typedef TYPE_15__ ngx_http_upstream_main_conf_t ;
struct TYPE_47__ {scalar_t__ (* copy_handler ) (TYPE_17__*,TYPE_11__*,int ) ;int conf; scalar_t__ redirect; } ;
typedef TYPE_16__ ngx_http_upstream_header_t ;
struct TYPE_56__ {int content_length_n; int status_line; int status; TYPE_7__* date; TYPE_5__* server; } ;
struct TYPE_48__ {scalar_t__ method; int disable_not_modified; int allow_ranges; int single_range; scalar_t__ cached; TYPE_8__ headers_out; int method_name; } ;
typedef TYPE_17__ ngx_http_request_t ;
struct TYPE_54__ {int * data; } ;
struct TYPE_55__ {scalar_t__ hash; TYPE_6__ value; } ;
struct TYPE_52__ {int * data; } ;
struct TYPE_53__ {scalar_t__ hash; TYPE_4__ value; } ;
struct TYPE_49__ {TYPE_12__ value; } ;
struct TYPE_41__ {int ignore_headers; scalar_t__ force_ranges; int hide_headers_hash; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_16__* FUNC_0 (int *,int ,int ,int ) ;
 int VAR_9 ;
 int FUNC_1 (TYPE_17__*,scalar_t__) ;
 TYPE_15__* FUNC_2 (TYPE_17__*,int ) ;
 int FUNC_3 (TYPE_17__*,TYPE_12__*,TYPE_12__*) ;
 int FUNC_4 (TYPE_17__*,TYPE_12__*) ;
 scalar_t__ FUNC_5 (TYPE_17__*,TYPE_12__*,TYPE_12__*,size_t*) ;
 scalar_t__ FUNC_6 (TYPE_17__*,TYPE_11__*,int ) ;
 int FUNC_7 (TYPE_17__*,TYPE_14__*,scalar_t__) ;
 int VAR_10 ;
 int FUNC_8 (TYPE_12__*) ;
 scalar_t__ FUNC_9 (TYPE_17__*,TYPE_11__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_17__*,TYPE_11__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_11(ngx_http_request_t *VAR_11, ngx_http_upstream_t *VAR_12)
{
    ngx_str_t VAR_13, VAR_14;
    ngx_uint_t VAR_15, VAR_16;
    ngx_list_part_t *VAR_17;
    ngx_table_elt_t *VAR_18;
    ngx_http_upstream_header_t *VAR_19;
    ngx_http_upstream_main_conf_t *VAR_20;

    VAR_20 = FUNC_2(VAR_11, VAR_10);

    if (VAR_12->headers_in.x_accel_redirect
        && !(VAR_12->conf->ignore_headers & VAR_7))
    {
        FUNC_7(VAR_11, VAR_12, VAR_0);

        VAR_17 = &VAR_12->headers_in.headers.part;
        VAR_18 = VAR_17->elts;

        for (VAR_15 = 0; ; VAR_15++) {

            if (VAR_15 >= VAR_17->nelts) {
                if (VAR_17->next == ((void*)0)) {
                    break;
                }

                VAR_17 = VAR_17->next;
                VAR_18 = VAR_17->elts;
                VAR_15 = 0;
            }

            VAR_19 = FUNC_0(&VAR_20->headers_in_hash, VAR_18[VAR_15].hash,
                               VAR_18[VAR_15].lowcase_key, VAR_18[VAR_15].key.len);

            if (VAR_19 && VAR_19->redirect) {
                if (VAR_19->copy_handler(VAR_11, &VAR_18[VAR_15], VAR_19->conf) != VAR_8) {
                    FUNC_1(VAR_11,
                                              VAR_4);
                    return VAR_1;
                }
            }
        }

        VAR_13 = VAR_12->headers_in.x_accel_redirect->value;

        if (VAR_13.data[0] == '@') {
            FUNC_4(VAR_11, &VAR_13);

        } else {
            FUNC_8(&VAR_14);
            VAR_16 = VAR_5;

            if (FUNC_5(VAR_11, &VAR_13, &VAR_14, &VAR_16) != VAR_8) {
                FUNC_1(VAR_11, VAR_6);
                return VAR_1;
            }

            if (VAR_11->method != VAR_3) {
                VAR_11->method = VAR_2;
                VAR_11->method_name = VAR_9;
            }

            FUNC_3(VAR_11, &VAR_13, &VAR_14);
        }

        FUNC_1(VAR_11, VAR_1);
        return VAR_1;
    }

    VAR_17 = &VAR_12->headers_in.headers.part;
    VAR_18 = VAR_17->elts;

    for (VAR_15 = 0; ; VAR_15++) {

        if (VAR_15 >= VAR_17->nelts) {
            if (VAR_17->next == ((void*)0)) {
                break;
            }

            VAR_17 = VAR_17->next;
            VAR_18 = VAR_17->elts;
            VAR_15 = 0;
        }

        if (FUNC_0(&VAR_12->conf->hide_headers_hash, VAR_18[VAR_15].hash,
                          VAR_18[VAR_15].lowcase_key, VAR_18[VAR_15].key.len))
        {
            continue;
        }

        VAR_19 = FUNC_0(&VAR_20->headers_in_hash, VAR_18[VAR_15].hash,
                           VAR_18[VAR_15].lowcase_key, VAR_18[VAR_15].key.len);

        if (VAR_19) {
            if (VAR_19->copy_handler(VAR_11, &VAR_18[VAR_15], VAR_19->conf) != VAR_8) {
                FUNC_7(VAR_11, VAR_12,
                                               VAR_4);
                return VAR_1;
            }

            continue;
        }

        if (FUNC_6(VAR_11, &VAR_18[VAR_15], 0) != VAR_8) {
            FUNC_7(VAR_11, VAR_12,
                                               VAR_4);
            return VAR_1;
        }
    }

    if (VAR_11->headers_out.server && VAR_11->headers_out.server->value.data == ((void*)0)) {
        VAR_11->headers_out.server->hash = 0;
    }

    if (VAR_11->headers_out.date && VAR_11->headers_out.date->value.data == ((void*)0)) {
        VAR_11->headers_out.date->hash = 0;
    }

    VAR_11->headers_out.status = VAR_12->headers_in.status_n;
    VAR_11->headers_out.status_line = VAR_12->headers_in.status_line;

    VAR_11->headers_out.content_length_n = VAR_12->headers_in.content_length_n;

    VAR_11->disable_not_modified = !VAR_12->cacheable;

    if (VAR_12->conf->force_ranges) {
        VAR_11->allow_ranges = 1;
        VAR_11->single_range = 1;






    }

    VAR_12->length = -1;

    return VAR_8;
}
