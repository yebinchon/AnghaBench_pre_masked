
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ gint64 ;
typedef int gboolean ;
struct TYPE_14__ {scalar_t__ last_update_head_commit_map_time; int head_commit_map_lock; int head_commit_map; int head_commit_map_init; } ;
struct TYPE_13__ {int id; int server_url; } ;
struct TYPE_12__ {int http_server_states; } ;
struct TYPE_11__ {TYPE_1__* current_task; } ;
struct TYPE_10__ {scalar_t__ state; } ;
typedef TYPE_2__ SyncInfo ;
typedef TYPE_3__ SeafSyncManager ;
typedef TYPE_4__ SeafRepo ;
typedef TYPE_5__ HttpServerState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char*,char const*) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static gboolean
FUNC_6 (SeafSyncManager *VAR_4, SeafRepo *VAR_5, const char *VAR_6)
{

    HttpServerState *VAR_7;
    gboolean VAR_8 = VAR_0;
    SyncInfo *VAR_9;


    VAR_9 = FUNC_2 (VAR_4, VAR_5->id);
    if (VAR_9 && VAR_9->current_task && VAR_9->current_task->state == VAR_2)
        return VAR_3;

    VAR_7 = FUNC_0 (VAR_4->http_server_states, VAR_5->server_url);
    if (!VAR_7)
        return VAR_3;

    FUNC_3 (&VAR_7->head_commit_map_lock);

    if (!VAR_7->head_commit_map_init) {
        VAR_8 = VAR_3;
        goto out;
    }

    gint64 VAR_10 = (gint64)FUNC_5(((void*)0));
    if (VAR_10 - VAR_7->last_update_head_commit_map_time >= 90) {
        VAR_8 = VAR_3;
        goto out;
    }

    char *VAR_11 = FUNC_0 (VAR_7->head_commit_map, VAR_5->id);
    if (!VAR_11) {

        VAR_8 = VAR_3;
        goto out;
    }
    if (FUNC_1 (VAR_11, VAR_6) != 0)
        VAR_8 = VAR_3;

out:
    FUNC_4 (&VAR_7->head_commit_map_lock);
    return VAR_8;
}
