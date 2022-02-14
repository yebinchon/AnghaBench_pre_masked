
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_11__ ;
typedef struct TYPE_28__ TYPE_10__ ;


typedef char u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_34__ {scalar_t__ len; char* data; } ;
typedef TYPE_5__ ngx_str_t ;
struct TYPE_35__ {TYPE_4__* connection; } ;
typedef TYPE_6__ ngx_rtmp_session_t ;
struct TYPE_36__ {char* name; int args; scalar_t__ start; } ;
typedef TYPE_7__ ngx_rtmp_play_t ;
struct TYPE_31__ {scalar_t__ nelts; TYPE_9__** elts; } ;
struct TYPE_37__ {TYPE_2__ fmts; } ;
typedef TYPE_8__ ngx_rtmp_play_main_conf_t ;
struct TYPE_38__ {int name; TYPE_5__ sfx; TYPE_5__ pfx; } ;
typedef TYPE_9__ ngx_rtmp_play_fmt_t ;
struct TYPE_32__ {scalar_t__ fd; int log; } ;
struct TYPE_28__ {scalar_t__ pfx_size; TYPE_9__* fmt; TYPE_5__ sfx; void* post_seek; void* nentry; TYPE_3__ file; int name; void* vindex; void* aindex; TYPE_6__* session; } ;
typedef TYPE_10__ ngx_rtmp_play_ctx_t ;
struct TYPE_30__ {scalar_t__ nelts; } ;
struct TYPE_29__ {TYPE_1__ entries; } ;
typedef TYPE_11__ ngx_rtmp_play_app_conf_t ;
typedef int ngx_int_t ;
struct TYPE_33__ {int log; int pool; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_1 (int ,int ,int ,char*,int *) ;
 int FUNC_2 (int ,int ,int ,char*,...) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (TYPE_10__*,int) ;
 TYPE_10__* FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (char) ;
 TYPE_11__* FUNC_7 (TYPE_6__*,int ) ;
 TYPE_10__* FUNC_8 (TYPE_6__*,int ) ;
 TYPE_8__* FUNC_9 (TYPE_6__*,int ) ;
 int VAR_7 ;
 int FUNC_10 (TYPE_6__*,TYPE_7__*) ;
 void* FUNC_11 (char,int ) ;
 int FUNC_12 (TYPE_6__*,TYPE_10__*,int ) ;
 scalar_t__ FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char*,char*,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_15(ngx_rtmp_session_t *VAR_8, ngx_rtmp_play_t *VAR_9)
{
    ngx_rtmp_play_main_conf_t *VAR_10;
    ngx_rtmp_play_app_conf_t *VAR_11;
    ngx_rtmp_play_ctx_t *VAR_12;
    u_char *VAR_13;
    ngx_rtmp_play_fmt_t *VAR_14, **VAR_15;
    ngx_str_t *VAR_16, *VAR_17;
    ngx_str_t VAR_18;
    ngx_uint_t VAR_19;

    VAR_10 = FUNC_9(VAR_8, VAR_7);

    VAR_11 = FUNC_7(VAR_8, VAR_7);

    if (VAR_11 == ((void*)0) || VAR_11->entries.nelts == 0) {
        goto next;
    }

    FUNC_2(VAR_5, VAR_8->connection->log, 0,
                  "play: play name='%s' timestamp=%i",
                  VAR_9->name, (ngx_int_t) VAR_9->start);

    VAR_12 = FUNC_8(VAR_8, VAR_7);

    if (VAR_12 && VAR_12->file.fd != VAR_2) {
        FUNC_2(VAR_4, VAR_8->connection->log, 0,
                     "play: already playing");
        goto next;
    }



    for (VAR_13 = VAR_9->name; *VAR_13; ++VAR_13) {
        if (FUNC_6(VAR_13[0]) &&
            VAR_13[1] == '.' && VAR_13[2] == '.' &&
            FUNC_6(VAR_13[3]))
        {
            FUNC_2(VAR_4, VAR_8->connection->log, 0,
                         "play: bad name '%s'", VAR_9->name);
            return VAR_1;
        }
    }

    if (VAR_12 == ((void*)0)) {
        VAR_12 = FUNC_5(VAR_8->connection->pool, sizeof(ngx_rtmp_play_ctx_t));
        FUNC_12(VAR_8, VAR_12, VAR_7);
    }

    FUNC_4(VAR_12, sizeof(*VAR_12));

    VAR_12->session = VAR_8;
    VAR_12->aindex = FUNC_11('a', VAR_9->args);
    VAR_12->vindex = FUNC_11('v', VAR_9->args);

    VAR_12->file.log = VAR_8->connection->log;

    FUNC_3(VAR_12->name, VAR_9->name, VAR_6);

    VAR_18.len = FUNC_13(VAR_9->name);
    VAR_18.data = VAR_9->name;

    VAR_15 = VAR_10->fmts.elts;

    for (VAR_19 = 0; VAR_19 < VAR_10->fmts.nelts; ++VAR_19, ++VAR_15) {
        VAR_14 = *VAR_15;

        VAR_16 = &VAR_14->pfx;
        VAR_17 = &VAR_14->sfx;

        if (VAR_16->len == 0 && VAR_12->fmt == ((void*)0)) {
            VAR_12->fmt = VAR_14;
        }

        if (VAR_16->len && VAR_18.len >= VAR_16->len &&
            FUNC_14(VAR_16->data, VAR_18.data, VAR_16->len) == 0)
        {
            VAR_12->pfx_size = VAR_16->len;
            VAR_12->fmt = VAR_14;

            break;
        }

        if (VAR_18.len >= VAR_17->len &&
            FUNC_14(VAR_17->data, VAR_18.data + VAR_18.len - VAR_17->len,
                            VAR_17->len) == 0)
        {
            VAR_12->fmt = VAR_14;
        }
    }

    if (VAR_12->fmt == ((void*)0)) {
        FUNC_2(VAR_4, VAR_8->connection->log, 0,
                      "play: fmt not found");
        goto next;
    }

    VAR_12->file.fd = VAR_2;
    VAR_12->nentry = VAR_0;
    VAR_12->post_seek = VAR_0;

    VAR_17 = &VAR_12->fmt->sfx;

    if (VAR_18.len < VAR_17->len ||
        FUNC_14(VAR_17->data, VAR_18.data + VAR_18.len - VAR_17->len,
                        VAR_17->len))
    {
        VAR_12->sfx = *VAR_17;
    }

    FUNC_1(VAR_3, VAR_8->connection->log, 0,
                   "play: fmt=%V", &VAR_12->fmt->name);

    return FUNC_10(VAR_8, VAR_9);

next:
    return FUNC_0(VAR_8, VAR_9);
}
