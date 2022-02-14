
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sql ;
struct TYPE_6__ {char* repo_id; TYPE_1__* manager; } ;
struct TYPE_5__ {int db; } ;
typedef TYPE_2__ CloneTask ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char*) ;
 int FUNC_1 (int ,char*,int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2 (CloneTask *VAR_1)
{
    char VAR_2[256];

    FUNC_0 (VAR_2, sizeof(VAR_2),
              "SELECT repo_version FROM CloneVersionInfo WHERE repo_id='%s'",
              VAR_1->repo_id);

    FUNC_1 (VAR_1->manager->db, VAR_2,
                                 VAR_0, VAR_1);
}
