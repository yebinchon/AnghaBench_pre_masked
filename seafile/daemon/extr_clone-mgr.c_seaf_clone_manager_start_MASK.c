
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int db; int check_timer; } ;
typedef TYPE_1__ SeafCloneManager ;
typedef int GCallback ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int ,char*,int ,TYPE_1__*) ;

int
FUNC_3 (SeafCloneManager *VAR_5)
{
    VAR_5->check_timer = FUNC_1 (VAR_1, VAR_5,
                                       VAR_0 * 1000);

    char *VAR_6 = "SELECT * FROM CloneTasks";
    if (FUNC_2 (VAR_5->db, VAR_6, VAR_3, VAR_5) < 0)
        return -1;

    FUNC_0 (VAR_4, "repo-http-fetched",
                      (GCallback)VAR_2, VAR_5);

    return 0;
}
