
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_20__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_19__ ;
typedef struct TYPE_23__ TYPE_18__ ;


typedef char u_char ;
struct TYPE_29__ {TYPE_3__* connection; scalar_t__ auto_pushed; } ;
typedef TYPE_4__ ngx_rtmp_session_t ;
struct TYPE_30__ {char* name; int type; } ;
typedef TYPE_5__ ngx_rtmp_publish_t ;
typedef int ngx_rtmp_dash_frag_t ;
struct TYPE_26__ {int len; char* data; } ;
struct TYPE_24__ {char* data; int len; } ;
struct TYPE_23__ {char* data; int len; } ;
struct TYPE_27__ {int len; char* data; } ;
struct TYPE_31__ {int start_time; TYPE_20__ stream; TYPE_19__ playlist_bak; TYPE_18__ playlist; TYPE_2__ name; scalar_t__ id; int * frags; scalar_t__ opened; } ;
typedef TYPE_6__ ngx_rtmp_dash_ctx_t ;
struct TYPE_25__ {int len; char* data; } ;
struct TYPE_32__ {int winfrags; scalar_t__ nested; TYPE_1__ path; int dash; } ;
typedef TYPE_7__ ngx_rtmp_dash_app_conf_t ;
typedef int ngx_int_t ;
struct TYPE_28__ {int log; int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_4__*,TYPE_5__*) ;
 char* FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,int ,int ,char*,char*,int ) ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_18__*,TYPE_19__*,TYPE_20__*) ;
 int FUNC_4 (int ,int ,int ,char*,char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (TYPE_6__*,int) ;
 void* FUNC_7 (int ,int) ;
 void* FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 int VAR_5 ;
 TYPE_7__* FUNC_10 (TYPE_4__*,int ) ;
 TYPE_6__* FUNC_11 (TYPE_4__*,int ) ;
 int FUNC_12 (TYPE_4__*,TYPE_6__*,int ) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 () ;

__attribute__((used)) static ngx_int_t
FUNC_16(ngx_rtmp_session_t *VAR_6, ngx_rtmp_publish_t *VAR_7)
{
    u_char *VAR_8;
    size_t VAR_9;
    ngx_rtmp_dash_ctx_t *VAR_10;
    ngx_rtmp_dash_frag_t *VAR_11;
    ngx_rtmp_dash_app_conf_t *VAR_12;

    VAR_12 = FUNC_10(VAR_6, VAR_5);
    if (VAR_12 == ((void*)0) || !VAR_12->dash || VAR_12->path.len == 0) {
        goto next;
    }

    if (VAR_6->auto_pushed) {
        goto next;
    }

    FUNC_2(VAR_2, VAR_6->connection->log, 0,
                   "dash: publish: name='%s' type='%s'", VAR_7->name, VAR_7->type);

    VAR_10 = FUNC_11(VAR_6, VAR_5);

    if (VAR_10 == ((void*)0)) {
        VAR_10 = FUNC_8(VAR_6->connection->pool, sizeof(ngx_rtmp_dash_ctx_t));
        if (VAR_10 == ((void*)0)) {
            goto next;
        }
        FUNC_12(VAR_6, VAR_10, VAR_5);

    } else {
        if (VAR_10->opened) {
            goto next;
        }

        VAR_11 = VAR_10->frags;
        FUNC_6(VAR_10, sizeof(ngx_rtmp_dash_ctx_t));
        VAR_10->frags = VAR_11;
    }

    if (VAR_10->frags == ((void*)0)) {
        VAR_10->frags = FUNC_8(VAR_6->connection->pool,
                                 sizeof(ngx_rtmp_dash_frag_t) *
                                 (VAR_12->winfrags * 2 + 1));
        if (VAR_10->frags == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_10->id = 0;

    if (FUNC_14(VAR_7->name, "..")) {
        FUNC_4(VAR_3, VAR_6->connection->log, 0,
                      "dash: bad stream name: '%s'", VAR_7->name);
        return VAR_0;
    }

    VAR_10->name.len = FUNC_13(VAR_7->name);
    VAR_10->name.data = FUNC_7(VAR_6->connection->pool, VAR_10->name.len + 1);

    if (VAR_10->name.data == ((void*)0)) {
        return VAR_0;
    }

    *FUNC_1(VAR_10->name.data, VAR_7->name, VAR_10->name.len) = 0;

    VAR_9 = VAR_12->path.len + 1 + VAR_10->name.len + sizeof(".mpd");
    if (VAR_12->nested) {
        VAR_9 += sizeof("/index") - 1;
    }

    VAR_10->playlist.data = FUNC_7(VAR_6->connection->pool, VAR_9);
    VAR_8 = FUNC_1(VAR_10->playlist.data, VAR_12->path.data, VAR_12->path.len);

    if (VAR_8[-1] != '/') {
        *VAR_8++ = '/';
    }

    VAR_8 = FUNC_1(VAR_8, VAR_10->name.data, VAR_10->name.len);







    VAR_10->stream.len = VAR_8 - VAR_10->playlist.data + 1;
    VAR_10->stream.data = FUNC_7(VAR_6->connection->pool,
                                  VAR_10->stream.len + VAR_1 +
                                  sizeof(".m4x"));

    FUNC_5(VAR_10->stream.data, VAR_10->playlist.data, VAR_10->stream.len - 1);
    VAR_10->stream.data[VAR_10->stream.len - 1] = (VAR_12->nested ? '/' : '-');

    if (VAR_12->nested) {
        VAR_8 = FUNC_1(VAR_8, "/index.mpd", sizeof("/index.mpd") - 1);
    } else {
        VAR_8 = FUNC_1(VAR_8, ".mpd", sizeof(".mpd") - 1);
    }

    VAR_10->playlist.len = VAR_8 - VAR_10->playlist.data;

    *VAR_8 = 0;



    VAR_10->playlist_bak.data = FUNC_7(VAR_6->connection->pool,
                                        VAR_10->playlist.len + sizeof(".bak"));
    VAR_8 = FUNC_1(VAR_10->playlist_bak.data, VAR_10->playlist.data,
                   VAR_10->playlist.len);
    VAR_8 = FUNC_1(VAR_8, ".bak", sizeof(".bak") - 1);

    VAR_10->playlist_bak.len = VAR_8 - VAR_10->playlist_bak.data;

    *VAR_8 = 0;

    FUNC_3(VAR_2, VAR_6->connection->log, 0,
                   "dash: playlist='%V' playlist_bak='%V' stream_pattern='%V'",
                   &VAR_10->playlist, &VAR_10->playlist_bak, &VAR_10->stream);

    VAR_10->start_time = FUNC_15();

    if (FUNC_9(VAR_6) != VAR_4) {
        return VAR_0;
    }

next:
    return FUNC_0(VAR_6, VAR_7);
}
