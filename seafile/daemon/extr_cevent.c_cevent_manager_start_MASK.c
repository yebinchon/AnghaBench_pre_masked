
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ev_base; } ;
struct TYPE_5__ {int event; int * pipefd; } ;
typedef TYPE_1__ CEventManager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int,int ,TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

int FUNC_5 (CEventManager *VAR_5)
{
    if (FUNC_3(VAR_5->pipefd) < 0) {
        FUNC_2 ("pipe error: %s\n", FUNC_4(VAR_2));
        return -1;
    }

    VAR_5->event = FUNC_1 (VAR_4->ev_base, VAR_5->pipefd[0],
               VAR_1 | VAR_0, VAR_3, VAR_5);
    FUNC_0 (VAR_5->event, ((void*)0));

    return 0;
}
