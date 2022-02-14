
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_set {int maxfd; int ** args; int writefds; int readfds; int fast; } ;
struct event_set {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct event_set *VAR_1)
{
    struct se_set *VAR_2 = (struct se_set *) VAR_1;
    int VAR_3;
    FUNC_0(VAR_2->fast);

    FUNC_2(VAR_0, "SE_RESET");

    FUNC_1(&VAR_2->readfds);
    FUNC_1(&VAR_2->writefds);
    for (VAR_3 = 0; VAR_3 <= VAR_2->maxfd; ++VAR_3)
    {
        VAR_2->args[VAR_3] = ((void*)0);
    }
    VAR_2->maxfd = -1;
}
