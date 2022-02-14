
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef void* gboolean ;
struct TYPE_8__ {int cdc_average_block_size; int sync_mgr; int clone_mgr; int repo_mgr; int filelock_mgr; int branch_mgr; int fs_mgr; int commit_mgr; int mq_mgr; void* disable_block_hash; void* http_proxy_password; void* http_proxy_username; void* http_proxy_port; void* http_proxy_addr; void* http_proxy_type; void* use_http_proxy; void* disable_verify_certificate; int enable_http_sync; void* sync_extra_temp_file; void* client_name; void* client_id; int ccnet_dir; } ;
typedef TYPE_1__ SeafileSession ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 void* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char**,char**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,void*,void*) ;
 void* FUNC_14 (TYPE_1__*,char*) ;
 void* FUNC_15 (TYPE_1__*,int ,int *) ;
 void* FUNC_16 (TYPE_1__*,int ) ;
 int FUNC_17 (TYPE_1__*,int ,void*) ;

void
FUNC_18 (SeafileSession *VAR_13)
{
    char *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);



    FUNC_4 (VAR_13->ccnet_dir, &VAR_14, &VAR_15);

    VAR_13->client_id = FUNC_16 (VAR_13, VAR_1);
    if (!VAR_13->client_id) {
        if (VAR_14) {
            VAR_13->client_id = FUNC_1 (VAR_14);
        } else {
            VAR_13->client_id = FUNC_2();
        }
        FUNC_17 (VAR_13,
                                           VAR_1,
                                           VAR_13->client_id);
    }

    VAR_13->client_name = FUNC_16 (VAR_13, VAR_2);
    if (!VAR_13->client_name) {
        if (VAR_15) {
            VAR_13->client_name = FUNC_1 (VAR_15);
            FUNC_17 (VAR_13,
                                               VAR_2,
                                               VAR_13->client_name);
        } else {
            VAR_13->client_name = FUNC_1("unknown");
        }
    }

    FUNC_13 ("client id = %s, client_name = %s\n", VAR_13->client_id, VAR_13->client_name);
    FUNC_0 (VAR_14);
    FUNC_0 (VAR_15);

    VAR_13->sync_extra_temp_file = FUNC_14
        (VAR_13, VAR_10);


    VAR_13->enable_http_sync = VAR_12;

    VAR_13->disable_verify_certificate = FUNC_14
        (VAR_13, VAR_4);

    VAR_13->use_http_proxy =
        FUNC_14(VAR_13, VAR_11);

    gboolean VAR_16 =
        FUNC_14(VAR_13, "use_system_proxy");

    if (VAR_16) {
        FUNC_3(VAR_13);
    } else {
        VAR_13->http_proxy_type =
            FUNC_16(VAR_13, VAR_8);
        VAR_13->http_proxy_addr =
            FUNC_16(VAR_13, VAR_5);
        VAR_13->http_proxy_port =
            FUNC_15(VAR_13, VAR_7, ((void*)0));
        VAR_13->http_proxy_username =
            FUNC_16(VAR_13, VAR_9);
        VAR_13->http_proxy_password =
            FUNC_16(VAR_13, VAR_6);
    }

    int VAR_17 = FUNC_15(VAR_13, VAR_0, ((void*)0));
    if (VAR_17 > 0)
        VAR_13->cdc_average_block_size = VAR_17;
    else
        VAR_13->cdc_average_block_size = 0;

    VAR_13->disable_block_hash =
        FUNC_14 (VAR_13, VAR_3);



    FUNC_10 (VAR_13->mq_mgr);
    FUNC_7 (VAR_13->commit_mgr);
    FUNC_9 (VAR_13->fs_mgr);
    FUNC_5 (VAR_13->branch_mgr);
    FUNC_8 (VAR_13->filelock_mgr);
    FUNC_11 (VAR_13->repo_mgr);
    FUNC_6 (VAR_13->clone_mgr);

    FUNC_12 (VAR_13->sync_mgr);

}
