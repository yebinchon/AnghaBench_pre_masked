
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_74__ TYPE_9__ ;
typedef struct TYPE_73__ TYPE_8__ ;
typedef struct TYPE_72__ TYPE_7__ ;
typedef struct TYPE_71__ TYPE_6__ ;
typedef struct TYPE_70__ TYPE_5__ ;
typedef struct TYPE_69__ TYPE_50__ ;
typedef struct TYPE_68__ TYPE_4__ ;
typedef struct TYPE_67__ TYPE_49__ ;
typedef struct TYPE_66__ TYPE_46__ ;
typedef struct TYPE_65__ TYPE_3__ ;
typedef struct TYPE_64__ TYPE_2__ ;
typedef struct TYPE_63__ TYPE_25__ ;
typedef struct TYPE_62__ TYPE_20__ ;
typedef struct TYPE_61__ TYPE_1__ ;
typedef struct TYPE_60__ TYPE_19__ ;
typedef struct TYPE_59__ TYPE_18__ ;
typedef struct TYPE_58__ TYPE_17__ ;
typedef struct TYPE_57__ TYPE_16__ ;
typedef struct TYPE_56__ TYPE_15__ ;
typedef struct TYPE_55__ TYPE_14__ ;
typedef struct TYPE_54__ TYPE_13__ ;
typedef struct TYPE_53__ TYPE_12__ ;
typedef struct TYPE_52__ TYPE_11__ ;
typedef struct TYPE_51__ TYPE_10__ ;


