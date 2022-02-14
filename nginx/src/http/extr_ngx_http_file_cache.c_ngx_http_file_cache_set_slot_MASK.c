
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_22__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef char u_char ;
typedef int time_t ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
typedef size_t ngx_uint_t ;
struct TYPE_28__ {int len; char* data; } ;
typedef TYPE_5__ ngx_str_t ;
typedef int ngx_path_t ;
typedef void* ngx_msec_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_29__ {size_t use_temp_path; int inactive; scalar_t__ max_size; TYPE_9__* shm_zone; TYPE_22__* path; void* manager_threshold; void* manager_sleep; scalar_t__ manager_files; void* loader_threshold; void* loader_sleep; scalar_t__ loader_files; } ;
typedef TYPE_6__ ngx_http_file_cache_t ;
struct TYPE_30__ {TYPE_4__* conf_file; TYPE_1__* args; int cycle; int pool; } ;
typedef TYPE_7__ ngx_conf_t ;
struct TYPE_31__ {int offset; int post; TYPE_5__ name; } ;
typedef TYPE_8__ ngx_command_t ;
typedef int ngx_array_t ;
struct TYPE_32__ {TYPE_6__* data; int init; } ;
struct TYPE_25__ {int data; } ;
struct TYPE_26__ {TYPE_2__ name; } ;
struct TYPE_27__ {int line; TYPE_3__ file; } ;
struct TYPE_24__ {int len; int line; int conf_file; TYPE_6__* data; int loader; int manager; scalar_t__* level; TYPE_5__ name; } ;
struct TYPE_23__ {size_t nelts; TYPE_5__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_7__*,TYPE_22__**) ;
 TYPE_6__** FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int ,TYPE_5__*,int ) ;
 int FUNC_4 (int ,TYPE_7__*,int ,char*,TYPE_5__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;
 void* FUNC_7 (TYPE_5__*,int) ;
 void* FUNC_8 (int ,int) ;
 TYPE_9__* FUNC_9 (TYPE_7__*,TYPE_5__*,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (char*,char) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;

char *
FUNC_13(ngx_conf_t *VAR_11, ngx_command_t *VAR_12, void *VAR_13)
{
    char *VAR_14 = VAR_13;

    off_t VAR_15;
    u_char *VAR_16, *VAR_17;
    time_t VAR_18;
    ssize_t VAR_19;
    ngx_str_t VAR_20, VAR_21, *VAR_22;
    ngx_int_t VAR_23, VAR_24;
    ngx_msec_t VAR_25, VAR_26, VAR_27,
                            VAR_28;
    ngx_uint_t VAR_29, VAR_30, VAR_31;
    ngx_array_t *VAR_32;
    ngx_http_file_cache_t *VAR_33, **VAR_34;

    VAR_33 = FUNC_8(VAR_11->pool, sizeof(ngx_http_file_cache_t));
    if (VAR_33 == ((void*)0)) {
        return VAR_0;
    }

    VAR_33->path = FUNC_8(VAR_11->pool, sizeof(ngx_path_t));
    if (VAR_33->path == ((void*)0)) {
        return VAR_0;
    }

    VAR_31 = 1;

    VAR_18 = 600;

    VAR_23 = 100;
    VAR_25 = 50;
    VAR_27 = 200;

    VAR_24 = 100;
    VAR_26 = 50;
    VAR_28 = 200;

    VAR_21.len = 0;
    VAR_19 = 0;
    VAR_15 = VAR_4;

    VAR_22 = VAR_11->args->elts;

    VAR_33->path->name = VAR_22[1];

    if (VAR_33->path->name.data[VAR_33->path->name.len - 1] == '/') {
        VAR_33->path->name.len--;
    }

    if (FUNC_3(VAR_11->cycle, &VAR_33->path->name, 0) != VAR_6) {
        return VAR_0;
    }

    for (VAR_29 = 2; VAR_29 < VAR_11->args->nelts; VAR_29++) {

        if (FUNC_12(VAR_22[VAR_29].data, "levels=", 7) == 0) {

            VAR_17 = VAR_22[VAR_29].data + 7;
            VAR_16 = VAR_22[VAR_29].data + VAR_22[VAR_29].len;

            for (VAR_30 = 0; VAR_30 < VAR_5 && VAR_17 < VAR_16; VAR_30++) {

                if (*VAR_17 > '0' && *VAR_17 < '3') {

                    VAR_33->path->level[VAR_30] = *VAR_17++ - '0';
                    VAR_33->path->len += VAR_33->path->level[VAR_30] + 1;

                    if (VAR_17 == VAR_16) {
                        break;
                    }

                    if (*VAR_17++ == ':' && VAR_30 < VAR_5 - 1 && VAR_17 < VAR_16) {
                        continue;
                    }

                    goto invalid_levels;
                }

                goto invalid_levels;
            }

            if (VAR_33->path->len < 10 + VAR_5) {
                continue;
            }

        invalid_levels:

            FUNC_4(VAR_3, VAR_11, 0,
                               "invalid \"levels\" \"%V\"", &VAR_22[VAR_29]);
            return VAR_0;
        }

        if (FUNC_12(VAR_22[VAR_29].data, "use_temp_path=", 14) == 0) {

            if (FUNC_11(&VAR_22[VAR_29].data[14], "on") == 0) {
                VAR_31 = 1;

            } else if (FUNC_11(&VAR_22[VAR_29].data[14], "off") == 0) {
                VAR_31 = 0;

            } else {
                FUNC_4(VAR_3, VAR_11, 0,
                                   "invalid use_temp_path value \"%V\", "
                                   "it must be \"on\" or \"off\"",
                                   &VAR_22[VAR_29]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_12(VAR_22[VAR_29].data, "keys_zone=", 10) == 0) {

            VAR_21.data = VAR_22[VAR_29].data + 10;

            VAR_17 = (u_char *) FUNC_10(VAR_21.data, ':');

            if (VAR_17 == ((void*)0)) {
                FUNC_4(VAR_3, VAR_11, 0,
                                   "invalid keys zone size \"%V\"", &VAR_22[VAR_29]);
                return VAR_0;
            }

            VAR_21.len = VAR_17 - VAR_21.data;

            VAR_20.data = VAR_17 + 1;
            VAR_20.len = VAR_22[VAR_29].data + VAR_22[VAR_29].len - VAR_20.data;

            VAR_19 = FUNC_6(&VAR_20);

            if (VAR_19 == VAR_2) {
                FUNC_4(VAR_3, VAR_11, 0,
                                   "invalid keys zone size \"%V\"", &VAR_22[VAR_29]);
                return VAR_0;
            }

            if (VAR_19 < (ssize_t) (2 * VAR_10)) {
                FUNC_4(VAR_3, VAR_11, 0,
                                   "keys zone \"%V\" is too small", &VAR_22[VAR_29]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_12(VAR_22[VAR_29].data, "inactive=", 9) == 0) {

            VAR_20.len = VAR_22[VAR_29].len - 9;
            VAR_20.data = VAR_22[VAR_29].data + 9;

            VAR_18 = FUNC_7(&VAR_20, 1);
            if (VAR_18 == (time_t) VAR_2) {
                FUNC_4(VAR_3, VAR_11, 0,
                                   "invalid inactive value \"%V\"", &VAR_22[VAR_29]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_12(VAR_22[VAR_29].data, "max_size=", 9) == 0) {

            VAR_20.len = VAR_22[VAR_29].len - 9;
            VAR_20.data = VAR_22[VAR_29].data + 9;

            VAR_15 = FUNC_5(&VAR_20);
            if (VAR_15 < 0) {
                FUNC_4(VAR_3, VAR_11, 0,
                                   "invalid max_size value \"%V\"", &VAR_22[VAR_29]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_12(VAR_22[VAR_29].data, "loader_files=", 13) == 0) {

            VAR_23 = FUNC_2(VAR_22[VAR_29].data + 13, VAR_22[VAR_29].len - 13);
            if (VAR_23 == VAR_2) {
                FUNC_4(VAR_3, VAR_11, 0,
                           "invalid loader_files value \"%V\"", &VAR_22[VAR_29]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_12(VAR_22[VAR_29].data, "loader_sleep=", 13) == 0) {

            VAR_20.len = VAR_22[VAR_29].len - 13;
            VAR_20.data = VAR_22[VAR_29].data + 13;

            VAR_25 = FUNC_7(&VAR_20, 0);
            if (VAR_25 == (ngx_msec_t) VAR_2) {
                FUNC_4(VAR_3, VAR_11, 0,
                           "invalid loader_sleep value \"%V\"", &VAR_22[VAR_29]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_12(VAR_22[VAR_29].data, "loader_threshold=", 17) == 0) {

            VAR_20.len = VAR_22[VAR_29].len - 17;
            VAR_20.data = VAR_22[VAR_29].data + 17;

            VAR_27 = FUNC_7(&VAR_20, 0);
            if (VAR_27 == (ngx_msec_t) VAR_2) {
                FUNC_4(VAR_3, VAR_11, 0,
                           "invalid loader_threshold value \"%V\"", &VAR_22[VAR_29]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_12(VAR_22[VAR_29].data, "manager_files=", 14) == 0) {

            VAR_24 = FUNC_2(VAR_22[VAR_29].data + 14, VAR_22[VAR_29].len - 14);
            if (VAR_24 == VAR_2) {
                FUNC_4(VAR_3, VAR_11, 0,
                           "invalid manager_files value \"%V\"", &VAR_22[VAR_29]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_12(VAR_22[VAR_29].data, "manager_sleep=", 14) == 0) {

            VAR_20.len = VAR_22[VAR_29].len - 14;
            VAR_20.data = VAR_22[VAR_29].data + 14;

            VAR_26 = FUNC_7(&VAR_20, 0);
            if (VAR_26 == (ngx_msec_t) VAR_2) {
                FUNC_4(VAR_3, VAR_11, 0,
                           "invalid manager_sleep value \"%V\"", &VAR_22[VAR_29]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_12(VAR_22[VAR_29].data, "manager_threshold=", 18) == 0) {

            VAR_20.len = VAR_22[VAR_29].len - 18;
            VAR_20.data = VAR_22[VAR_29].data + 18;

            VAR_28 = FUNC_7(&VAR_20, 0);
            if (VAR_28 == (ngx_msec_t) VAR_2) {
                FUNC_4(VAR_3, VAR_11, 0,
                           "invalid manager_threshold value \"%V\"", &VAR_22[VAR_29]);
                return VAR_0;
            }

            continue;
        }

        FUNC_4(VAR_3, VAR_11, 0,
                           "invalid parameter \"%V\"", &VAR_22[VAR_29]);
        return VAR_0;
    }

    if (VAR_21.len == 0 || VAR_19 == 0) {
        FUNC_4(VAR_3, VAR_11, 0,
                           "\"%V\" must have \"keys_zone\" parameter",
                           &VAR_12->name);
        return VAR_0;
    }

    VAR_33->path->manager = VAR_9;
    VAR_33->path->loader = VAR_8;
    VAR_33->path->data = VAR_33;
    VAR_33->path->conf_file = VAR_11->conf_file->file.name.data;
    VAR_33->path->line = VAR_11->conf_file->line;
    VAR_33->loader_files = VAR_23;
    VAR_33->loader_sleep = VAR_25;
    VAR_33->loader_threshold = VAR_27;
    VAR_33->manager_files = VAR_24;
    VAR_33->manager_sleep = VAR_26;
    VAR_33->manager_threshold = VAR_28;

    if (FUNC_0(VAR_11, &VAR_33->path) != VAR_6) {
        return VAR_0;
    }

    VAR_33->shm_zone = FUNC_9(VAR_11, &VAR_21, VAR_19, VAR_12->post);
    if (VAR_33->shm_zone == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_33->shm_zone->data) {
        FUNC_4(VAR_3, VAR_11, 0,
                           "duplicate zone \"%V\"", &VAR_21);
        return VAR_0;
    }


    VAR_33->shm_zone->init = VAR_7;
    VAR_33->shm_zone->data = VAR_33;

    VAR_33->use_temp_path = VAR_31;

    VAR_33->inactive = VAR_18;
    VAR_33->max_size = VAR_15;

    VAR_32 = (ngx_array_t *) (VAR_14 + VAR_12->offset);

    VAR_34 = FUNC_1(VAR_32);
    if (VAR_34 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_34 = VAR_33;

    return VAR_1;
}
