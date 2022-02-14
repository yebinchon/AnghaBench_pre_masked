
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_49__ TYPE_9__ ;
typedef struct TYPE_48__ TYPE_8__ ;
typedef struct TYPE_47__ TYPE_7__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_1__ ;
typedef struct TYPE_40__ TYPE_13__ ;
typedef struct TYPE_39__ TYPE_12__ ;
typedef struct TYPE_38__ TYPE_11__ ;
typedef struct TYPE_37__ TYPE_10__ ;


typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_44__ {int hash; int value; int key; } ;
typedef TYPE_4__ ngx_table_elt_t ;
struct TYPE_45__ {char* len; int data; } ;
typedef TYPE_5__ ngx_str_t ;
struct TYPE_46__ {int err; int fd; int is_directio; scalar_t__ size; int mtime; int is_file; scalar_t__ is_dir; int failed; int events; int errors; int min_uses; int valid; int directio; int read_ahead; } ;
typedef TYPE_6__ ngx_open_file_info_t ;
struct TYPE_47__ {char* action; } ;
typedef TYPE_7__ ngx_log_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_43__ {TYPE_4__* content_encoding; int headers; int last_modified_time; scalar_t__ content_length_n; int status; } ;
struct TYPE_41__ {char* data; int len; } ;
struct TYPE_48__ {int method; int gzip_vary; int root_tested; struct TYPE_48__* main; scalar_t__ header_only; int pool; TYPE_3__ headers_out; int error_page; TYPE_2__* connection; TYPE_1__ uri; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_49__ {scalar_t__ enable; } ;
typedef TYPE_9__ ngx_http_gzip_static_conf_t ;
struct TYPE_37__ {int open_file_cache; int open_file_cache_events; int open_file_cache_errors; int open_file_cache_min_uses; int open_file_cache_valid; int directio; int read_ahead; int gzip_vary; } ;
typedef TYPE_10__ ngx_http_core_loc_conf_t ;
typedef int ngx_file_t ;
struct TYPE_38__ {int * next; TYPE_12__* buf; } ;
typedef TYPE_11__ ngx_chain_t ;
struct TYPE_39__ {int in_file; int last_buf; int last_in_chain; TYPE_13__* file; scalar_t__ file_last; scalar_t__ file_pos; } ;
typedef TYPE_12__ ngx_buf_t ;
struct TYPE_42__ {TYPE_7__* log; } ;
struct TYPE_40__ {int fd; int directio; TYPE_7__* log; TYPE_5__ name; } ;


