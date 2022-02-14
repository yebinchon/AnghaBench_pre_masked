
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pipefd; int data; int (* thread_func ) (int ) ;int result; } ;
typedef TYPE_1__ SeafJob ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (void *VAR_1, void *VAR_2)
{
    SeafJob *VAR_3 = VAR_1;

    VAR_3->result = VAR_3->thread_func (VAR_3->data);
    if (FUNC_0 (VAR_3->pipefd[1], "a", 1) != 1) {
        FUNC_1 ("[Job Manager] write to pipe error: %s\n", FUNC_2(VAR_0));
    }
}
