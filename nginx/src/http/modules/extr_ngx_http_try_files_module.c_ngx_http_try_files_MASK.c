
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_14__ {int len; char* data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {TYPE_4__* try_files; } ;
typedef TYPE_3__ ngx_http_try_files_loc_conf_t ;
struct TYPE_16__ {int test_dir; int code; TYPE_2__ name; int values; int lengths; } ;
typedef TYPE_4__ ngx_http_try_file_t ;
struct TYPE_17__ {int variables; int complete_lengths; int complete_values; int * values; int * lengths; TYPE_2__* source; TYPE_6__* cf; } ;
typedef TYPE_5__ ngx_http_script_compile_t ;
struct TYPE_18__ {TYPE_1__* args; int pool; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_13__ {int nelts; TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,TYPE_6__*,int ,char*,int,char*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_5__*,int) ;
 TYPE_4__* FUNC_5 (int ,int) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    ngx_http_try_files_loc_conf_t *VAR_8 = VAR_7;

    ngx_str_t *VAR_9;
    ngx_int_t VAR_10;
    ngx_uint_t VAR_11, VAR_12;
    ngx_http_try_file_t *VAR_13;
    ngx_http_script_compile_t VAR_14;

    if (VAR_8->try_files) {
        return "is duplicate";
    }

    VAR_13 = FUNC_5(VAR_5->pool, VAR_5->args->nelts * sizeof(ngx_http_try_file_t));
    if (VAR_13 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->try_files = VAR_13;

    VAR_9 = VAR_5->args->elts;

    for (VAR_11 = 0; VAR_11 < VAR_5->args->nelts - 1; VAR_11++) {

        VAR_13[VAR_11].name = VAR_9[VAR_11 + 1];

        if (VAR_13[VAR_11].name.len > 0
            && VAR_13[VAR_11].name.data[VAR_13[VAR_11].name.len - 1] == '/'
            && VAR_11 + 2 < VAR_5->args->nelts)
        {
            VAR_13[VAR_11].test_dir = 1;
            VAR_13[VAR_11].name.len--;
            VAR_13[VAR_11].name.data[VAR_13[VAR_11].name.len] = '\0';
        }

        VAR_12 = FUNC_3(&VAR_13[VAR_11].name);

        if (VAR_12) {
            FUNC_4(&VAR_14, sizeof(ngx_http_script_compile_t));

            VAR_14.cf = VAR_5;
            VAR_14.source = &VAR_13[VAR_11].name;
            VAR_14.lengths = &VAR_13[VAR_11].lengths;
            VAR_14.values = &VAR_13[VAR_11].values;
            VAR_14.variables = VAR_12;
            VAR_14.complete_lengths = 1;
            VAR_14.complete_values = 1;

            if (FUNC_2(&VAR_14) != VAR_4) {
                return VAR_0;
            }

        } else {

            VAR_13[VAR_11].name.len++;
        }
    }

    if (VAR_13[VAR_11 - 1].name.data[0] == '=') {

        VAR_10 = FUNC_0(VAR_13[VAR_11 - 1].name.data + 1, VAR_13[VAR_11 - 1].name.len - 2);

        if (VAR_10 == VAR_2 || VAR_10 > 999) {
            FUNC_1(VAR_3, VAR_5, 0,
                               "invalid code \"%*s\"",
                               VAR_13[VAR_11 - 1].name.len - 1, VAR_13[VAR_11 - 1].name.data);
            return VAR_0;
        }

        VAR_13[VAR_11].code = VAR_10;
    }

    return VAR_1;
}