 scalar_t__ VAR_0 ;






 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_12__* FUNC_0 (int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (TYPE_8__*) ;
 void* FUNC_2 (TYPE_8__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_8__*) ;
 int VAR_14 ;
 char* FUNC_4 (TYPE_8__*,TYPE_5__*,size_t*,int) ;
 scalar_t__ FUNC_5 (TYPE_8__*,TYPE_11__*) ;
 scalar_t__ FUNC_6 (TYPE_8__*) ;
 scalar_t__ FUNC_7 (TYPE_8__*) ;
 scalar_t__ FUNC_8 (TYPE_8__*,TYPE_10__*,TYPE_5__*,TYPE_6__*) ;
 scalar_t__ FUNC_9 (TYPE_8__*) ;
 TYPE_4__* FUNC_10 (int *) ;
 int FUNC_11 (int ,TYPE_7__*,int ,char*) ;
 int FUNC_12 (int ,TYPE_7__*,int ,char*,int) ;
 int FUNC_13 (int ,TYPE_7__*,int,char*,int,...) ;
 int FUNC_14 (TYPE_6__*,int) ;
 scalar_t__ FUNC_15 (int ,TYPE_5__*,TYPE_6__*,int ) ;
 TYPE_13__* FUNC_16 (int ,int) ;
 int FUNC_17 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_18(ngx_http_request_t *VAR_15)
{
    u_char *VAR_16;
    size_t VAR_17;
    ngx_str_t VAR_18;
    ngx_int_t VAR_19;
    ngx_uint_t VAR_20;
    ngx_log_t *VAR_21;
    ngx_buf_t *VAR_22;
    ngx_chain_t VAR_23;
    ngx_table_elt_t *VAR_24;
    ngx_open_file_info_t VAR_25;
    ngx_http_core_loc_conf_t *VAR_26;
    ngx_http_gzip_static_conf_t *VAR_27;

    if (!(VAR_15->method & (VAR_2|VAR_5))) {
        return VAR_0;
    }

    if (VAR_15->uri.data[VAR_15->uri.len - 1] == '/') {
        return VAR_0;
    }

    VAR_27 = FUNC_2(VAR_15, VAR_14);

    if (VAR_27->enable == VAR_3) {
        return VAR_0;
    }

    if (VAR_27->enable == VAR_4) {
        VAR_19 = FUNC_3(VAR_15);

    } else {

        VAR_19 = VAR_12;
    }

    VAR_26 = FUNC_2(VAR_15, VAR_13);

    if (!VAR_26->gzip_vary && VAR_19 != VAR_12) {
        return VAR_0;
    }

    VAR_21 = VAR_15->connection->log;

    VAR_16 = FUNC_4(VAR_15, &VAR_18, &VAR_17, sizeof(".gz") - 1);
    if (VAR_16 == ((void*)0)) {
        return VAR_6;
    }

    *VAR_16++ = '.';
    *VAR_16++ = 'g';
    *VAR_16++ = 'z';
    *VAR_16 = '\0';

    VAR_18.len = VAR_16 - VAR_18.data;

    FUNC_12(VAR_10, VAR_21, 0,
                   "http filename: \"%s\"", VAR_18.data);

    FUNC_14(&VAR_25, sizeof(ngx_open_file_info_t));

    VAR_25.read_ahead = VAR_26->read_ahead;
    VAR_25.directio = VAR_26->directio;
    VAR_25.valid = VAR_26->open_file_cache_valid;
    VAR_25.min_uses = VAR_26->open_file_cache_min_uses;
    VAR_25.errors = VAR_26->open_file_cache_errors;
    VAR_25.events = VAR_26->open_file_cache_events;

    if (FUNC_8(VAR_15, VAR_26, &VAR_18, &VAR_25) != VAR_12) {
        return VAR_6;
    }

    if (FUNC_15(VAR_26->open_file_cache, &VAR_18, &VAR_25, VAR_15->pool)
        != VAR_12)
    {
        switch (VAR_25.err) {

        case 0:
            return VAR_6;

        case 129:
        case 128:
        case 130:

            return VAR_0;

        case 133:





            VAR_20 = VAR_11;
            break;

        default:

            VAR_20 = VAR_9;
            break;
        }

        FUNC_13(VAR_20, VAR_21, VAR_25.err,
                      "%s \"%s\" failed", VAR_25.failed, VAR_18.data);

        return VAR_0;
    }

    if (VAR_27->enable == VAR_4) {
        VAR_15->gzip_vary = 1;

        if (VAR_19 != VAR_12) {
            return VAR_0;
        }
    }

    FUNC_12(VAR_10, VAR_21, 0, "http static fd: %d", VAR_25.fd);

    if (VAR_25.is_dir) {
        FUNC_11(VAR_10, VAR_21, 0, "http dir");
        return VAR_0;
    }



    if (!VAR_25.is_file) {
        FUNC_13(VAR_9, VAR_21, 0,
                      "\"%s\" is not a regular file", VAR_18.data);

        return VAR_7;
    }



    VAR_15->root_tested = !VAR_15->error_page;

    VAR_19 = FUNC_1(VAR_15);

    if (VAR_19 != VAR_12) {
        return VAR_19;
    }

    VAR_21->action = "sending response to client";

    VAR_15->headers_out.status = VAR_8;
    VAR_15->headers_out.content_length_n = VAR_25.size;
    VAR_15->headers_out.last_modified_time = VAR_25.mtime;

    if (FUNC_9(VAR_15) != VAR_12) {
        return VAR_6;
    }

    if (FUNC_7(VAR_15) != VAR_12) {
        return VAR_6;
    }

    VAR_24 = FUNC_10(&VAR_15->headers_out.headers);
    if (VAR_24 == ((void*)0)) {
        return VAR_6;
    }

    VAR_24->hash = 1;
    FUNC_17(&VAR_24->key, "Content-Encoding");
    FUNC_17(&VAR_24->value, "gzip");
    VAR_15->headers_out.content_encoding = VAR_24;



    VAR_22 = FUNC_0(VAR_15->pool);
    if (VAR_22 == ((void*)0)) {
        return VAR_6;
    }

    VAR_22->file = FUNC_16(VAR_15->pool, sizeof(ngx_file_t));
    if (VAR_22->file == ((void*)0)) {
        return VAR_6;
    }

    VAR_19 = FUNC_6(VAR_15);

    if (VAR_19 == VAR_1 || VAR_19 > VAR_12 || VAR_15->header_only) {
        return VAR_19;
    }

    VAR_22->file_pos = 0;
    VAR_22->file_last = VAR_25.size;

    VAR_22->in_file = VAR_22->file_last ? 1 : 0;
    VAR_22->last_buf = (VAR_15 == VAR_15->main) ? 1 : 0;
    VAR_22->last_in_chain = 1;

    VAR_22->file->fd = VAR_25.fd;
    VAR_22->file->name = VAR_18;
    VAR_22->file->log = VAR_21;
    VAR_22->file->directio = VAR_25.is_directio;

    VAR_23.buf = VAR_22;
    VAR_23.next = ((void*)0);

    return FUNC_5(VAR_15, &VAR_23);
}
