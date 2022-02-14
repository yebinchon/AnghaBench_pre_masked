
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_17__ {int log; int fd; } ;
struct TYPE_20__ {char* warn; int access; int offset; int clean; int persistent; int pool; int path; TYPE_16__ file; int log_level; } ;
typedef TYPE_3__ ngx_temp_file_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {int pool; scalar_t__ request_body_file_group_access; int request_body_in_clean_file; int request_body_in_persistent_file; int request_body_file_log_level; TYPE_1__* connection; TYPE_5__* request_body; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_22__ {TYPE_7__* bufs; TYPE_3__* temp_file; } ;
typedef TYPE_5__ ngx_http_request_body_t ;
struct TYPE_23__ {int client_body_temp_path; } ;
typedef TYPE_6__ ngx_http_core_loc_conf_t ;
struct TYPE_24__ {struct TYPE_24__* next; TYPE_2__* buf; } ;
typedef TYPE_7__ ngx_chain_t ;
struct TYPE_19__ {int last; int pos; } ;
struct TYPE_18__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_16__*,int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,TYPE_7__*) ;
 int VAR_4 ;
 TYPE_6__* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_7__*) ;
 TYPE_3__* FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_7__*) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_5)
{
    ssize_t VAR_6;
    ngx_chain_t *VAR_7, *VAR_8;
    ngx_temp_file_t *VAR_9;
    ngx_http_request_body_t *VAR_10;
    ngx_http_core_loc_conf_t *VAR_11;

    VAR_10 = VAR_5->request_body;

    FUNC_3(VAR_2, VAR_5->connection->log, 0,
                   "http write client request body, bufs %p", VAR_10->bufs);

    if (VAR_10->temp_file == ((void*)0)) {
        VAR_9 = FUNC_4(VAR_5->pool, sizeof(ngx_temp_file_t));
        if (VAR_9 == ((void*)0)) {
            return VAR_0;
        }

        VAR_11 = FUNC_2(VAR_5, VAR_4);

        VAR_9->file.fd = VAR_1;
        VAR_9->file.log = VAR_5->connection->log;
        VAR_9->path = VAR_11->client_body_temp_path;
        VAR_9->pool = VAR_5->pool;
        VAR_9->warn = "a client request body is buffered to a temporary file";
        VAR_9->log_level = VAR_5->request_body_file_log_level;
        VAR_9->persistent = VAR_5->request_body_in_persistent_file;
        VAR_9->clean = VAR_5->request_body_in_clean_file;

        if (VAR_5->request_body_file_group_access) {
            VAR_9->access = 0660;
        }

        VAR_10->temp_file = VAR_9;

        if (VAR_10->bufs == ((void*)0)) {


            if (FUNC_0(&VAR_9->file, VAR_9->path, VAR_9->pool,
                                     VAR_9->persistent, VAR_9->clean, VAR_9->access)
                != VAR_3)
            {
                return VAR_0;
            }

            return VAR_3;
        }
    }

    if (VAR_10->bufs == ((void*)0)) {
        return VAR_3;
    }

    VAR_6 = FUNC_5(VAR_10->temp_file, VAR_10->bufs);



    if (VAR_6 == VAR_0) {
        return VAR_0;
    }

    VAR_10->temp_file->offset += VAR_6;



    for (VAR_7 = VAR_10->bufs; VAR_7; ) {

        VAR_7->buf->pos = VAR_7->buf->last;

        VAR_8 = VAR_7;
        VAR_7 = VAR_7->next;
        FUNC_1(VAR_5->pool, VAR_8);
    }

    VAR_10->bufs = ((void*)0);

    return VAR_3;
}
