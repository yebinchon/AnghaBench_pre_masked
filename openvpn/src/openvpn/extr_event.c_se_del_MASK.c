
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_set {size_t capacity; int ** args; int writefds; int readfds; int fast; } ;
struct event_set {int dummy; } ;
typedef size_t event_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (size_t,int *) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct event_set *VAR_2, event_t VAR_3)
{
    struct se_set *VAR_4 = (struct se_set *) VAR_2;
    FUNC_0(!VAR_4->fast);

    FUNC_2(VAR_1, "SE_DEL ev=%d", (int)VAR_3);

    if (VAR_3 >= 0 && VAR_3 < VAR_4->capacity)
    {
        FUNC_1(VAR_3, &VAR_4->readfds);
        FUNC_1(VAR_3, &VAR_4->writefds);
        VAR_4->args[VAR_3] = ((void*)0);
    }
    else
    {
        FUNC_3(VAR_0, "Error: select/se_del: too many I/O wait events");
    }
    return;
}
