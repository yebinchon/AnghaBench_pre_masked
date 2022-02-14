
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
typedef TYPE_4__ ngx_rtmp_dash_cleanup_t ;
struct TYPE_17__ {int fraglen; int playlen; int winfrags; TYPE_8__ path; TYPE_11__* slot; scalar_t__ cleanup; scalar_t__ dash; scalar_t__ nested; } ;
typedef TYPE_5__ ngx_rtmp_dash_app_conf_t ;
struct TYPE_18__ {TYPE_3__* conf_file; int pool; } ;
typedef TYPE_6__ ngx_conf_t ;
struct TYPE_13__ {int data; } ;
struct TYPE_14__ {TYPE_1__ name; } ;
struct TYPE_15__ {int line; TYPE_2__ file; } ;
struct TYPE_12__ {int line; int conf_file; TYPE_4__* data; TYPE_8__ name; int manager; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_6__*,TYPE_11__**) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (TYPE_8__,TYPE_8__,char*) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 void* FUNC_4 (int ,int) ;
 int VAR_3 ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_4, void *VAR_5, void *VAR_6)
{
    ngx_rtmp_dash_app_conf_t *VAR_7 = VAR_5;
    ngx_rtmp_dash_app_conf_t *VAR_8 = VAR_6;
    ngx_rtmp_dash_cleanup_t *VAR_9;

    FUNC_3(VAR_8->dash, VAR_7->dash, 0);
    FUNC_1(VAR_8->fraglen, VAR_7->fraglen, 5000);
    FUNC_1(VAR_8->playlen, VAR_7->playlen, 30000);
    FUNC_3(VAR_8->cleanup, VAR_7->cleanup, 1);
    FUNC_3(VAR_8->nested, VAR_7->nested, 0);

    if (VAR_8->fraglen) {
        VAR_8->winfrags = VAR_8->playlen / VAR_8->fraglen;
    }



    if (VAR_8->dash && VAR_8->path.len && VAR_8->cleanup) {
        if (VAR_8->path.data[VAR_8->path.len - 1] == '/') {
            VAR_8->path.len--;
        }

        VAR_9 = FUNC_4(VAR_4->pool, sizeof(*VAR_9));
        if (VAR_9 == ((void*)0)) {
            return VAR_0;
        }

        VAR_9->path = VAR_8->path;
        VAR_9->playlen = VAR_8->playlen;

        VAR_8->slot = FUNC_4(VAR_4->pool, sizeof(*VAR_8->slot));
        if (VAR_8->slot == ((void*)0)) {
            return VAR_0;
        }

        VAR_8->slot->manager = VAR_3;
        VAR_8->slot->name = VAR_8->path;
        VAR_8->slot->data = VAR_9;
        VAR_8->slot->conf_file = VAR_4->conf_file->file.name.data;
        VAR_8->slot->line = VAR_4->conf_file->line;

        if (FUNC_0(VAR_4, &VAR_8->slot) != VAR_2) {
            return VAR_0;
        }
    }

    FUNC_2(VAR_8->path, VAR_7->path, "");

    return VAR_1;
}
