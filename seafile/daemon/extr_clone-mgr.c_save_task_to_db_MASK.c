
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int json_t ;
typedef int gchar ;
struct TYPE_6__ {int enc_version; int repo_id; scalar_t__ server_url; scalar_t__ is_readonly; scalar_t__ repo_salt; int * repo_version; scalar_t__ random_key; scalar_t__ passwd; int email; int peer_port; int peer_addr; int worktree; int peer_id; int token; int repo_name; } ;
struct TYPE_5__ {int db; } ;
typedef TYPE_1__ SeafCloneManager ;
typedef TYPE_2__ CloneTask ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,int ,int,...) ;
 scalar_t__ FUNC_9 (int ,char*) ;

__attribute__((used)) static int
FUNC_10 (SeafCloneManager *VAR_0, CloneTask *VAR_1)
{
    char *VAR_2;

    if (VAR_1->passwd)
        VAR_2 = FUNC_8 ("REPLACE INTO CloneTasks VALUES "
            "('%q', '%q', '%q', '%q', '%q', '%q', '%q', '%q', '%q')",
                                VAR_1->repo_id, VAR_1->repo_name,
                                VAR_1->token, VAR_1->peer_id,
                                VAR_1->worktree, VAR_1->passwd,
                                VAR_1->peer_addr, VAR_1->peer_port, VAR_1->email);
    else
        VAR_2 = FUNC_8 ("REPLACE INTO CloneTasks VALUES "
            "('%q', '%q', '%q', '%q', '%q', NULL, '%q', '%q', '%q')",
                                VAR_1->repo_id, VAR_1->repo_name,
                                VAR_1->token, VAR_1->peer_id,
                                VAR_1->worktree, VAR_1->peer_addr,
                                VAR_1->peer_port, VAR_1->email);

    if (FUNC_9 (VAR_0->db, VAR_2) < 0) {
        FUNC_7 (VAR_2);
        return -1;
    }
    FUNC_7 (VAR_2);

    if (VAR_1->passwd && VAR_1->enc_version >= 2 && VAR_1->random_key) {
        VAR_2 = FUNC_8 ("REPLACE INTO CloneEncInfo VALUES "
                               "('%q', %d, '%q')",
                               VAR_1->repo_id, VAR_1->enc_version, VAR_1->random_key);
        if (FUNC_9 (VAR_0->db, VAR_2) < 0) {
            FUNC_7 (VAR_2);
            return -1;
        }
        FUNC_7 (VAR_2);
    }

    VAR_2 = FUNC_8 ("REPLACE INTO CloneVersionInfo VALUES "
                           "('%q', %d)",
                           VAR_1->repo_id, *VAR_1->repo_version);
    if (FUNC_9 (VAR_0->db, VAR_2) < 0) {
        FUNC_7 (VAR_2);
        return -1;
    }
    FUNC_7 (VAR_2);

    if (VAR_1->is_readonly || VAR_1->server_url || VAR_1->repo_salt) {

        json_t *VAR_3 = ((void*)0);
        gchar *VAR_4 = ((void*)0);

        VAR_3 = FUNC_4 ();
        FUNC_5 (VAR_3, "is_readonly", FUNC_3 (VAR_1->is_readonly));
        if (VAR_1->server_url)
            FUNC_5 (VAR_3, "server_url", FUNC_6(VAR_1->server_url));

        VAR_4 = FUNC_2 (VAR_3, 0);
        FUNC_1 (VAR_3);
        VAR_2 = FUNC_8 ("REPLACE INTO CloneTasksMoreInfo VALUES "
                           "('%q', '%q')", VAR_1->repo_id, *VAR_4);
        if (FUNC_9 (VAR_0->db, VAR_2) < 0) {
            FUNC_7 (VAR_2);
            FUNC_0 (VAR_4);
            return -1;
        }
        FUNC_7 (VAR_2);
        FUNC_0 (VAR_4);
    }

    return 0;
}
