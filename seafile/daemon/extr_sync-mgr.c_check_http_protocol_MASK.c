
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ gint64 ;
typedef scalar_t__ gboolean ;
struct TYPE_14__ {int http_tx_mgr; } ;
struct TYPE_13__ {scalar_t__ http_version; scalar_t__ last_http_check_time; scalar_t__ checking; void* testing_host; int use_fileserver_port; int effective_host; } ;
struct TYPE_12__ {int server_url; int use_fileserver_port; void* effective_host; } ;
struct TYPE_11__ {int http_server_states; } ;
typedef TYPE_1__ SeafSyncManager ;
typedef TYPE_2__ SeafRepo ;
typedef TYPE_3__ HttpServerState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,void*,TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__,int ,TYPE_3__*) ;
 TYPE_4__* VAR_4 ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static gboolean
FUNC_7 (SeafSyncManager *VAR_5, SeafRepo *VAR_6)
{

    if (!VAR_6->server_url)
        return VAR_1;

    HttpServerState *VAR_7 = FUNC_2 (VAR_5->http_server_states,
                                                  VAR_6->server_url);
    if (!VAR_7) {
        VAR_7 = FUNC_4 ();
        FUNC_1 (VAR_5->http_server_states,
                             FUNC_3(VAR_6->server_url), VAR_7);
    }

    if (VAR_7->checking) {
        return VAR_1;
    }

    if (VAR_7->http_version > 0) {
        if (!VAR_6->effective_host) {
            VAR_6->effective_host = FUNC_3(VAR_7->effective_host);
            VAR_6->use_fileserver_port = VAR_7->use_fileserver_port;
        }
        return VAR_2;
    }


    gint64 VAR_8 = FUNC_6(((void*)0));
    if (VAR_8 - VAR_7->last_http_check_time < VAR_0)
        return VAR_1;




    FUNC_0 (VAR_7->testing_host);
    VAR_7->testing_host = FUNC_3(VAR_6->server_url);

    VAR_7->last_http_check_time = (gint64)FUNC_6(((void*)0));

    if (FUNC_5 (VAR_4->http_tx_mgr,
                                                VAR_6->server_url,
                                                VAR_1,
                                                VAR_3,
                                                VAR_7) < 0)
        return VAR_1;

    VAR_7->checking = VAR_2;

    return VAR_1;
}
