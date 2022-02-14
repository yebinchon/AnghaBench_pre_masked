
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct options {int ce; TYPE_1__* connection_list; int log; int daemon; int verbosity; int config; } ;
struct env_set {int dummy; } ;
struct TYPE_2__ {int len; int ** array; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct env_set*,int *,int) ;
 int FUNC_2 (struct env_set*,char*,int ) ;
 int FUNC_3 (struct env_set*,char*,int ) ;
 int FUNC_4 (struct env_set*,char*,int ) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct env_set *VAR_0, const struct options *VAR_1)
{
    FUNC_4(VAR_0, "config", VAR_1->config);
    FUNC_2(VAR_0, "verb", VAR_1->verbosity);
    FUNC_2(VAR_0, "daemon", VAR_1->daemon);
    FUNC_2(VAR_0, "daemon_log_redirect", VAR_1->log);
    FUNC_3(VAR_0, "daemon_start_time", FUNC_5(((void*)0)));
    FUNC_2(VAR_0, "daemon_pid", FUNC_0());

    if (VAR_1->connection_list)
    {
        int VAR_2;
        for (VAR_2 = 0; VAR_2 < VAR_1->connection_list->len; ++VAR_2)
        {
            FUNC_1(VAR_0, VAR_1->connection_list->array[VAR_2], VAR_2+1);
        }
    }
    else
    {
        FUNC_1(VAR_0, &VAR_1->ce, 1);
    }
}
