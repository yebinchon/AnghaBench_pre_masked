
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ SeafCloneManager ;


 scalar_t__ FUNC_0 (int ,char const*) ;

int
FUNC_1 (SeafCloneManager *VAR_0)
{
    const char *VAR_1;

    VAR_1 = "CREATE TABLE IF NOT EXISTS CloneTasks "
        "(repo_id TEXT PRIMARY KEY, repo_name TEXT, "
        "token TEXT, dest_id TEXT,"
        "worktree_parent TEXT, passwd TEXT, "
        "server_addr TEXT, server_port TEXT, email TEXT);";
    if (FUNC_0 (VAR_0->db, VAR_1) < 0)
        return -1;

    VAR_1 = "CREATE TABLE IF NOT EXISTS CloneTasksMoreInfo "
        "(repo_id TEXT PRIMARY KEY, more_info TEXT);";
    if (FUNC_0 (VAR_0->db, VAR_1) < 0)
        return -1;

    VAR_1 = "CREATE TABLE IF NOT EXISTS CloneEncInfo "
        "(repo_id TEXT PRIMARY KEY, enc_version INTEGER, random_key TEXT);";
    if (FUNC_0 (VAR_0->db, VAR_1) < 0)
        return -1;

    VAR_1 = "CREATE TABLE IF NOT EXISTS CloneVersionInfo "
        "(repo_id TEXT PRIMARY KEY, repo_version INTEGER);";
    if (FUNC_0 (VAR_0->db, VAR_1) < 0)
        return -1;

    VAR_1 = "CREATE TABLE IF NOT EXISTS CloneServerURL "
        "(repo_id TEXT PRIMARY KEY, server_url TEXT);";
    if (FUNC_0 (VAR_0->db, VAR_1) < 0)
        return -1;

    return 0;
}
