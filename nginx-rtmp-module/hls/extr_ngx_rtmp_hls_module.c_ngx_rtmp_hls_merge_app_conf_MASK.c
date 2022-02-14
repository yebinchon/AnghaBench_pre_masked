
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_19__ {int len; char* data; } ;
struct TYPE_16__ {int playlen; TYPE_8__ path; } ;
typedef TYPE_4__ ngx_rtmp_hls_cleanup_t ;
struct TYPE_17__ {int fraglen; int max_fraglen; int muxdelay; int sync; int playlen; scalar_t__ naming; scalar_t__ slicing; scalar_t__ type; int max_audio_delay; scalar_t__ frags_per_key; int winfrags; TYPE_8__ path; TYPE_8__ key_path; TYPE_11__* slot; scalar_t__ cleanup; scalar_t__ keys; scalar_t__ hls; TYPE_8__ key_url; scalar_t__ granularity; TYPE_8__ base_url; int audio_buffer_size; scalar_t__ nested; scalar_t__ continuous; } ;
typedef TYPE_5__ ngx_rtmp_hls_app_conf_t ;
struct TYPE_18__ {TYPE_2__* conf_file; int pool; } ;
typedef TYPE_6__ ngx_conf_t ;
struct TYPE_13__ {int data; } ;
struct TYPE_15__ {TYPE_1__ name; } ;
struct TYPE_14__ {int line; TYPE_3__ file; } ;
struct TYPE_12__ {int line; int conf_file; TYPE_4__* data; TYPE_8__ name; void* manager; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_6__*,TYPE_11__**) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_8__,TYPE_8__,char*) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,int) ;
 void* FUNC_6 (int ,int) ;
 void* VAR_8 ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static char *
FUNC_8(ngx_conf_t *VAR_9, void *VAR_10, void *VAR_11)
{
    ngx_rtmp_hls_app_conf_t *VAR_12 = VAR_10;
    ngx_rtmp_hls_app_conf_t *VAR_13 = VAR_11;
    ngx_rtmp_hls_cleanup_t *VAR_14;

    FUNC_5(VAR_13->hls, VAR_12->hls, 0);
    FUNC_1(VAR_13->fraglen, VAR_12->fraglen, 5000);
    FUNC_1(VAR_13->max_fraglen, VAR_12->max_fraglen,
                              VAR_13->fraglen * 10);
    FUNC_1(VAR_13->muxdelay, VAR_12->muxdelay, 700);
    FUNC_1(VAR_13->sync, VAR_12->sync, 2);
    FUNC_1(VAR_13->playlen, VAR_12->playlen, 30000);
    FUNC_5(VAR_13->continuous, VAR_12->continuous, 1);
    FUNC_5(VAR_13->nested, VAR_12->nested, 0);
    FUNC_4(VAR_13->naming, VAR_12->naming,
                              VAR_4);
    FUNC_4(VAR_13->slicing, VAR_12->slicing,
                              VAR_5);
    FUNC_4(VAR_13->type, VAR_12->type,
                              VAR_7);
    FUNC_1(VAR_13->max_audio_delay, VAR_12->max_audio_delay,
                              300);
    FUNC_2(VAR_13->audio_buffer_size, VAR_12->audio_buffer_size,
                              VAR_3);
    FUNC_5(VAR_13->cleanup, VAR_12->cleanup, 1);
    FUNC_3(VAR_13->base_url, VAR_12->base_url, "");
    FUNC_5(VAR_13->granularity, VAR_12->granularity, 0);
    FUNC_5(VAR_13->keys, VAR_12->keys, 0);
    FUNC_3(VAR_13->key_path, VAR_12->key_path, "");
    FUNC_3(VAR_13->key_url, VAR_12->key_url, "");
    FUNC_4(VAR_13->frags_per_key, VAR_12->frags_per_key, 0);

    if (VAR_13->fraglen) {
        VAR_13->winfrags = VAR_13->playlen / VAR_13->fraglen;
    }



    if (VAR_13->hls && VAR_13->path.len && VAR_13->cleanup &&
        VAR_13->type != VAR_6)
    {
        if (VAR_13->path.data[VAR_13->path.len - 1] == '/') {
            VAR_13->path.len--;
        }

        VAR_14 = FUNC_6(VAR_9->pool, sizeof(*VAR_14));
        if (VAR_14 == ((void*)0)) {
            return VAR_0;
        }

        VAR_14->path = VAR_13->path;
        VAR_14->playlen = VAR_13->playlen;

        VAR_13->slot = FUNC_6(VAR_9->pool, sizeof(*VAR_13->slot));
        if (VAR_13->slot == ((void*)0)) {
            return VAR_0;
        }

        VAR_13->slot->manager = VAR_8;
        VAR_13->slot->name = VAR_13->path;
        VAR_13->slot->data = VAR_14;
        VAR_13->slot->conf_file = VAR_9->conf_file->file.name.data;
        VAR_13->slot->line = VAR_9->conf_file->line;

        if (FUNC_0(VAR_9, &VAR_13->slot) != VAR_2) {
            return VAR_0;
        }
    }

    FUNC_3(VAR_13->path, VAR_12->path, "");

    if (VAR_13->keys && VAR_13->cleanup && VAR_13->key_path.len &&
        FUNC_7(VAR_13->key_path.data, VAR_13->path.data) != 0 &&
        VAR_13->type != VAR_6)
    {
        if (VAR_13->key_path.data[VAR_13->key_path.len - 1] == '/') {
            VAR_13->key_path.len--;
        }

        VAR_14 = FUNC_6(VAR_9->pool, sizeof(*VAR_14));
        if (VAR_14 == ((void*)0)) {
            return VAR_0;
        }

        VAR_14->path = VAR_13->key_path;
        VAR_14->playlen = VAR_13->playlen;

        VAR_13->slot = FUNC_6(VAR_9->pool, sizeof(*VAR_13->slot));
        if (VAR_13->slot == ((void*)0)) {
            return VAR_0;
        }

        VAR_13->slot->manager = VAR_8;
        VAR_13->slot->name = VAR_13->key_path;
        VAR_13->slot->data = VAR_14;
        VAR_13->slot->conf_file = VAR_9->conf_file->file.name.data;
        VAR_13->slot->line = VAR_9->conf_file->line;

        if (FUNC_0(VAR_9, &VAR_13->slot) != VAR_2) {
            return VAR_0;
        }
    }

    FUNC_3(VAR_13->key_path, VAR_12->key_path, "");

    if (VAR_13->key_path.len == 0) {
        VAR_13->key_path = VAR_13->path;
    }

    return VAR_1;
}
