
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_19__ {scalar_t__ auto_pushed; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_23__ {char* data; int len; } ;
struct TYPE_20__ {TYPE_7__ path; TYPE_7__ recorder; } ;
typedef TYPE_4__ ngx_rtmp_record_done_t ;
struct TYPE_18__ {char* data; int len; } ;
struct TYPE_17__ {char* data; int len; } ;
struct TYPE_21__ {TYPE_2__ basename; TYPE_2__ filename; TYPE_7__ path; TYPE_1__ dirname; TYPE_7__ recorder; } ;
typedef TYPE_5__ ngx_rtmp_exec_ctx_t ;
struct TYPE_22__ {int * conf; int active; } ;
typedef TYPE_6__ ngx_rtmp_exec_app_conf_t ;
typedef int ngx_int_t ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int *,char*) ;
 TYPE_6__* FUNC_2 (TYPE_3__*,int ) ;
 TYPE_5__* FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_7__*) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_2, ngx_rtmp_record_done_t *VAR_3)
{
    u_char VAR_4;
    ngx_uint_t VAR_5, VAR_6;
    ngx_rtmp_exec_ctx_t *VAR_7;
    ngx_rtmp_exec_app_conf_t *VAR_8;

    if (VAR_2->auto_pushed) {
        goto next;
    }

    VAR_8 = FUNC_2(VAR_2, VAR_1);
    if (VAR_8 == ((void*)0) || !VAR_8->active) {
        goto next;
    }

    VAR_7 = FUNC_3(VAR_2, VAR_1);
    if (VAR_7 == ((void*)0)) {
        goto next;
    }

    VAR_7->recorder = VAR_3->recorder;
    VAR_7->path = VAR_3->path;

    VAR_7->dirname.data = VAR_7->path.data;
    VAR_7->dirname.len = 0;

    for (VAR_6 = VAR_7->path.len; VAR_6 > 0; VAR_6--) {
        VAR_4 = VAR_7->path.data[VAR_6 - 1];
        if (VAR_4 == '/' || VAR_4 == '\\') {
            VAR_7->dirname.len = VAR_6 - 1;
            break;
        }
    }

    VAR_7->filename.data = VAR_7->path.data + VAR_6;
    VAR_7->filename.len = VAR_7->path.len - VAR_6;

    VAR_7->basename = VAR_7->filename;

    for (VAR_5 = VAR_7->filename.len; VAR_5 > 0; VAR_5--) {
        if (VAR_7->filename.data[VAR_5 - 1] == '.') {
            VAR_7->basename.len = VAR_5 - 1;
            break;
        }
    }

    FUNC_1(VAR_2, &VAR_8->conf[VAR_0],
                            "record_done");

    FUNC_4(&VAR_3->recorder);
    FUNC_4(&VAR_3->path);

next:
    return FUNC_0(VAR_2, VAR_3);
}
