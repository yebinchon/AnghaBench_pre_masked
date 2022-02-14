
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int http_tx_mgr; int started; } ;
struct TYPE_8__ {int state; int repo_id; } ;
struct TYPE_7__ {int tasks; } ;
typedef TYPE_1__ SeafCloneManager ;
typedef TYPE_2__ CloneTask ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_5__* VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*,int) ;

int
FUNC_5 (SeafCloneManager *VAR_3,
                                const char *VAR_4)
{
    CloneTask *VAR_5;

    if (!VAR_2->started) {
        FUNC_2 ("System not started, skip canceling clone task.\n");
        return -1;
    }

    VAR_5 = FUNC_0 (VAR_3->tasks, VAR_4);
    if (!VAR_5)
        return -1;

    switch (VAR_5->state) {
    case 129:
    case 133:
    case 132:
        FUNC_4 (VAR_5, VAR_0);
        break;
    case 134:
        FUNC_4 (VAR_5, 137);
    case 131:
        FUNC_1 (VAR_2->http_tx_mgr,
                                     VAR_5->repo_id,
                                     VAR_1);
        FUNC_4 (VAR_5, 137);
        break;
    case 130:
    case 136:
    case 128:
    case 135:



        FUNC_4 (VAR_5, 137);
        break;
    case 137:
        break;
    default:
        FUNC_3 ("[Clone mgr] cannot cancel a not-running task.\n");
        return -1;
    }

    return 0;
}
