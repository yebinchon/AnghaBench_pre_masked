
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * pipefd; TYPE_1__* manager; } ;
struct TYPE_8__ {int ev_base; } ;
struct TYPE_7__ {int thread_pool; TYPE_2__* session; } ;
typedef TYPE_2__ SeafileSession ;
typedef TYPE_3__ SeafJob ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,TYPE_3__*,int *) ;
 int FUNC_1 (int ,TYPE_3__*,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5 (SeafJob *VAR_3)
{
    SeafileSession *VAR_4 = VAR_3->manager->session;

    if (FUNC_2 (VAR_3->pipefd) < 0) {
        FUNC_3 ("[Job Manager] pipe error: %s\n", FUNC_4(VAR_1));
        return -1;
    }

    FUNC_1 (VAR_3->manager->thread_pool, VAR_3, ((void*)0));

    FUNC_0 (VAR_4->ev_base, VAR_3->pipefd[0], VAR_0, VAR_2, VAR_3, ((void*)0));

    return 0;
}
