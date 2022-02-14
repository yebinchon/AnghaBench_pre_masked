
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int * db; } ;
typedef TYPE_2__ SeafRepoManager ;


 char* FUNC_0 (char const*,char*,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int **) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static sqlite3*
FUNC_4 (SeafRepoManager *VAR_0, const char *VAR_1)
{
    sqlite3 *VAR_2;
    char *VAR_3;

    VAR_3 = FUNC_0 (VAR_1, "repo.db", ((void*)0));
    if (FUNC_2 (VAR_3, &VAR_2) < 0)
        return ((void*)0);
    FUNC_1 (VAR_3);
    VAR_0->priv->db = VAR_2;

    char *VAR_4 = "CREATE TABLE IF NOT EXISTS Repo (repo_id TEXT PRIMARY KEY);";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE TABLE IF NOT EXISTS DeletedRepo (repo_id TEXT PRIMARY KEY);";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE TABLE IF NOT EXISTS RepoBranch ("
        "repo_id TEXT PRIMARY KEY, branch_name TEXT);";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE TABLE IF NOT EXISTS RepoLanToken ("
        "repo_id TEXT PRIMARY KEY, token TEXT);";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE TABLE IF NOT EXISTS RepoTmpToken ("
        "repo_id TEXT, peer_id TEXT, token TEXT, timestamp INTEGER, "
        "PRIMARY KEY (repo_id, peer_id));";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE TABLE IF NOT EXISTS RepoPasswd "
        "(repo_id TEXT PRIMARY KEY, passwd TEXT NOT NULL);";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE TABLE IF NOT EXISTS RepoKeys "
        "(repo_id TEXT PRIMARY KEY, key TEXT NOT NULL, iv TEXT NOT NULL);";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE TABLE IF NOT EXISTS RepoProperty ("
        "repo_id TEXT, key TEXT, value TEXT);";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE INDEX IF NOT EXISTS RepoIndex ON RepoProperty (repo_id);";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE TABLE IF NOT EXISTS MergeInfo ("
        "repo_id TEXT PRIMARY KEY, in_merge INTEGER, branch TEXT);";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE TABLE IF NOT EXISTS CommonAncestor ("
        "repo_id TEXT PRIMARY KEY, ca_id TEXT, head_id TEXT);";
    FUNC_3 (VAR_2, VAR_4);




    VAR_4 = "CREATE TABLE IF NOT EXISTS GarbageRepos (repo_id TEXT PRIMARY KEY);";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE TABLE IF NOT EXISTS LockedFiles (repo_id TEXT, path TEXT, "
        "operation TEXT, old_mtime INTEGER, file_id TEXT, new_path TEXT, "
        "PRIMARY KEY (repo_id, path));";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE TABLE IF NOT EXISTS FolderUserPerms ("
        "repo_id TEXT, path TEXT, permission TEXT);";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE INDEX IF NOT EXISTS folder_user_perms_repo_id_idx "
        "ON FolderUserPerms (repo_id);";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE TABLE IF NOT EXISTS FolderGroupPerms ("
        "repo_id TEXT, path TEXT, permission TEXT);";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE INDEX IF NOT EXISTS folder_group_perms_repo_id_idx "
        "ON FolderGroupPerms (repo_id);";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE TABLE IF NOT EXISTS FolderPermTimestamp ("
        "repo_id TEXT, timestamp INTEGER, PRIMARY KEY (repo_id));";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE TABLE IF NOT EXISTS ServerProperty ("
        "server_url TEXT, key TEXT, value TEXT, PRIMARY KEY (server_url, key));";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE INDEX IF NOT EXISTS ServerIndex ON ServerProperty (server_url);";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE TABLE IF NOT EXISTS FileSyncError ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT, repo_id TEXT, repo_name TEXT, "
        "path TEXT, err_id INTEGER, timestamp INTEGER);";
    FUNC_3 (VAR_2, VAR_4);

    VAR_4 = "CREATE INDEX IF NOT EXISTS FileSyncErrorIndex ON FileSyncError (repo_id, path)";
    FUNC_3 (VAR_2, VAR_4);

    return VAR_2;
}
