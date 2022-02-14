
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sql ;
struct TYPE_3__ {int db; } ;
typedef TYPE_1__ SeafCloneManager ;


 int FUNC_0 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2 (SeafCloneManager *VAR_0, const char *VAR_1)
{
    char VAR_2[256];

    FUNC_0 (VAR_2, sizeof(VAR_2),
              "DELETE FROM CloneTasks WHERE repo_id='%s'",
              VAR_1);
    if (FUNC_1 (VAR_0->db, VAR_2) < 0)
        return -1;

    FUNC_0 (VAR_2, sizeof(VAR_2),
              "DELETE FROM CloneEncInfo WHERE repo_id='%s'",
              VAR_1);
    if (FUNC_1 (VAR_0->db, VAR_2) < 0)
        return -1;

    FUNC_0 (VAR_2, sizeof(VAR_2),
              "DELETE FROM CloneVersionInfo WHERE repo_id='%s'",
              VAR_1);
    if (FUNC_1 (VAR_0->db, VAR_2) < 0)
        return -1;

    FUNC_0 (VAR_2, sizeof(VAR_2),
              "DELETE FROM CloneTasksMoreInfo WHERE repo_id='%s'",
              VAR_1);
    if (FUNC_1 (VAR_0->db, VAR_2) < 0)
        return -1;

    return 0;
}