typedef scalar_t__ u_short ;
typedef scalar_t__ time_t ;
typedef scalar_t__ ssize_t ;
typedef int ngx_temp_file_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_55__ {int recycled; scalar_t__ pos; scalar_t__ last; scalar_t__ start; } ;
struct TYPE_51__ {TYPE_9__* connection; } ;
struct TYPE_73__ {int tag; } ;
struct TYPE_72__ {scalar_t__ status_n; int last_modified_time; TYPE_6__* etag; } ;
struct TYPE_57__ {int header_sent; scalar_t__ (* input_filter ) (TYPE_17__*,scalar_t__) ;scalar_t__ (* input_filter_init ) (TYPE_17__*) ;scalar_t__ length; int (* read_event_handler ) (TYPE_17__*,TYPE_16__*) ;TYPE_15__* conf; TYPE_14__ buffer; int cacheable; scalar_t__ store; TYPE_10__ peer; TYPE_8__ output; TYPE_19__* pipe; TYPE_7__ headers_in; int cache_status; TYPE_17__* input_filter_ctx; TYPE_4__* state; int buffering; scalar_t__ upgrade; } ;
typedef TYPE_16__ ngx_http_upstream_t ;
struct TYPE_58__ {int limit_rate_set; int (* write_event_handler ) (TYPE_17__*) ;int pool; TYPE_46__* cache; scalar_t__ header_only; scalar_t__ limit_rate; TYPE_3__* request_body; int preserve_body; struct TYPE_58__* main; TYPE_20__* connection; scalar_t__ post_action; } ;
typedef TYPE_17__ ngx_http_request_t ;
struct TYPE_59__ {scalar_t__ aio; int send_lowat; int send_timeout; scalar_t__ aio_write; scalar_t__ tcp_nodelay; } ;
typedef TYPE_18__ ngx_http_core_loc_conf_t ;
struct TYPE_60__ {int downstream_error; int cacheable; int single_buf; int free_bufs; int cyclic_temp_file; int length; TYPE_17__* input_ctx; int send_lowat; int send_timeout; int read_timeout; TYPE_49__* buf_to_file; scalar_t__ preread_size; TYPE_50__* preread_bufs; TYPE_17__* thread_ctx; int thread_handler; int temp_file_write_size; int max_temp_file_size; TYPE_25__* temp_file; void* start_sec; int limit_rate; int log; int pool; TYPE_20__* downstream; TYPE_9__* upstream; int busy_size; int bufs; int tag; TYPE_17__* output_ctx; int output_filter; } ;
typedef TYPE_19__ ngx_event_pipe_t ;
struct TYPE_62__ {scalar_t__ sendfile; int log; } ;
typedef TYPE_20__ ngx_connection_t ;
struct TYPE_74__ {TYPE_5__* read; } ;
struct TYPE_71__ {int value; } ;
struct TYPE_70__ {scalar_t__ ready; } ;
struct TYPE_69__ {int * next; TYPE_14__* buf; } ;
struct TYPE_68__ {int response_length; } ;
struct TYPE_67__ {int temporary; scalar_t__ last; scalar_t__ pos; scalar_t__ start; } ;
struct TYPE_54__ {scalar_t__ fd; int name; } ;
struct TYPE_66__ {scalar_t__ valid_sec; int last_modified; TYPE_13__ file; TYPE_11__* file_cache; int etag; scalar_t__ body_start; scalar_t__ date; } ;
struct TYPE_65__ {TYPE_2__* temp_file; } ;
struct TYPE_61__ {scalar_t__ fd; } ;
struct TYPE_64__ {TYPE_1__ file; } ;
struct TYPE_53__ {int name; int log; scalar_t__ fd; } ;
struct TYPE_63__ {int persistent; char* warn; int log_level; TYPE_12__ file; int path; int pool; } ;
struct TYPE_56__ {int read_timeout; scalar_t__ cyclic_temp_file; int temp_file_write_size; int max_temp_file_size; int temp_path; int limit_rate; int busy_buffers_size; int bufs; int cache_valid; int no_cache; int preserve_output; } ;
struct TYPE_52__ {int path; int use_temp_path; } ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_50__* FUNC_0 (int ) ;
 TYPE_49__* FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (TYPE_17__*) ;
 int FUNC_3 (TYPE_46__*,TYPE_25__*) ;
 scalar_t__ FUNC_4 (TYPE_17__*,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 TYPE_18__* FUNC_6 (TYPE_17__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_17__*) ;
 scalar_t__ FUNC_8 (TYPE_17__*,int ) ;
 int FUNC_9 (TYPE_17__*,int ) ;
 int FUNC_10 (TYPE_17__*,TYPE_16__*,scalar_t__ const) ;
 scalar_t__ FUNC_11 (TYPE_17__*,scalar_t__) ;
 scalar_t__ FUNC_12 (TYPE_17__*) ;
 int VAR_12 ;
 int FUNC_13 (TYPE_17__*) ;
 int FUNC_14 (TYPE_17__*) ;
 int FUNC_15 (TYPE_17__*,TYPE_16__*) ;
 int FUNC_16 (TYPE_17__*,TYPE_16__*) ;
 int VAR_13 ;
 int FUNC_17 (TYPE_17__*,TYPE_16__*) ;
 int FUNC_18 (int ,int ,int ,char*,int ) ;
 TYPE_25__* FUNC_19 (int ,int) ;
 int FUNC_20 (int ,scalar_t__) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (TYPE_20__*) ;
 void* FUNC_23 () ;
 scalar_t__ FUNC_24 (TYPE_17__*) ;
 scalar_t__ FUNC_25 (TYPE_17__*,scalar_t__) ;
 scalar_t__ FUNC_26 (TYPE_17__*) ;

__attribute__((used)) static void
FUNC_27(ngx_http_request_t *VAR_14, ngx_http_upstream_t *VAR_15)
{
    ssize_t VAR_16;
    ngx_int_t VAR_17;
    ngx_event_pipe_t *VAR_18;
    ngx_connection_t *VAR_19;
    ngx_http_core_loc_conf_t *VAR_20;

    VAR_17 = FUNC_7(VAR_14);

    if (VAR_17 == 128 || VAR_17 > VAR_8 || VAR_14->post_action) {
        FUNC_10(VAR_14, VAR_15, VAR_17);
        return;
    }

    VAR_15->header_sent = 1;

    if (VAR_15->upgrade) {
        FUNC_17(VAR_14, VAR_15);
        return;
    }

    VAR_19 = VAR_14->connection;

    if (VAR_14->header_only) {

        if (!VAR_15->buffering) {
            FUNC_10(VAR_14, VAR_15, VAR_17);
            return;
        }

        if (!VAR_15->cacheable && !VAR_15->store) {
            FUNC_10(VAR_14, VAR_15, VAR_17);
            return;
        }

        VAR_15->pipe->downstream_error = 1;
    }

    if (VAR_14->request_body && VAR_14->request_body->temp_file
        && VAR_14 == VAR_14->main && !VAR_14->preserve_body
        && !VAR_15->conf->preserve_output)
    {
        FUNC_20(VAR_14->pool, VAR_14->request_body->temp_file->file.fd);
        VAR_14->request_body->temp_file->file.fd = VAR_5;
    }

    VAR_20 = FUNC_6(VAR_14, VAR_11);

    if (!VAR_15->buffering) {
        if (VAR_15->input_filter == ((void*)0)) {
            VAR_15->input_filter_init = FUNC_12;
            VAR_15->input_filter = FUNC_11;
            VAR_15->input_filter_ctx = VAR_14;
        }

        VAR_15->read_event_handler = FUNC_15;
        VAR_14->write_event_handler =
                             FUNC_14;

        VAR_14->limit_rate = 0;
        VAR_14->limit_rate_set = 1;

        if (VAR_15->input_filter_init(VAR_15->input_filter_ctx) == 128) {
            FUNC_10(VAR_14, VAR_15, 128);
            return;
        }

        if (VAR_20->tcp_nodelay && FUNC_22(VAR_19) != VAR_8) {
            FUNC_10(VAR_14, VAR_15, 128);
            return;
        }

        VAR_16 = VAR_15->buffer.last - VAR_15->buffer.pos;

        if (VAR_16) {
            VAR_15->buffer.last = VAR_15->buffer.pos;

            VAR_15->state->response_length += VAR_16;

            if (VAR_15->input_filter(VAR_15->input_filter_ctx, VAR_16) == 128) {
                FUNC_10(VAR_14, VAR_15, 128);
                return;
            }

            FUNC_14(VAR_14);

        } else {
            VAR_15->buffer.pos = VAR_15->buffer.start;
            VAR_15->buffer.last = VAR_15->buffer.start;

            if (FUNC_8(VAR_14, VAR_2) == 128) {
                FUNC_10(VAR_14, VAR_15, 128);
                return;
            }

            if (VAR_15->peer.connection->read->ready || VAR_15->length == 0) {
                FUNC_15(VAR_14, VAR_15);
            }
        }

        return;
    }
    VAR_18 = VAR_15->pipe;

    VAR_18->output_filter = VAR_12;
    VAR_18->output_ctx = VAR_14;
    VAR_18->tag = VAR_15->output.tag;
    VAR_18->bufs = VAR_15->conf->bufs;
    VAR_18->busy_size = VAR_15->conf->busy_buffers_size;
    VAR_18->upstream = VAR_15->peer.connection;
    VAR_18->downstream = VAR_19;
    VAR_18->pool = VAR_14->pool;
    VAR_18->log = VAR_19->log;
    VAR_18->limit_rate = VAR_15->conf->limit_rate;
    VAR_18->start_sec = FUNC_23();

    VAR_18->cacheable = VAR_15->cacheable || VAR_15->store;

    VAR_18->temp_file = FUNC_19(VAR_14->pool, sizeof(ngx_temp_file_t));
    if (VAR_18->temp_file == ((void*)0)) {
        FUNC_10(VAR_14, VAR_15, 128);
        return;
    }

    VAR_18->temp_file->file.fd = VAR_5;
    VAR_18->temp_file->file.log = VAR_19->log;
    VAR_18->temp_file->path = VAR_15->conf->temp_path;
    VAR_18->temp_file->pool = VAR_14->pool;

    if (VAR_18->cacheable) {
        VAR_18->temp_file->persistent = 1;
    } else {
        VAR_18->temp_file->log_level = VAR_7;
        VAR_18->temp_file->warn = "an upstream response is buffered "
                             "to a temporary file";
    }

    VAR_18->max_temp_file_size = VAR_15->conf->max_temp_file_size;
    VAR_18->temp_file_write_size = VAR_15->conf->temp_file_write_size;
    VAR_18->preread_bufs = FUNC_0(VAR_14->pool);
    if (VAR_18->preread_bufs == ((void*)0)) {
        FUNC_10(VAR_14, VAR_15, 128);
        return;
    }

    VAR_18->preread_bufs->buf = &VAR_15->buffer;
    VAR_18->preread_bufs->next = ((void*)0);
    VAR_15->buffer.recycled = 1;

    VAR_18->preread_size = VAR_15->buffer.last - VAR_15->buffer.pos;

    if (VAR_15->cacheable) {

        VAR_18->buf_to_file = FUNC_1(VAR_14->pool);
        if (VAR_18->buf_to_file == ((void*)0)) {
            FUNC_10(VAR_14, VAR_15, 128);
            return;
        }

        VAR_18->buf_to_file->start = VAR_15->buffer.start;
        VAR_18->buf_to_file->pos = VAR_15->buffer.start;
        VAR_18->buf_to_file->last = VAR_15->buffer.pos;
        VAR_18->buf_to_file->temporary = 1;
    }

    if (VAR_10 & VAR_9) {

        VAR_18->single_buf = 1;
    }


    VAR_18->free_bufs = 1;





    VAR_15->buffer.last = VAR_15->buffer.pos;

    if (VAR_15->conf->cyclic_temp_file) {







        VAR_18->cyclic_temp_file = 1;
        VAR_19->sendfile = 0;

    } else {
        VAR_18->cyclic_temp_file = 0;
    }

    VAR_18->read_timeout = VAR_15->conf->read_timeout;
    VAR_18->send_timeout = VAR_20->send_timeout;
    VAR_18->send_lowat = VAR_20->send_lowat;

    VAR_18->length = -1;

    if (VAR_15->input_filter_init
        && VAR_15->input_filter_init(VAR_18->input_ctx) != VAR_8)
    {
        FUNC_10(VAR_14, VAR_15, 128);
        return;
    }

    VAR_15->read_event_handler = FUNC_16;
    VAR_14->write_event_handler = FUNC_13;

    FUNC_16(VAR_14, VAR_15);
}
