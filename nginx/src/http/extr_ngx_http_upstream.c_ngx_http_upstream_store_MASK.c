
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_24__ ;
typedef struct TYPE_30__ TYPE_21__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef int time_t ;
struct TYPE_30__ {int data; } ;
struct TYPE_31__ {scalar_t__ fd; TYPE_21__ name; int log; } ;
struct TYPE_39__ {int persistent; TYPE_24__ file; int access; int clean; int pool; int path; } ;
typedef TYPE_9__ ngx_temp_file_t ;
struct TYPE_25__ {int data; int len; } ;
typedef TYPE_10__ ngx_str_t ;
struct TYPE_34__ {TYPE_3__* last_modified; } ;
struct TYPE_26__ {scalar_t__ store; TYPE_7__* conf; TYPE_4__ headers_in; TYPE_1__* pipe; } ;
typedef TYPE_11__ ngx_http_upstream_t ;
struct TYPE_27__ {TYPE_8__* connection; int pool; } ;
typedef TYPE_12__ ngx_http_request_t ;
struct TYPE_28__ {int time; int create_path; int delete_file; scalar_t__ fd; int log; int path_access; int access; } ;
typedef TYPE_13__ ngx_ext_rename_file_t ;
struct TYPE_38__ {int log; } ;
struct TYPE_37__ {TYPE_6__* store_values; TYPE_5__* store_lengths; int store_access; int temp_path; } ;
struct TYPE_36__ {int elts; } ;
struct TYPE_35__ {int elts; } ;
struct TYPE_32__ {int len; int data; } ;
struct TYPE_33__ {TYPE_2__ value; } ;
struct TYPE_29__ {TYPE_9__* temp_file; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_24__*,int ,int ,int,int ,int ) ;
 int FUNC_1 (TYPE_21__*,TYPE_10__*,TYPE_13__*) ;
 int * FUNC_2 (TYPE_12__*,TYPE_10__*,size_t*,int ) ;
 int * FUNC_3 (TYPE_12__*,TYPE_10__*,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,char*,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_9__* FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(ngx_http_request_t *VAR_4, ngx_http_upstream_t *VAR_5)
{
    size_t VAR_6;
    time_t VAR_7;
    ngx_str_t VAR_8;
    ngx_temp_file_t *VAR_9;
    ngx_ext_rename_file_t VAR_10;

    VAR_9 = VAR_5->pipe->temp_file;

    if (VAR_9->file.fd == VAR_1) {



        VAR_9 = FUNC_6(VAR_4->pool, sizeof(ngx_temp_file_t));
        if (VAR_9 == ((void*)0)) {
            return;
        }

        VAR_9->file.fd = VAR_1;
        VAR_9->file.log = VAR_4->connection->log;
        VAR_9->path = VAR_5->conf->temp_path;
        VAR_9->pool = VAR_4->pool;
        VAR_9->persistent = 1;

        if (FUNC_0(&VAR_9->file, VAR_9->path, VAR_9->pool,
                                 VAR_9->persistent, VAR_9->clean, VAR_9->access)
            != VAR_3)
        {
            return;
        }

        VAR_5->pipe->temp_file = VAR_9;
    }

    VAR_10.access = VAR_5->conf->store_access;
    VAR_10.path_access = VAR_5->conf->store_access;
    VAR_10.time = -1;
    VAR_10.create_path = 1;
    VAR_10.delete_file = 1;
    VAR_10.log = VAR_4->connection->log;

    if (VAR_5->headers_in.last_modified) {

        VAR_7 = FUNC_5(VAR_5->headers_in.last_modified->value.data,
                                 VAR_5->headers_in.last_modified->value.len);

        if (VAR_7 != VAR_0) {
            VAR_10.time = VAR_7;
            VAR_10.fd = VAR_9->file.fd;
        }
    }

    if (VAR_5->conf->store_lengths == ((void*)0)) {

        if (FUNC_2(VAR_4, &VAR_8, &VAR_6, 0) == ((void*)0)) {
            return;
        }

    } else {
        if (FUNC_3(VAR_4, &VAR_8, VAR_5->conf->store_lengths->elts, 0,
                                VAR_5->conf->store_values->elts)
            == ((void*)0))
        {
            return;
        }
    }

    VAR_8.len--;

    FUNC_4(VAR_2, VAR_4->connection->log, 0,
                   "upstream stores \"%s\" to \"%s\"",
                   VAR_9->file.name.data, VAR_8.data);

    (void) FUNC_1(&VAR_9->file.name, &VAR_8, &VAR_10);

    VAR_5->store = 0;
}
