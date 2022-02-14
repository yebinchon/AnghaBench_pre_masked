
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sql ;
typedef int gboolean ;
struct TYPE_4__ {TYPE_1__* clone_mgr; int repo_mgr; } ;
struct TYPE_3__ {int db; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_0 (int ,char const*) ;
 int FUNC_1 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static gboolean
FUNC_3 (const char *VAR_3)
{
    if (FUNC_0 (VAR_2->repo_mgr, VAR_3))
        return VAR_1;

    char VAR_4[256];
    FUNC_1 (VAR_4, sizeof(VAR_4), "SELECT 1 FROM CloneTasks WHERE repo_id='%s'",
              VAR_3);
    if (FUNC_2 (VAR_2->clone_mgr->db, VAR_4))
        return VAR_1;

    return VAR_0;
}
