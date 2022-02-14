
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int evutil_socket_t ;
struct TYPE_3__ {int result; int (* done_func ) (int ) ;int * pipefd; } ;
typedef TYPE_1__ SeafJob ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6 (evutil_socket_t VAR_1, short VAR_2, void *VAR_3)
{
    SeafJob *VAR_4 = VAR_3;
    char VAR_5[1];

    if (FUNC_2 (VAR_4->pipefd[0], VAR_5, 1) != 1) {
        FUNC_3 ("[Job Manager] read pipe error: %s\n", FUNC_4(VAR_0));
    }
    FUNC_1 (VAR_4->pipefd[0]);
    FUNC_1 (VAR_4->pipefd[1]);
    if (VAR_4->done_func) {
        VAR_4->done_func (VAR_4->result);
    }

    FUNC_0 (VAR_4);
}
