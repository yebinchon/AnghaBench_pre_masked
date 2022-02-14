
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* http_tx_mgr; } ;
struct TYPE_8__ {int folder_perm_error_regex; int locked_error_regex; } ;
struct TYPE_7__ {void* error; int repo_name; int repo_id; } ;
struct TYPE_6__ {TYPE_3__* priv; } ;
typedef TYPE_2__ HttpTxTask ;
typedef TYPE_3__ HttpTxPriv ;
typedef int GMatchInfo ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,char const*,int ,int **) ;
 TYPE_4__* VAR_2 ;
 int FUNC_4 (int ,int ,char*,void*) ;

__attribute__((used)) static void
FUNC_5 (HttpTxTask *VAR_3, const char *VAR_4)
{
    HttpTxPriv *VAR_5 = VAR_2->http_tx_mgr->priv;
    GMatchInfo *VAR_6;
    char *VAR_7;

    if (FUNC_3 (VAR_5->locked_error_regex, VAR_4, 0, &VAR_6)) {
        VAR_7 = FUNC_1 (VAR_6, 1);
        FUNC_4 (VAR_3->repo_id, VAR_3->repo_name, VAR_7,
                                             VAR_0);
        FUNC_0 (VAR_7);


        VAR_3->error = VAR_0;
    } else if (FUNC_3 (VAR_5->folder_perm_error_regex, VAR_4, 0, &VAR_6)) {
        VAR_7 = FUNC_1 (VAR_6, 1);

        FUNC_4 (VAR_3->repo_id, VAR_3->repo_name,
                                             (VAR_7[0] == '/') ? (VAR_7 + 1) : VAR_7,
                                             VAR_1);
        FUNC_0 (VAR_7);

        VAR_3->error = VAR_1;
    }

    FUNC_2 (VAR_6);
}
