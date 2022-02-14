
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_9__ ;
typedef struct TYPE_47__ TYPE_8__ ;
typedef struct TYPE_46__ TYPE_7__ ;
typedef struct TYPE_45__ TYPE_6__ ;
typedef struct TYPE_44__ TYPE_5__ ;
typedef struct TYPE_43__ TYPE_4__ ;
typedef struct TYPE_42__ TYPE_3__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_28__ ;
typedef struct TYPE_39__ TYPE_27__ ;
typedef struct TYPE_38__ TYPE_26__ ;
typedef struct TYPE_37__ TYPE_25__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_14__ ;
typedef struct TYPE_34__ TYPE_13__ ;
typedef struct TYPE_33__ TYPE_12__ ;
typedef struct TYPE_32__ TYPE_11__ ;
typedef struct TYPE_31__ TYPE_10__ ;


typedef char u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_48__ {TYPE_8__* connection; scalar_t__ auto_pushed; } ;
typedef TYPE_9__ ngx_rtmp_session_t ;
struct TYPE_31__ {char* name; int type; } ;
typedef TYPE_10__ ngx_rtmp_publish_t ;
struct TYPE_41__ {size_t len; int data; } ;
struct TYPE_32__ {TYPE_2__ suffix; } ;
typedef TYPE_11__ ngx_rtmp_hls_variant_t ;
typedef int ngx_rtmp_hls_frag_t ;
struct TYPE_40__ {char* data; int len; } ;
struct TYPE_39__ {int len; char* data; } ;
struct TYPE_38__ {char* data; int len; } ;
struct TYPE_37__ {char* data; int len; } ;
struct TYPE_45__ {int len; char* data; } ;
struct TYPE_43__ {int len; char* data; } ;
struct TYPE_42__ {int len; char* data; } ;
struct TYPE_33__ {TYPE_28__ keyfile; TYPE_27__ stream; TYPE_26__ playlist_bak; TYPE_25__ playlist; TYPE_6__ name; TYPE_4__ var_playlist; TYPE_3__ var_playlist_bak; TYPE_11__* var; int * frags; TYPE_14__* aframe; } ;
typedef TYPE_12__ ngx_rtmp_hls_ctx_t ;
struct TYPE_44__ {int len; char* data; } ;
struct TYPE_46__ {int len; char* data; } ;
struct TYPE_34__ {int winfrags; scalar_t__ continuous; scalar_t__ nested; TYPE_5__ key_path; scalar_t__ keys; TYPE_1__* variant; TYPE_7__ path; int hls; } ;
typedef TYPE_13__ ngx_rtmp_hls_app_conf_t ;
typedef int ngx_int_t ;
struct TYPE_35__ {int start; int last; int pos; } ;
typedef TYPE_14__ ngx_buf_t ;
struct TYPE_47__ {int log; int pool; } ;
struct TYPE_36__ {scalar_t__ nelts; TYPE_11__* elts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_9__*,TYPE_10__*) ;
 char* FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,int ,int ,char*,char*,int ) ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_25__*,TYPE_26__*,TYPE_27__*,TYPE_28__*) ;
 int FUNC_4 (int ,int ,int ,char*,char*) ;
 scalar_t__ FUNC_5 (int ,char*,size_t) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (TYPE_12__*,int) ;
 void* FUNC_8 (int ,size_t) ;
 void* FUNC_9 (int ,int) ;
 TYPE_13__* FUNC_10 (TYPE_9__*,int ) ;
 TYPE_12__* FUNC_11 (TYPE_9__*,int ) ;
 int VAR_4 ;
 int FUNC_12 (TYPE_9__*) ;
 int FUNC_13 (TYPE_9__*,TYPE_12__*,int ) ;
 int FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (char*,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_16(ngx_rtmp_session_t *VAR_5, ngx_rtmp_publish_t *VAR_6)
{
    ngx_rtmp_hls_app_conf_t *VAR_7;
    ngx_rtmp_hls_ctx_t *VAR_8;
    u_char *VAR_9, *VAR_10;
    ngx_rtmp_hls_frag_t *VAR_11;
    ngx_buf_t *VAR_12;
    size_t VAR_13;
    ngx_rtmp_hls_variant_t *VAR_14;
    ngx_uint_t VAR_15;

    VAR_7 = FUNC_10(VAR_5, VAR_4);
    if (VAR_7 == ((void*)0) || !VAR_7->hls || VAR_7->path.len == 0) {
        goto next;
    }

    if (VAR_5->auto_pushed) {
        goto next;
    }

    FUNC_2(VAR_2, VAR_5->connection->log, 0,
                   "hls: publish: name='%s' type='%s'",
                   VAR_6->name, VAR_6->type);

    VAR_8 = FUNC_11(VAR_5, VAR_4);

    if (VAR_8 == ((void*)0)) {

        VAR_8 = FUNC_9(VAR_5->connection->pool, sizeof(ngx_rtmp_hls_ctx_t));
        FUNC_13(VAR_5, VAR_8, VAR_4);

    } else {

        VAR_11 = VAR_8->frags;
        VAR_12 = VAR_8->aframe;

        FUNC_7(VAR_8, sizeof(ngx_rtmp_hls_ctx_t));

        VAR_8->frags = VAR_11;
        VAR_8->aframe = VAR_12;

        if (VAR_12) {
            VAR_12->pos = VAR_12->last = VAR_12->start;
        }
    }

    if (VAR_8->frags == ((void*)0)) {
        VAR_8->frags = FUNC_9(VAR_5->connection->pool,
                                 sizeof(ngx_rtmp_hls_frag_t) *
                                 (VAR_7->winfrags * 2 + 1));
        if (VAR_8->frags == ((void*)0)) {
            return VAR_0;
        }
    }

    if (FUNC_15(VAR_6->name, "..")) {
        FUNC_4(VAR_3, VAR_5->connection->log, 0,
                      "hls: bad stream name: '%s'", VAR_6->name);
        return VAR_0;
    }

    VAR_8->name.len = FUNC_14(VAR_6->name);
    VAR_8->name.data = FUNC_8(VAR_5->connection->pool, VAR_8->name.len + 1);

    if (VAR_8->name.data == ((void*)0)) {
        return VAR_0;
    }

    *FUNC_1(VAR_8->name.data, VAR_6->name, VAR_8->name.len) = 0;

    VAR_13 = VAR_7->path.len + 1 + VAR_8->name.len + sizeof(".m3u8");
    if (VAR_7->nested) {
        VAR_13 += sizeof("/index") - 1;
    }

    VAR_8->playlist.data = FUNC_8(VAR_5->connection->pool, VAR_13);
    VAR_9 = FUNC_1(VAR_8->playlist.data, VAR_7->path.data, VAR_7->path.len);

    if (VAR_9[-1] != '/') {
        *VAR_9++ = '/';
    }

    VAR_9 = FUNC_1(VAR_9, VAR_8->name.data, VAR_8->name.len);







    VAR_8->stream.len = VAR_9 - VAR_8->playlist.data + 1;
    VAR_8->stream.data = FUNC_8(VAR_5->connection->pool,
                                  VAR_8->stream.len + VAR_1 +
                                  sizeof(".ts"));

    FUNC_6(VAR_8->stream.data, VAR_8->playlist.data, VAR_8->stream.len - 1);
    VAR_8->stream.data[VAR_8->stream.len - 1] = (VAR_7->nested ? '/' : '-');



    if (VAR_7->variant) {
        VAR_14 = VAR_7->variant->elts;
        for (VAR_15 = 0; VAR_15 < VAR_7->variant->nelts; VAR_15++, VAR_14++) {
            if (VAR_8->name.len > VAR_14->suffix.len &&
                FUNC_5(VAR_14->suffix.data,
                           VAR_8->name.data + VAR_8->name.len - VAR_14->suffix.len,
                           VAR_14->suffix.len)
                == 0)
            {
                VAR_8->var = VAR_14;

                VAR_13 = (size_t) (VAR_9 - VAR_8->playlist.data);

                VAR_8->var_playlist.len = VAR_13 - VAR_14->suffix.len + sizeof(".m3u8")
                                        - 1;
                VAR_8->var_playlist.data = FUNC_8(VAR_5->connection->pool,
                                                    VAR_8->var_playlist.len + 1);

                VAR_10 = FUNC_1(VAR_8->var_playlist.data, VAR_8->playlist.data,
                               VAR_13 - VAR_14->suffix.len);
                VAR_10 = FUNC_1(VAR_10, ".m3u8", sizeof(".m3u8") - 1);
                *VAR_10 = 0;

                VAR_8->var_playlist_bak.len = VAR_8->var_playlist.len +
                                            sizeof(".bak") - 1;
                VAR_8->var_playlist_bak.data = FUNC_8(VAR_5->connection->pool,
                                                 VAR_8->var_playlist_bak.len + 1);

                VAR_10 = FUNC_1(VAR_8->var_playlist_bak.data,
                                VAR_8->var_playlist.data,
                                VAR_8->var_playlist.len);
                VAR_10 = FUNC_1(VAR_10, ".bak", sizeof(".bak") - 1);
                *VAR_10 = 0;

                break;
            }
        }
    }




    if (VAR_7->nested) {
        VAR_9 = FUNC_1(VAR_9, "/index.m3u8", sizeof("/index.m3u8") - 1);
    } else {
        VAR_9 = FUNC_1(VAR_9, ".m3u8", sizeof(".m3u8") - 1);
    }

    VAR_8->playlist.len = VAR_9 - VAR_8->playlist.data;

    *VAR_9 = 0;



    VAR_8->playlist_bak.data = FUNC_8(VAR_5->connection->pool,
                                        VAR_8->playlist.len + sizeof(".bak"));
    VAR_9 = FUNC_1(VAR_8->playlist_bak.data, VAR_8->playlist.data,
                   VAR_8->playlist.len);
    VAR_9 = FUNC_1(VAR_9, ".bak", sizeof(".bak") - 1);

    VAR_8->playlist_bak.len = VAR_9 - VAR_8->playlist_bak.data;

    *VAR_9 = 0;



    if (VAR_7->keys) {
        VAR_13 = VAR_7->key_path.len + 1 + VAR_8->name.len + 1 + VAR_1
              + sizeof(".key");

        VAR_8->keyfile.data = FUNC_8(VAR_5->connection->pool, VAR_13);
        if (VAR_8->keyfile.data == ((void*)0)) {
            return VAR_0;
        }

        VAR_9 = FUNC_1(VAR_8->keyfile.data, VAR_7->key_path.data,
                       VAR_7->key_path.len);

        if (VAR_9[-1] != '/') {
            *VAR_9++ = '/';
        }

        VAR_9 = FUNC_1(VAR_9, VAR_8->name.data, VAR_8->name.len);
        *VAR_9++ = (VAR_7->nested ? '/' : '-');

        VAR_8->keyfile.len = VAR_9 - VAR_8->keyfile.data;
    }

    FUNC_3(VAR_2, VAR_5->connection->log, 0,
                   "hls: playlist='%V' playlist_bak='%V' "
                   "stream_pattern='%V' keyfile_pattern='%V'",
                   &VAR_8->playlist, &VAR_8->playlist_bak,
                   &VAR_8->stream, &VAR_8->keyfile);

    if (VAR_7->continuous) {
        FUNC_12(VAR_5);
    }

next:
    return FUNC_0(VAR_5, VAR_6);
}
